# HOWTO

## rm100MB

git filter-branch -f --tree-filter 'rm  -rf MetaHackerCup/2022_F/emerald_exhibiting_sample_out.txt' HEAD

## submodule

1. create now repository in github
1. cmd

    ```text
    git init
    git add .
    git commit -m "first commit"
    git branch -M main
    git remote add origin ${url.git}
    git push -u origin main
    ```

1. git rm -r ${subdir}
1. git submodule add ${url.git} ${subdir}
1. git commit -a -m 1
1. git push
