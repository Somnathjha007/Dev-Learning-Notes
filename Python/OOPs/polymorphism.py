class Car:

    #Constructor
    def __init__(self , brand ,model):   #(self , *parameters)
        self.__brand = brand  # Private attribute
        self.__model = model  # Private attribute
    def set_brand(self,new_brand):
        self.__brand =  new_brand
    def get_brand(self):
        return self.__brand + "!"
    
    def fuel_type(self):
        return "Petrol or Diesel"

 #Elcetric Car class Inheriting Car class
class ElectricCar(Car):
    
    #Constructor
    def __init__(self,brand,model,battery_size):
        super().__init__(brand,model) # Access to parent class
        self.battery_size = battery_size
    def fuel_type(self):
        return "Electric Charge"

    

#Object no 1:
my_car = Car("Toyota","Hiryder")
print(my_car.get_brand())
print(my_car.fuel_type())


#Object no 2
tesla = ElectricCar("Tesla","Model s","85 KWH")
print(tesla.get_brand())
print(tesla.fuel_type())



