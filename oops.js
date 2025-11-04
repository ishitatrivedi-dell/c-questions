function BankAccount(amount){
    let balance = amount;

    function validateAmount(amountToValidate){
     return amountToValidate > 0 && typeof amountToValidate === 'number';
    } // is fuction ko hum return ke andar nai likh sakte kyuki user manupalite kar lega isko agar humne return ke andr rakha to 

    return {
        checkBalance: function(){
           return balance;
        },
        deposit: function(depositAmount){
            if(!validateAmount(depositAmount)){
                balance += depositAmount; 
                console.log("Deposit successful");
              console.log("you have deposited amount is: " + depositAmount);
            }else{
                console.log("Invalid deposit amount");
            }
           
        },
        withdraw: function(withdrawAmount){
           if(validateAmount(withdrawAmount)){
            balance -= withdrawAmount;
            console.log("withdraw successful");
            console.log("you have withdrawn amount is: " + withdrawAmount);
           }else{
            console.log("Invalid withdraw amount");
           }
        }
    }
}
const user1 = BankAccount(5000);
// idhar agar hume balance ko access karna hai to hum user1.balance nahi kar sakte 
// balance variable private hai aur hum usse sirf closure ke through hi access kar sakte hai

console.log(user1.checkBalance()); 
user1.deposit(2000);
console.log(user1.checkBalance());
user1.withdraw(1000);
console.log(user1.checkBalance());


class UserProfile{
    #email;
    #password;
    #loginAttempts;

    username;
    constructor(username, email, password){
        this.username = username;
        this.#email = email;
        this.#password = this.#hashedPassword(password);
        this.#loginAttempts = 0;
    }
    #hashedPassword(password){
        return `my hashed password is ${password}`;
    }
    getEmail(){
        return this.#email;
    }
    updatePassword(oldPassword, newPassword){
    if(this.#password === this.#hashedPassword(oldPassword)) {
        this.#password = this.#hashedPassword(newPassword);
        return "Password updated successfully.";
      }
      else{
        return "Old password is incorrect.";
      } 
    }
    login(user, passworduser){
        if(this.#loginAttempts >= 5){
            return "Account locked due to too many failed login attempts.";
        }
        if(user === this.username || user === this.#email){
            if(this.#hashedPassword(passworduser) === this.#password){
                return "Login successful";
            }else{
                this.#loginAttempts ++;
                return "Invalid password";
            }
           
        }
        else{
         return "User not found";
        }
        
    }
    logout(){
        this.#loginAttempts = 0;
        return "User logged out successfully";
    }
}

const user = new UserProfile("ishita","testa2gmail.com","mypassword123");
console.log(user.getEmail());
console.log(user.login("testa2gmail.com","mypassword123"));


class Animal{

    #isAlive;
    constructor(name, species){
        this.name = name;
        this.species = species;
        this.#isAlive = true;
    }

    eat(food){
        return `${this.name} is eating ${food}.`;
    }
    sleep(){
        return `${this.name} is sleeping.`;
    }
    makeSound(){
        return `${this.name} is making a sound.`;
    }
    getInfo(){
        return `Name: ${this.name}, Species: ${this.species}, Is Alive: ${this.#isAlive}`;
    }
}

class Dog extends Animal{  
    
    constructor(name, breed){
        super(name, "German Shepherd");  // parent class ka constructor call kar rahe hai aur uski values ko assign karega
        this.breed = breed;
        this.#loyaltyLevel = 10;
    }

    #loyaltyLevel;
    makeSound(){
        return `${this.name} barks. Woof! Woof!`;
    } // child class me hum parent class ke method ko override kar sakte hai

    wagTail(){
        return `${this.name} is wagging its tail.`;
    }
    getInfo(){
        return `${super.getInfo()}, Breed: ${this.breed} `;
    }
}

const dog = new Dog("Buddy", "Labrador");
console.log(dog.eat("bone"));
console.log(dog.getInfo()); 


 
//   Q1. create a class "person"
//         --> name , age , email (variable)
//         --> getPersonalInfo() , introducde() --> methods
  
//    create a child class employee that inherits from person class 
//      --> employeeId , deparment , #salary (variable)
//      --> setSalary() , getSalary() , work() , getEmployeeInfo() --> print parent statement exactly and add ID and department also with that , introduce () --> 
//      print parent statemet exactly and add Department also with that
  
 
   
 

class Person{
    name;
    age;
    email
    constructor(name, age, email){
        this.name = name;
        this.age = age;
        this.email = email;
    }
    getPersonalInfo(){
        return `Name: ${this.name}, Age: ${this.age}, Email: ${this.email}`;
    }
    introduce(){
        return `Hello, my name is ${this.name}, and I am ${this.age} years old. You can reach me at ${this.email}.`;
    }
}

class Employee extends Person{
    #salary;
    employeeId;
    department;

    constructor(name, age, email, employeeId, department){
        super(name, age, email);
        this.employeeId = employeeId;
        this.department = department;
        this.#salary = 0;
    }
    setSalary(salary){
       return this.#salary = salary;
    }
    getSalary(){
        return this.#salary;
    }
    work(){
        return `${this.name} is working in the ${this.department} department.`;
    }
    getEmployeeInfo(){
        return `${super.getPersonalInfo()}, Employee ID: ${this.employeeId}, Department: ${this.department}`;
    }
    introduce(){
        return `${super.introduce()} I work in the ${this.department} department.`;
    }
}

class Manager extends Employee{
    constructor(name, age, email, employeeId, department,teamSize){
        super(name, age, email, employeeId, department);
        this.teamSize = teamSize;
        this.#managedEmployees = [];

}
    #managedEmployees;
    addEmployee(employee){
        if(employee instanceof Employee){
            this.#managedEmployees.push(employee);
            return `${employee.name} has been added to the team.`;
        }
    }
    getEmployee(){
        return this.#managedEmployees.map(emp => emp.getEmployeeInfo());
    }

