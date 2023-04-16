# Problem

The lines at the air pump at your gas station are getting too long! You want to optimize the process to help customers more quickly inflate their tires, sports balls, giant parade balloon animals, and other products.

The pump is automatic: you set the pressure to a specific number of pascals and plug the pump into the inflatable product, and it will inflate as needed to that exact pressure. There are only two buttons on the pump: up and down. They increase and decrease the target pressure, respectively, by exactly 1 pascal.

Image of air pump and soccer ball.

There is a line of N customers, each of whom brings exactly P products that they need to get inflated by the pump. You know the target pressure of each product. You can inflate the products from a customer in any order you want, but you cannot change the order of the customers. Specifically, you must inflate all products from the i⁠-th customer before inflating any from the (i+1)⁠-th customer. In between handling two products, if those two products have different target pressures, you need to use the buttons on the pump.

The pump is initially set to 0 pascals, and it can be left at any number after all products of all customers have been inflated. If you order the products of each customer optimally, what is the minimum number of button presses you need?
