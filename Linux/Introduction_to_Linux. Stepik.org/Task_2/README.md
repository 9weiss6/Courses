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
visual = Selection mode   //<v> - transition from normal mode; d (delete); y(copy)
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

#### Copying in vim:
```
//Copy
y[<quantity>] <stroke> - Copy
yy - Copy line

//Paste
p - Insert before
P - Insert after
```  

#### Search and replace in vim:
```
Search:
  /<text> - Search for <text> forward
  ?<text> - Search for <text> back
  n - Next Entry
  N - Previous entry

Replacement:
  :%s/<what are we looking for>/<on which we change>/<flags> 
  Flags: g - many replacements in a row; c - confirmation
```

#### Cancel / Return in vim:
```
Cancel / Return:
  u - Undo the last action
  <Ctrl+r> - Return undone action
```

#### Saving your work in vim:
```
  :w - Save Changes
  :wq - Save and exit
  :!q - Exit without saving
  :w <file> - Save changes to file
```

### Scripts on bash:
```
//bash code
#!/bin/bash                 //Find out the location <which bash>
echo "Hello, world!"
```
```
touch script.sh
vim script.sh             //Paste code
chmod +x script.sh
./script.sh
```

#### Variables in bash:
```
//bash code
Writing (overwriting) the value:
  <name>=<value>
  //example
  path=~/Docs
Reading:
  $<name> or ${<name>}
# - This is a comment
  //example
  path2=$path/file.txt  #path2=~/Docs/file1.txt
  echo "Path is $path2"   #Path is ~/Docs/file1.txt
  echo "Path is ${path}2"   #Path is ~/Docs2
  
  '<only_text>'
  "<text>"
  ```
  
  #### Arguments in bash:
  ```
  Passing arguments to a script:
    ./script.sh arg1 arg2 agr3...
    
  Processing inside the script:
    $1 - The first argument
    $2 - Second argument
    ...
    
    $0 - Name script
    $# - The Number of Arguments
  
    //example
    var="First Argument $1"
    echo "Total passed $# arguments"


#### Branching in bash:
 ```
 Syntax:
    if [[condition]]
    then
    #Action
    fi
 Conditions (lines):
    -z <line>  #line empty
    -n <line>   #line not empry
    <line1> == <line2>
    <line1> != <line2>
 
 //Example
    if [[-z $1]]
    then 
      echo "First Argument is empty"
    fi
    
    if [[$var1 == $var2]]
    then
      echo "The variables are equal"
    fi
    
Conditions [numbers (rows)]:
  <numbers/rows> operation <numbers/rows>
    -eq, (==)
    -ne, (!=)
    -lt, (<)
    -le, (< or =)
    -gt, (>)
    -ge, (> or =)
    
Conditions (files):
    -e <directory>  #path exists
    -f <directory>  #this file
    -d <directory>  #this is the directory
    -s <directory>  #file size greater than 0
    -x <directory>  #executable file
    
Conditions (logical):
    ! - #Negation of a Boolean expression
    && - #Logical "AND"
    || - #Logical "OR"
        
if [[$var1 == $var2]]
    then
      #Action
    else
      #Action else
    fi
    
if [[$var1 == $var2]]
    then
      #Action
    elif [[$var1 != $var2]]
    then
      #Action
    else
      #Action else
    fi
    
case <variable> in
value1)
    #Action
value2)
    #Action
    ;;
 *)
    #Default Action
esac
```
