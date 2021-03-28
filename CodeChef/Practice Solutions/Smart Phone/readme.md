## PROBLEM STATEMENT 

You are developing a smartphone app. You have a list of potential customers who are interested in buying your app.
Each customer has a budget and will buy the app at your declared price if and only if the price is less than or 
equal to the customer's budget.


You would want to declare a price such that the revenue you earn from the customers is maximized. Find this maximum 
possible revenue.


## Example
Suppose you have 4 potential customers and their budgets are Rs 30, Rs 20, Rs 53 and Rs 14. In this case, the maximum 
revenue you can get is 60 Rs.


How is 60 Rs the maximum revenue?

Revenue of 60 is achieved by selling the app at either Rs 20 or Rs 30. If we sell the app at 20, then only customer
1, 2 and 3 can buy.  But total revenue = 20*3 = 60 

If we would have sold the app at 14 (the lowest price), then all customers could have bought.
But total revenue would be = 14*4 = 56 (which is lower than 60).


## Input format
Line 1 : N, the total number of potential customers.

Lines 2 to N+1: Each line has the budget of a potential customer.


## Output format
The output consists of a single integer, the maximum possible revenue you can earn from selling your app.


## Sample Input 1
4

30

20

53

14

## Sample Output 1
60

##Sample Input 2
5

40

3

65

33

21

## Sample Output 2
99

