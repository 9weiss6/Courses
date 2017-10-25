### Task 1:
```
pwd				//shows which directory we are in
man ls			//shows help on the command

ls -A --human-readable -l /some/directory

// -A, --almost-all  =  do not list implied . and ..
// -h, --human-readable  =  with -l and\or -s, print human readable sizes (e.g., 1K 234M 2G)
// -l  =  use a long listing format
// ls  =  list information abourt the files

mkdir {name-directory}		//create a directory
rmdir {name-directory}		//delete a directory

touch file {1..10}.txt			//create 10 files 1..10.txt
echo touch file{A..z}.txt		//show result without runnig command
mkdir -p ./dir{a..z}/dir{1..5}	//create multiple katalog with nested subkatolog
