from time import sleep

from selenium import webdriver

from selenium.webdriver.edge.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select

# Specify the path to your downloaded EdgeDriver
service = Service(r"C:\Users\WHO3KOR\Desktop\edgedriver_win64\msedgedriver.exe")
driver = webdriver.Edge(service=service)

# Now use your training page
driver.get(r"C:\Users\WHO3KOR\Documents\Dev\Dev-Learning-Notes\Python\Libraries\index.html")

# Your test code here...

def clickSection():
    #select the element by id
    element = driver.find_element(By.ID, "increment-btn")

    #clcik on the element
    element.click()
    #wait for 2 sec
    sleep(2)

    #select and clcik the +5 button
    driver.find_element(By.ID,"increment-5-btn").click()
    #wait for 2 sec
    sleep(2)

    #select the resert button and click
    driver.find_element(By.ID,"reset-btn").click()
    sleep(2)
    
def formSection():
    #Text Input
    driver.find_element(By.ID,"username").send_keys("somnath jha")
    sleep(2)
    driver.find_element(By.ID,"email").send_keys("Somnathjha@mail.com")
    sleep(2)
    driver.find_element(By.ID,"password").send_keys("Abc12345")
    sleep(2)
    
    #Selecting country
    country_drop = Select(driver.find_element(By.ID,"country"))
    country_drop.select_by_value("in")
    sleep(2)
    
    #select gender 
    driver.find_element(By.ID,"male").click()
    sleep(2)
    
    #select hobbies
    driver.find_element(By.ID,"gaming").click()
    sleep(2)
    
    #Comment section 
    driver.find_element(By.ID,"comments").send_keys("Hello i am Somnath jha , a for apple and b for banana")
    sleep(2)
    
    #submit form
    driver.find_element(By.ID,"submit-form").click()
    sleep(2)

def formStatus():
    #Check status after submit button pressed
    status = driver.find_element(By.ID,"status-text").text
    print(f"Form submission status : {status}")
    sleep(2)
    #form submission counter
    counter = driver.find_element(By.ID,"form-count").text
    print(f"No of time form submitted :  {counter}")
    sleep(2)
    
def progAndDrop():
    #progressbar start -chcek status then reset - check status
    driver.find_element(By.ID,"start-progress").click()
    st_prog = driver.find_element(By.ID,"status-text").text
    print(f"Progress Status : {st_prog}")  
    sleep(3)
    
    driver.find_element(By.ID,"reset-progress").click()
    sp_prog = driver.find_element(By.ID,"status-text").text
    print(f"Progress Status: {sp_prog}")
    sleep(2)

def dropDown():
    sleep(3)
    driver.find_element(By.ID,"dropdown-btn").click()
    sleep(1)
    driver.find_element(By.ID,"option-2").click()
    sleep(2)




#Function calls Start
# clickSection()
# formSection()
# formStatus()
# progAndDrop()
#dropDown()

#Function Call Ends