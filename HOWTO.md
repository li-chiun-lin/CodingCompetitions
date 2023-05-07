# HOWTO

## rm100MB

git filter-branch -f --tree-filter 'rm  -rf MetaHackerCup/2022_F/emerald_exhibiting_sample_out.txt' HEAD

## submodule

1. create now repository in github, e.x. ${url.git}
2. go to ${subdir}

    ```text
    git init
    git add .
    git commit -m "first commit"
    git branch -M main
    git remote add origin ${url.git}
    git push -u origin main
    ```

3. #git rm -r ${subdir}
4. git submodule add ${url.git} ${subdir}
5. git commit -a -m 1
6. git push
