class Car:

    #Constructor
    def __init__(self , brand ,model):   #(self , *parameters)
        self.brand = brand 
        self.model = model
    def display(self):
        return f"My Car's brand is : {self.brand} and Model is : {self.model}"

 #Elcetric Car class Inheriting Car class
class ElectricCar(Car):
    
    #Constructor
    def __init__(self,brand,model,battery_size):
        super().__init__(brand,model) # Access to parent class
        self.battery_size = battery_size
        

tesla = ElectricCar("Tesla","Model s","85 KWH")
print(tesla.model)
print(tesla.display())










#Standarise Synta
# Object no 1:
# my_car = Car("Toyota","Hiryder")
# print(my_car.brand)
# print(my_car.model)
# print(my_car.display())

#Object no 2:

# new_car = Car("Tata","Nexon")
# print(new_car.display())
