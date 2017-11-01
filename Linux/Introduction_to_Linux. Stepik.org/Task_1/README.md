### Task 1:

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
wget -P link  path/to/directory    //Save to the specified (указанную) directory
wget -O link  path/to/directory    //Save to the specified directory under the specified name
wget -c               //Resume download file
wget --spider link    //Check file availability by link
wget -i text_file     //Download multiple files of the text file
wget -r -l 'depth' link   //Recursive download by reference
wger -r -A type_file1,type_file2,...,tyoe_fileN link  //Recursive download link only certain file types
```
#### Archivers
```
//Unpack
unzip archive.zip		//Unpack archive
gunzip archive.gz		//Unpack archive and delete archive file *.gz

//Packing
zip archive.zip file_1, file_2...file_N		//Packing files and\or files in the archive
gzip file		//Packing only file

tar -cvf archive.tar file_1, file_2...file_N	//Packing in archive without compression
	-c = Create archive
	-v = Output on display
	-f = File on filesystem (at the end)
gzip archive.tar				//Packing archive *.tar

tar -zcvf archive.tar.gz file_1, file_2,..file_N	//Packing files in the archive *.gz

tar -xvf archive.tar					//Unpack archive tar

tar -xzvf archive.tar.gz				//Unpack archive gzip

//Another archivers

bzip2 file_archive
bunzip2 file _archive.bz2

tar -cjvf archive.tar.bz2 file_1, file_2, ... file_N		//Packing
tar -xjvf archive.tar.bz2 					//Unpacking
```

#### Data Search
```
find <directory> -name "<name_file>"

find ~/ -name "file.txt"		//Find file.txt in the home directory
find ~/ -name "*.txt"			//Find all txt file in the home directory

//Search by content
grep "<string>" <file>			//Search for a string in a file
grep -c "<string>" <file>		//Number of string references
grep -r "<string>" <directory>		//Searching for a line in a directory

grep --color "Hello" name.txt 		//Highlight(COLOR) found words
grep -v "hello" name.txt		//Displays rows in which there is no search
```
