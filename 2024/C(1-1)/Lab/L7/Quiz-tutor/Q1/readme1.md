# Problem Statement

Write a program to calculate the final price of products after applying a discount based on the product type and quantity purchased by a customer. The program should work as follows:

1. Accept input for the product type (`product_type`) as a single character and the quantity of the product purchased (`quantity`) as an integer.
2. The price of the product depends on the product type:
   - Product type A costs 500 units per item.
   - Product type B costs 99.5 units per item.
   - Product type C costs 1499 units per item.
   - Product type D costs 1000 units per item.
3. Calculate the total price by multiplying the price per item by the quantity purchased.
4. If the total price is 2000 units or more, apply a 20% discount to the total price.
5. If the total price is less than 2000 units, apply a 5% discount to the total price.
6. Output the following:
   - The total price before the discount
   - The amount of the discount
   - The final total price after the discount is applied

## Example Program Execution

- Case 1:
  - Input: `A 5`
  - Output:
    ```
    Price:     2500.00
    Discount:  500.00
    Total:     2000.00
    ```

- Case 2:
  - Input: `B 10`
  - Output:
    ```
    Price:     995.00
    Discount:  49.75
    Total:     945.25
    ```
