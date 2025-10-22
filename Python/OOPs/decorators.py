class Car:

    total_car=0 #Class variable -> Currently global
    
    #Constructor
    def __init__(self , brand ,model):   #(self , *parameters)
        self.__brand = brand  # Private attribute
        self.model = model  # Private attribute
        Car.total_car += 1
    def get_model(self):
        return f"Model is {self.model}"
    def fuel_type(self):
        return "Petrol or Diesel"
    
    @property
    def model(self):
        return self.model
    
    
    @staticmethod
    def info():
        return "Cars are apple"
    
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
#Object no 2:
tesla_2 = ElectricCar("BYD","G10","90 KWH")

#my_car.model = "City"   #will not be able to modify the value now.
print(my_car.__model) #no access
#print(my_car.get_model()) # model can be accessed and modified , we need to make it read only
print(my_car.model())



