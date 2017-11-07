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
```

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

#### Cycles in bash:
```
Syntax:
//for
    for <variable> in <list of values>
    do
    #Action
    done
    
break
continue

//while
    while [[condition]] 
    do
    #Action
    done
    
//Request from the user
    read <variable>
 ```

#### Arithmetic in bash:
```
Syntax:
    let "variable=expression"
Example:
    let "c = 1 + 1" 
    let "c = c + b"   //"c+=b"
    
    ** - Exponentiation
    % - Remainder of the division
```

#### External programs in bash:
```
Syntax:
    variable = 'program'
Example:
    a = 'echo "test"'
    files = 'ls ~'
  
Return code:
    0 - Successful complete
    !0 - Error
    $? - Get the code
    exit <code> - Exit with code
Example:
touch file.txt
echo $?

Checking the return code:
    if 'program'
    #Action if return code = 0
    then
    else
    #Action if return code = 1 or !0
    fi
 ```
 
 #### Function in bash:
 ```
 Syntax:
    name_function ()
    {
      #Action     // $1, $2, $3,...  $# - Arguments in the function
      local var_local = 1     //Are visible only inside the function
    }
    
    name_function() { action_1; action_2; ...}
    if [[ $var=="test" ]]; then
    ...
    for i do 1 2 3 4 5; do
    ...
 ```
