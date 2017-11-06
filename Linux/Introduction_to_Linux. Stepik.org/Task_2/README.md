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
free -g     //Information about RAM
nproc       //Number of processor cores
lscpu       //Processor Information
```

#### Tmux Terminal Manager:
```
Ctrl+Shift+T    //Open a new tab
Alt+<number>    //Go to the specified tab
Ctrl+Shift+W    //Close the tab

tmux            //Run Tmux
Ctrl+B          //Command mode
{Ctrl+B}+C      //Create the new tab
{Ctrl+B}+<number>   //Go to the specified tab
{Ctrl+B}+N      //Go to the next tab
{Ctrl+B}+P      //Go to previous tab
{Ctrl+B}+X or exit    //Close the tab

{Ctrl+B}+D            //Temporarily quit the tmux (D-Detach)
tmux attach or tmux a   //Return to tmux
tmux list-sessions    //View the list of running tmux
{Ctrl+B}+PgUp         //History view mode
PgUp,PgDown,Arrows    //Moving
Esc,Ctrl+C            //Exit history mode

{Ctrl+B}+"            //Horizontal separation
{Ctrl+B}+%            //Vertical separation
{Ctrl+B}+!            //Final separation
```
### Task 3:

#### Advanced topics (vim,bash,et al.):
```
//Editor Vim
vim
vim file_1
vim file_1 file_2 file_3

:q      //Exit
:help   //Information

vimtutor      //Tutorial
```
#### Operating mode vim:
```
normal = commands start with ':'
insert = exit with <Esc>, <Ctrl+C>
visual = Selection mode
```

#### Moving in vim:
```  
By symbols:
  Arrows, h;j;k;l
According to:
  w,W - To the beginning of the next word
  e,E - At the end of the next word
  b,B - To the beginning of the previous word
  
  0 - Start of line
  ^ - The first non-whitespace character
  $ - End of line
  
  gg - Start of file
  G - End of file
  :21<Enter> - Go to line 14

  <Ctrl+U> - Up on the floor
  <Ctrl+D> - Down to the screen floor
```

#### Delete in vim:
```
By symbols:
  x - Symbol under the cursor
  X - The character before the cursor
At once a lot:  d[<quantity>] <stroke>
  de - Delete to the end of the current word
  d$ - Delete to end of line
  d<5>w - Remove <5> words
  dd - Delete row (example: d10d)
```

#### Create in vim:
```
i - Enter the insert mode
a - Move the cursor to the right and enter the insert mode
i = ^i
A = $a
o - Insert a empty line from the BOTTOM and edit it
O - Insert a empty line from the TOP and edit it
```

#### Copying:
```
//Copy
y[<quantity>] <stroke> - Copy
yy - Copy line

//Paste
p - Insert before
P - Insert after
```  

#### Search and replace:
```
Search:
  /<text> - Search for <text> forward
  ?<text> - Search for <text> back
  n - Next Entry
  N - Previous entry

Replacement:
  :%s/<what are we looking for>/<on which we change>/<flags> - Flags: 9 - many replacements in a row; c - confirmation
```

