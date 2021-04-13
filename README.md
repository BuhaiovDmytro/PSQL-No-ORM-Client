# PSQL-No-ORM-Client
### PSQL Client with console user interface
Functionality:
- Add rows 
- Delete rows
- Edit rows
- Generate random rows 
- Search rows around the database

# How to use

 - Clone or download the repository
 ```linux
 git clone git@github.com:BuhaiovDmytro/PSQL-No-ORM-Client.git
 cd PSQL-No-ORM-Client
```
 - Build the project with cmake
  ```linux
mkdir build
cd build
cmake ..
cmake --build .
```
 - Launch program 

Use
 ``` ./PSQL_Client <password> ```
to launch program with default parameters(```user = postgres host = 127.0.0.1 dbname = postgres```)

Or ```./PSQL_Client <password> <user> <host> <dbname>``` to connect to Postgres with your own parameters


- Follow program's instructions
