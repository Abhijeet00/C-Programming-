git --version gives version of github

git config --global : configures globally 
git config --global user.name "Abhijeet"
git config --global user.email "Abhijeet2k07@gmail.com"
git config --list gives information/ Credentials stored / setup

git clone <https link> : clones a repository on our local machine 

cd means change directory 
cd testrepo 
cd ..	Go back one folder
cd ..\..	Go back two folders
cd \	Go to the root of the current drive
cd ~	Go to your user home directory
cd foldername	Enter a folder
cd -	Not supported as in Linux/macOS

ls gives list of files in that folder
ls -force gives list of files hidden files in that folder 

git add index.html style.css script.js , adds 3 files to staging area of git 
git restore --staged index.html removes the index.html file from staging area

git add index.html
git add style.css
git add script.js
git commit -m "Added basic website structure"

git add . adds all the files in the directory to staging area
git commit -m "message" to commit whole staging area

git commands:
git commit -m "First file"
git remote add origin <link> : adds github remote repo to the link of repo we gave
git remote -v gives link of remote repo linked
git branch : gives which branch we are in 
git branch -M main

git push :
git push origin main ( every single time )
git push -u origin main (once per local repo) --> git push (other times)
git push -u origin main --force : Forces git push ( Clears whole repo though so be careful)
