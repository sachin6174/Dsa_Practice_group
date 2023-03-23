git reset --hard your_checksum_value
git config pull.rebase true #->it will help in removing all the previous coge and set new stuff
# if merge occur


git checkout file_name  # to go to previous version in case of any error or mistakemade


// everything in staging area will be commited -> so if we want to commit just one file then will have to only stage one file
command to stage one file is:
    git add file-name

command to stage all the file in folder
    git add .   (. is address of current folder  .. is address of parent folder)

git status      to know the staged and unstaged files

git log           to see all commits   (ARR OW DOWN TO SEE other commits and q to quit)

git init   // git will start tracking never initilize a repo with git if already initilized  as all the thing will be lost
// after initilization a .git folder will be created  

to uninitilize a git repo just delete .git folder  (rm -rf .git)

to download a repo from net :
    git clone repo-htttps-link      ->it also work with git protocol link

paste command is shift+insert or ctrl +v or cmd+v

cloning in specific folder

git clone url folder-name


q    to get out of display of something

git remote -v     to check if the the code is linked with online repo and get link 
git remote add  link // to link with remote repo
git push -u origin master   //heer u stand for upstreAM  and used to set default branch where we want to push and ater making default we can only run git push to do so
//
tell about gitignore  and basics of linux