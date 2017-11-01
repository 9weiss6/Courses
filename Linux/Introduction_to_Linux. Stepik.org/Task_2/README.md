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