    work(){
        return `${this.name} is managing a team of ${this.teamSize} employees in the ${this.department} department.`;
    }
    introduce(){
        return `${super.introduce()} I manage a team of ${this.teamSize} employees.`;
    }               
}

// create a devloper class that inherits manager class 
// programmingLanguages, #projectCompleted --> variable 
// writeCode(), completeProject() , getProjectCount(), work(), introduce() --> methods




class Devloper extends Manager{
    #projectCompleted;
    programmingLanguages;
    constructor(name , age, email, employeeId, department, teamSize, programmingLanguages){
        super(name,age,email,employeeId,department,teamSize);
        this.programmingLanguages = programmingLanguages;
        this.#projectCompleted = 0;
    }

    writeCode(language){
        if(this.programmingLanguages.includes(language)){
            return `${this.name} is writing code in ${language}.`;
        }else{
            return `${this.name} does not know ${language}.`;
        }
    }
    completeProject(){
        this.#projectCompleted ++;
        return `${this.name} has completed a project. Total projects completed: ${this.#projectCompleted}.`;
    }
    getProjectCount(){
        return this.#projectCompleted;

    }
    work(){
        return `${this.name} is developing software using ${this.programmingLanguages.join(", ")}.`;
    }
    introduce(){
        return `${super.introduce()} I am a developer skilled in ${this.programmingLanguages.join(", ")}.`;
    }


}



const devloper = new Devloper("Ishita", 22, "ishita@gmail.com", "E123", "IT",5, "js");
console.log(devloper.setSalary(80000));

// polymorphism 

class Calculator{
    add(...number){
        if(number.length === 0){
            console.log("No numbers provided");
        };
        if(number.length === 1  && typeof number[0] === 'number'){
            return number[0];
        }
        if(number.length === 2){
            return number[0] + number[1];
        }
        return number.reduce((sum,num) => sum + num, 0);
}
}

const calculator = new Calculator();
console.log(calculator.add());
console.log(calculator.add(5));
console.log(calculator.add(5,10));

class DebitCard {
pay(){
console.log("Payment made using Debit Card");
}
}

class CreditCard {
pay(){
console.log("Payment made using Credit Card");
}
} 

class UPI {
pay(){
console.log("Payment made using UPI");
}
}

function payNow(paymentMethod){
    paymentMethod.pay();
}

const debitCard = new DebitCard();
const creditCard = new CreditCard();
const upi = new UPI();
payNow(debitCard);
payNow(creditCard);
payNow(upi);

class Media{
    constructor(title , artist , duration , filePath){
        this.#title = title;
        this.#artist = artist;
        this.#duration = duration;
        this.#filePath = filePath;
        this.#playCount = 0;
        this.#lastPlayed = null;
        this.#isPlaying = false;
        this.currentPosition = 0;
    }
    #title;
    #artist;
    #duration;
    #filePath;
    #playCount;
    #lastPlayed;
    #isPlaying;
    
    getTitle(){
        return this.#title;

    }

    getArtist(){
        return this.#artist;
    }

    getDuration(){
        return this.#duration;
    }
    getplayCount(){
        return this.#playCount; 
    }
    getLastPlayed(){
        return this.#lastPlayed;
    }
    isCurrentlyPlaying(){
        return this.#isPlaying;
    }

    setCurrentPosition(position){
        this.#isPlaying = position;
    }
    getCurrentPosition(){
        return this.currentPosition;
    }

    updatePlayStatics(){
        this.#playCount ++;
        this.#lastPlayed = new Date.now();
    }

    play(){
        throw new Error("Method 'play()' must be implemented by subclass.");
    }
    pause(){
        throw new Error("Method 'pause()' must be implemented by subclass.");
    }
    stop(){
        throw new Error("Method 'stop()' must be implemented by subclass.");
    }

    getMediaInfo(){
        throw new Error("Method 'getMediaInfo()' must be implemented by subclass.");
    }

    getFormattedDuration(){
        const minutes=Math.floor(this.#duration/60);
        const seconds=this.#duration % 60;
        return` ${minutes}:${seconds.toString().padStart(2,"0")}`;
    }

    getProgress(){
        if(this.#duration === 0) return "0%";
        const progress = (this.currentPosition / this.#duration) * 100;
        return `${progress.toFixed(2)}%`;
    }

}
    class AudioFile extends Media{
        constructor(title, artist, duration, filePath, format , bitrate){
            super(title, artist, duration, filePath);
            this.bitrate = bitrate;
            this.format = format;
            this.#volume = 50;
        }
        #volume;
        #bitrate;
        #format;
        play(){
            this.setCurrentPosition(true);
            // return this.isCurrentlyPlaying();
            this.updatePlayStatics();
            return `Playing audio: ${this.getTitle()} by ${this.getArtist()}`;
        }

        pause(){
            this.setCurrentlyPlaying(false);
            return `Audio paused: ${this.getTitle()}`;
        }
        stop(){
            this.setCurrentlyPlaying(false);
            this.setCurrentPosition(0);
            return `Audio stopped: ${this.getTitle()}`;
        }
        getMediaInfo(){
            return `Title: ${this.getTitle()},
             Artist: ${this.getArtist()}, 
             Duration: ${this.getFormattedDuration()}, 
             Format: ${this.#format},
             Bitrate: ${this.#bitrate}kbps`;
        }
        setVolume(level){
            this.#volume = Math.max(0, Math.min(100, level));
            return `Volume set to ${this.#volume}`;
        }
}


