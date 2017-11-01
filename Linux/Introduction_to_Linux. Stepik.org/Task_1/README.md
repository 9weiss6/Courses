### Task 1: :grey_exclamation:

#### Basics:
```
Ctrl+Alt+T //Start terminal

Ctrl+A  //Go to start
Ctrl+E  //Go to End

Ctrl+Shift+C  //Copy
Ctrl+Shift+V  //Paste

Tab+Tab   //Choose the first option

pwd				//shows which directory we are in
man ls			//shows help on the command

ls -A --human-readable -l /some/directory

// -A, --almost-all  =  do not list implied . and ..
// -h, --human-readable  =  with -l and\or -s, print human readable sizes (e.g., 1K 234M 2G)
// -l  =  use a long listing format
// ls  =  list information abourt the files
```
#### Working with files and directories:
```
mkdir {name-directory}		//create a directory
rmdir {name-directory}		//delete a directory
rm -r {name-directory}    //delete a directory
rm -rf {name-directory}   //delete a directory without questions

cp way_1 way_2              //copy file
cp -r dir_way_1 dir_way_2   //copy dir
mv way_1 way_2              //move file or directory

touch file {1..10}.txt			//create 10 files 1..10.txt
echo touch file{A..z}.txt		//show result without runnig command
mkdir -p ./dir{a..z}/dir{1..5}	//create multiple katalog with nested subkatolog

Ctrl+C  //Pause
Ctrl+Z  //Stop

fg  //foreground
bg  //background

./name_programm                   //Run the program from the current directory
/directory/programm/nam_programm

ls -la    //viewing file properties

//If the property -X, this program can not be executed

chmod +x name_program     //Adds a property -Х to the file

cat name_file             //Output the contents of a file on the screen
less name_file            //Open file for reading
//q-exit; /-search; g-to the top; G-to the end;

nano name_file            //Edit file
//Ctrl+X-exit;
```
#### Input / Output:
```
Program < file    //Take stdin from file
Program > file    //Output stdout to file
Program >> file   //Output stdout to a file with a follow-up
Program 2> file    //Output stderr to file
Program 2>> file   //Output stderr to a file with a follow-up

Program_1 | Program_2 | ... | Program_N   //Pass the value from one program to the next program
```
#### Downloading files:
```
wget link         //Download file in the current directory
wget -P path/to/directory  link   //Save to the specified (указанную) directory
wget -O path/to/directory  link   //Save to the specified directory under the specified name
wget -c               //Resume download file
wget --spider link    //Check file availability by link
wget -i text_file     //Download multiple files of the text file
wget -r -l 'depth' link   //Recursive download by reference
wger -r -A type_file1,type_file2,...,tyoe_fileN link  //Recursive download link only certain file types
```
