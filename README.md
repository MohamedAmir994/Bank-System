# Bank System 
A bank system Based on the client-server model and developed with Qt framework.


## About The System:

A graphical user interface (GUI) allows the user to perform several services depending on the user permissions
there are two user types :  
- Regular User   
- Admin  

### Admin services:
- View transaction history of a particular client.  
- View account balance of a particular client.  
- Get account number of a particular client.  
- View Bank dataBase  
- Create a client account .  
- Update a client account data.  
- Delete client account.  

### User services:
- View transaction history of a particular client.  
- View account balance of a particular client.  
- Get account number of a particular client.  
- Make a transaction either a deposit or a withdrawal.  
- Make a transfer from one account to another.  

you can log in to the system either as a regular user or as an admin.

## System Details

### Server Application :

- multithreaded server capable of handling multiple requests concurrently.
- Each functionality provided by the gui is implemented in a separate class which complies the single responsibility principle.  


### Client Application:
- Gui application.  
- Singleton pattern used to create the application.  

## System Architecture:
- Platform independent since it's designed using Qt framework.  
- OOP principles are applied.  
- Single responsibility principle is applied where each user request is implemented as a singlet class.  
- singleton design patterns applied.  

