import tkinter as tk
import time
import random


class HanoiGUI:
    def __init__(self, root, n):
        self.root = root
        self.n = n
        self.canvas = tk.Canvas(root, width=600, height=400, bg='white')
        self.canvas.pack()
        self.rods = {'A': 100, 'B': 300, 'C': 500}
        self.rod_disks = {'A': [], 'B': [], 'C': []}
        self.moves = []
        self.history = []
        self.create_rods()
        self.create_disks()
        self.create_buttons()
        hanoi(self.n, 'A', 'C', 'B', self)

    def create_rods(self):
        for rod in self.rods.values():
            self.canvas.create_line(rod, 100, rod, 300, width=10)

    def create_disks(self):
        colors = self.generate_unique_colors(self.n)
        for i in range(self.n):
            width = 20 + (self.n - i) * 20
            color = colors[i]
            disk = self.canvas.create_rectangle(0, 0, width, 20, fill=color)
            self.rod_disks['A'].append(disk)
            self.canvas.move(disk, self.rods['A'] - width // 2, 280 - i * 20)

    def generate_unique_colors(self, n):
        colors = set()
        while len(colors) < n:
            color = "#{:06x}".format(random.randint(0, 0xFFFFFF))
            colors.add(color)
        return list(colors)

    def create_buttons(self):
        self.next_button = tk.Button(
            self.root, text="Next Move", command=self.next_move)
        self.next_button.pack(side=tk.LEFT)
        self.prev_button = tk.Button(
            self.root, text="Previous Move", command=self.prev_move)
        self.prev_button.pack(side=tk.LEFT)
        self.reset_button = tk.Button(
            self.root, text="Reset", command=self.reset)
        self.reset_button.pack(side=tk.LEFT)

    def move_disk(self, disk, source, target):
        if disk not in self.rod_disks[source]:
            print(f"Error: Disk {disk} is not in rod {source}")
            return

        # Get current coordinates of the disk
        x0, y0, x1, y1 = self.canvas.coords(disk)
        # Calculate horizontal (dx) movement from source to target
        dx = self.rods[target] - self.rods[source]
        # Calculate vertical (dy) movement for correct stacking in target rod
        dy = 280 - 20 * len(self.rod_disks[target]) - y0
        self.canvas.move(disk, dx, dy)
        self.root.update()
        time.sleep(0.3)  # Slightly reduce the sleep for faster animation

    def next_move(self):
        if self.moves:
            disk, source, target = self.moves.pop(0)
            # Ensure the source rod is not empty before popping
            if self.rod_disks[source]:
                # Store the move in history
                self.history.append((disk, source, target))
                self.move_disk(disk, source, target)
                # Correctly append to the target rod and remove from the source rod
                self.rod_disks[target].append(self.rod_disks[source].pop())
            else:
                print(f"Error: Trying to move from empty rod {source}")
        else:
            print("No more moves available")

    def prev_move(self):
        if self.history:
            disk, source, target = self.history.pop()  # Get the last move from history
            self.moves.insert(0, (disk, source, target)
                              )  # Add it back to moves
            self.move_disk(disk, target, source)  # Move the disk back
            self.rod_disks[source].append(
                self.rod_disks[target].pop())  # Reverse the disk list

    def reset(self):
        self.canvas.delete("all")
        self.rod_disks = {'A': [], 'B': [], 'C': []}
        self.moves = []
        self.history = []
        self.create_rods()
        self.create_disks()
        hanoi(self.n, 'A', 'C', 'B', self)


def hanoi(n, source, target, auxiliary, gui):
    if n == 1:
        if gui.rod_disks[source]:  # Check if the list is not empty
            disk = gui.rod_disks[source][-1]
            gui.moves.append((disk, source, target))
        return
    hanoi(n-1, source, auxiliary, target, gui)
    if gui.rod_disks[source]:  # Check if the list is not empty
        disk = gui.rod_disks[source][-1]
        gui.moves.append((disk, source, target))
    hanoi(n-1, auxiliary, target, source, gui)


# Example usage:
root = tk.Tk()
n = 5  # Number of disks
gui = HanoiGUI(root, n)
root.mainloop()
