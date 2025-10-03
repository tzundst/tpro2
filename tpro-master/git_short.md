# Command line instructions

## Git global setup

git config --global user.name "Kuznetsov"

git config --global user.email "klexey@gitwork.ru"

## Create a new repository
git clone http://gitwork.ru/klexey/tpro.git

**or** git clone https://gitwork.ru/klexey/tpro.git
    
**or** git clone ssh://git@gitwork.ru/klexey/tpro.git

cd timp

touch README.md

git add README.md

git commit -m "add README"

git push -u origin master

## Existing folder
cd existing_folder

git init

git remote add origin http://gitwork.ru/klexey/tpro.git

git add .

git commit -m "Initial commit"

git push -u origin master


## Existing Git repository
cd existing_repo

git remote rename origin old-origin

git remote add origin http://gitwork.ru/klexey/tpro.git

git push -u origin --all

git push -u origin --tags
