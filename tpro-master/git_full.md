# Command line instructions

## Git Help

git help (command)

git (command) --help

man git-(command)

## Git global setup

git config --global user.name "Kuznetsov"

git config --global user.email "klexey@gitwork.ru"

git config --global core.editor mcedit

git config --global core.quotepath false

git config --list

## Create a new repository from remote

git clone http://gitwork.ru/klexey/tpro.git

**or** git clone https://gitwork.ru/klexey/tpro.git

**or** git clone ssh://git@gitwork.ru/klexey/tpro.git

cd tpro

touch README.md

git add README.md

git commit -m "add README"

git push -u origin master

-u добавляет слежение за веткой origin/master дальнейшие push можно делать без -u

## Create a new repository from local Existing folder

cd existing_folder

git init

git remote add origin http://gitwork.ru/klexey/tpro.git

git add .

git commit -m "Initial commit"

git push -u origin master

-u добавляет слежение за веткой origin/master дальнейшие push можно делать без -u

## Existing Git repository

cd existing_repo

git remote rename origin old-origin

git remote add origin http://gitwork.ru/klexey/tpro.git

git push -u origin --all

git push -u origin --tags

-u добавляет слежение за веткой origin/master дальнейшие push можно делать без -u

## View remote repositories

git remote -v

git remote show origin

## Fetch Pull Merge
Pull = Fetch + Merge

git fetch origin

git status

git merge

or

git pull origin

## Merge

git merge

git merge (branch)

git mergetool ~вызвать средство разоешения конфликтов 

## Untracked-Unmodified-Modified-Staged

### Untracked to Tracked (Staged)

git add 

### Staged to Unmodified

git commit

### Unmodified to Modified

Just edit file

### Modified to Staged

git add

## Status

git status

git status -s  ~сокращенный


## Diff

git diff

git diff --staged

## Commit

git commit

-m "committext"  ~сделать commit без вызова редактора

-u  ~показать неотслеживаемые файлы

--amend ~вместо нового коммита добавляет все зафиксированные изменения в предыдущий коммит, обновляя его

## Remove files

git rm (file)  ~удалить файл

git rm --cahced (file) ~удалить файл из области индексирования, сделать его снова неотслеживаемым

## Move files

git mv (file) (newfile)

## LOG

git log

git log --oneline --decorate --graph --all

-p ~различия между коммитами

-2 ~показать 2 коммита

--stat ~показать статистику

--oneline ~по одной строке на коммит

--graph ~показать граф коммитов

--all

## Branches

git branch ~показать ветки (*-current)

git branch -v ~показать ветки с коммитами

git branch --merged

git branch --no-merged

git branch (newbranch) ~создать новую ветку

git checkout (branch) ~переключиться на ветку

git branch -d (branch) ~удалить ветку

