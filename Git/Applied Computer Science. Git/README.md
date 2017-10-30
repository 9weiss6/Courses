```
git config --global user.name "Dmity"          //Setting Git
git config --global user.email my@mail.com
git config --global core.pager 'less -r'
```

## Tasks 2 -
#### Subtask 1:
```
git clone git@github.com:krinkin/git-example.git					//use SSH  cloning into 'git-example'
cd git-example/
vim "name file".md
touch text.txt														//The create new file txt
git add text.txt													//add to the work copy
git commit -am "This is a comment"									//commit changes
git push origin master												//send changes on server
```
#### Subtask 2:
```
git clone https://github.com/krinkin/git-example.git git_example	//use HTTPS cloning into local 
cd git-example/														// repository'git-example'
touch new_file														//The create new file txt
git add new_file													//add to the work copy
git commit -am "This is a comment"									//commit changes
git push origin master												//send changes on server
Username for 'https://github.com': ****
Password for 'https://krinkin@github.com': ****
```
#### Subtask 3:
```
git clone git@github.com:krinkin/git-example.git git_example2       //use SSH cloning into local 
cd git-example2/                                                    // repository'git-example2'
touch new_file                                                      //The create new file txt
git add new_file                                                    //add to the work copy
git commit -am "This is a comment"                                  //commit changes
git push origin master                                              //send changes on server
//Do not need password and username
```
#### Subtask 4:
```
mkdir /tmp/git-x1                                                   //create the directory /tmp/git-x1
cd /tmp/git-x1                                                      //go to directory
ssh-keygen -t rsa                                                   //generation public/private key
cat ~/.ssh/id_rsa.pub   

--- ssh-rsa-key ---                                                 //To the copy in the SSH and GPG keys

```
#### Subtask 5:
```
//We learn how the repository was downloaded
vim .git/config
```
## Tasks 3 -
#### Subtask 1:
```
git status						//shows changes
```
#### Subtask 2:
```
touch function.cpp
touch main.cpp
touch description.txt
git add function.cpp main.cpp description.txt		//added in work copy
git commit -m "init"
touch text.txt
rm description.txt									//delete file
git add text.txt									
git status -s										//shortened view
```

## Tasks 4 -

#### Subtask 1:
```
cat 'namefile' 			//shows the contents of the file 
git .gitignore			//list of files that do not need to be indexed

  *.a				//skip all files of this type other than
  !lib.a			//this file
```
