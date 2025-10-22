class Car:

    total_car=0 #Class variable -> Currently global
    
    #Constructor
    def __init__(self , brand ,model):   #(self , *parameters)
        self.__brand = brand  # Private attribute
        self.__model = model  # Private attribute
        Car.total_car += 1
    def fuel_type(self):
        return "Petrol or Diesel"
    
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
my_car_2 = Car("Tata","Nexon")
#Object no 3
tesla = ElectricCar("Tesla","Model s","85 KWH")
#Object no 4
tesla_2 = ElectricCar("BYD","G10","90 KWH")

print(Car.info())




