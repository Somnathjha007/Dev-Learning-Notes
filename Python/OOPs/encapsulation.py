class Car:

    #Constructor
    def __init__(self , brand ,model):   #(self , *parameters)
        self.__brand = brand  # Private attribute
        self.__model = model  # Private attribute
    def set_brand(self,new_brand):
        self.__brand =  new_brand
    def get_brand(self):
        return self.__brand + "!"
    

 #Elcetric Car class Inheriting Car class
class ElectricCar(Car):
    
    #Constructor
    def __init__(self,brand,model,battery_size):
        super().__init__(brand,model) # Access to parent class
        self.battery_size = battery_size

    def set_brand(self,new_brand): #Override -> But no extra logic
        super().set_brand(new_brand)
    def get_brand(self):           #Override -> But nop extra logic
        return super().get_brand() + "!"
    

#Object no 1:
my_car = Car("Toyota","Hiryder")
#print(my_car.__brand) # after putting underscore before the variable in init/constructor it becomes private, and cant be accessed by the object directly , hence we use a getter function to do so.
# print(my_car.model)
# print(my_car.display())

# print(my_car.get_brand())

# my_car.set_brand("Totoya")

# print(my_car.get_brand())


tesla = ElectricCar("Tesla","Model s","85 KWH")
# print(tesla.model)
# print(tesla.display())
tesla.set_brand("Electric Telsa")
print(tesla.get_brand())


