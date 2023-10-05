# Hacktoberfest_C

# First Contribution

This project aims to simplify and guide the way beginners make their first contribution. If you are looking to make your first contribution, follow the steps below.

_If you're not comfortable with command line use, [here are tutorials using GUI tools.](#tutorials-using-other-tools)_

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/fork.png" alt="fork this repository" />

#### If you don't have git on your machine, [install it](https://help.github.com/articles/set-up-git/).

## Fork this repository

Fork this repository by clicking on the fork button on the top of this page.

This will create a copy of this repository in your account.

## Clone the repository

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/clone.png" alt="clone this repository" />

Now clone the forked repository to your machine. Go to your GitHub account, open the forked repository, click on the code button and then click the _copy to clipboard_ icon.

Open a terminal and run the following git command:

```

git clone "https://github.com/ravya1108/hactoberfest2023.git"

```

where "url you just copied" (without the quotation marks) is the url to this repository (your fork of this project). See the previous steps to obtain the url.

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/copy-to-clipboard.png" alt="copy URL to clipboard" />

For example:

```

git clone https://github.com/this-is-you/first-contributions.git

```

where `this-is-you` is your GitHub username. Here you're copying the contents of the first-contribution repository on GitHub to your computer.

## Create a branch

Change to the repository directory on your computer (if you are not already there):

```

cd first-contributions

```

Now create a branch using the `git checkout` command:

```

git checkout -b your-new-branch-name

```

For example:

```

git checkout -b add-alonzo-church

```

## Make necessary changes and commit those changes

Now open `Contributors.md` file in a text editor, add your name to it. Don't add it at the beginning or end of the file. Put it anywhere in between. Now, save the file.

<img align="right" width="450" src="https://firstcontributions.github.io/assets/Readme/git-status.png" alt="git status" />

If you go to the project directory and execute the command `git status`, you'll see there are changes.

Add those changes to the branch you just created using the `git add` command:

```

git add Contributors.md

Now commit those changes using the `git commit` command:

git commit -m "Add <your-name> to Contributors list"

```

replacing `<your-name>` with your name.

## Push changes to GitHub

Push your changes using the command `git push`:

```

git push origin -u <add-your-branch-name>

```

replacing `<add-your-branch-name>` with the name of the branch you created earlier.

<details>

<summary> <strong>If you get any errors while pushing, click here:</strong> </summary>

- ### Authentication Error

     <pre>remote: Support for password authentication was removed on August 13, 2021. Please use a personal access token instead.

  remote: Please see https://github.blog/2020-12-15-token-authentication-requirements-for-git-operations/ for more information.

  fatal: Authentication failed for 'https://github.com/<your-username>/first-contributions.git/'</pre>

  Go to [GitHub's tutorial](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account) on generating and configuring an SSH key to your account.

</details>

## Submit your changes for review

If you go to your repository on GitHub, you'll see a `Compare & pull request` button. Click on that button.

<img style="float: right;" src="https://firstcontributions.github.io/assets/Readme/compare-and-pull.png" alt="create a pull request" />

Now submit the pull request.

<img style="float: right;" src="https://firstcontributions.github.io/assets/Readme/submit-pull-request.png" alt="submit pull request" />

Soon I'll be merging all your changes into the master branch of this project. You will get a notification email once the changes have been merged.

## Where to go from here?

Congrats! You just completed the standard _fork -> clone -> edit -> pull request_ workflow that you'll encounter often as a contributor!

Celebrate your contribution and share it with your friends and followers by going to [web app](https://firstcontributions.github.io/#social-share).

You could join our slack team in case you need any help or have any questions. [Join slack team](https://join.slack.com/t/firstcontributors/shared_invite/zt-vchl8cde-S0KstI_jyCcGEEj7rSTQiA).

Now let's get you started with contributing to other projects. We've compiled a list of projects with easy issues you can get started on. Check out [the list of projects in the web app](https://firstcontributions.github.io/#project-list).

### [Additional material](additional-material/git_workflow_scenarios/additional-material.md)

