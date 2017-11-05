### Task 2:

#### Getting to know the server:
```
//login command
ssh login@adress_server -p port

//acess keys
~/.ssh/id_rsa			//private key in personal computer
~/.ssh/id_rsa_pub		//public key in personal computer

~/.ssh/authorized_keys		//key on server directory 

ssh-keygen			//Create key

ssh-add				//Message to the system about the key

cat ~/.id_rsa.pub		//View the public key

nano ~/.ssh/authorised_keys	//Editing keys on the server
```

#### Copy files:
```
scp -P 'port'
login@adress_server:way_1 way_2
//server(way_1);  client(way_2);

scp -P 'port'
way_1 login@adress_server:way_2
//client(way_1);  server(way_2);
```

#### Running applications:
```
nano <name_file>
./<name_programm>
fastqc --help | less    //Easy Browsing
```
#### Control of programs:
```
Ctrl+C  //Pause
Ctrl+Z  //Stop

fg  //Foreground
bg  //Background

jobs  //See the running programs
fg %<number>  //Foreground with number program
bg %<number>  //Background with number program

ps    //See the processes
top   //Track processes
top -u <name_user>    //Monitor user processes

kill <number_processe>    //Complete the process
kill -9 <number_processe>   //Kill the process
```
#### Multi-threaded applications:
```
