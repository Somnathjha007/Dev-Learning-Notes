class Car:
    def __init__(self,model,brand):
        self.model=model
        self.brand=brand
    def get_model(self):
        return f"Model is {self.model}"
    def fuel_type(self):
        return "Petrol or Diesel"
class Engine:
    def __init__(self,typee):
        self.typee=typee
    
    def get_engine(self):
        return f"Engine Type : {self.typee}"
    
class ElectricCar(Car,Engine):
    def __init__(self,model,brand,typee,battery_cap):
        Car.__init__(self,model,brand)
        Engine.__init__(self,typee)
        self.battery_cap=battery_cap
    def get_battery(self):
        return f"Battery capacity  : {self.battery_cap}"
        
my_ec = ElectricCar("Tata","Curve","Electric","60 KWH")
print(my_ec)

print(my_ec.fuel_type())
print(my_ec.get_engine())
print(my_ec.get_battery())
