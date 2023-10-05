# Hacktoberfest 2023

## First Contributions

Welcome to the First Contributions project, designed to help beginners make their first open-source contribution. If you're new to this process, follow the steps below.

_If you're not familiar with the command line, you can use [GUI tools](#tutorials-using-other-tools) to help you._

![Fork this repository](https://firstcontributions.github.io/assets/Readme/fork.png)

### Prerequisites

Before you start, ensure you have [Git installed](https://help.github.com/articles/set-up-git/) on your machine.

## Step 1: Fork this repository

Begin by forking this repository. Click the "Fork" button at the top of this page. This action will create a copy of this repository in your GitHub account.

## Step 2: Clone the repository

![Clone this repository](https://firstcontributions.github.io/assets/Readme/clone.png)

Next, clone your forked repository to your local machine. Go to your GitHub account, open the forked repository, click on the "Code" button, and then click the "Copy to clipboard" icon.

Open your terminal and run the following command, replacing `"url you just copied"` with the copied URL:

```shell
git clone "url you just copied"
```

For example:

```shell
git clone https://github.com/your-username/first-contributions.git
```

## Step 3: Create a branch

Change to the repository directory on your computer (if you are not already there):

```shell
cd first-contributions
```

Now, create a branch using the `git checkout` command:

```shell
git checkout -b your-new-branch-name
```

For example:

```shell
git checkout -b add-alonzo-church
```

## Step 4: Make necessary changes and commit them

Open the `Contributors.md` file in a text editor and add your name to it. Don't add it at the beginning or end of the file; place it anywhere in between. Save the file.

![Git Status](https://firstcontributions.github.io/assets/Readme/git-status.png)

If you run the `git status` command in your project directory, you'll see there are changes. Add those changes to the branch you created using the `git add` command:

```shell
git add Contributors.md
```

Now commit those changes:

```shell
git commit -m "Add <your-name> to Contributors list"
```

Replace `<your-name>` with your name.

## Step 5: Push your changes to GitHub

Use the `git push` command to push your changes to GitHub:

```shell
git push origin -u <add-your-branch-name>
```

Replace `<add-your-branch-name>` with the name of the branch you created earlier.

<details>

<summary> <strong>If you encounter errors while pushing, click here:</strong> </summary>

- ### Authentication Error

  If you encounter an authentication error, it's because GitHub has removed support for password authentication. You need to use a personal access token instead. [GitHub's tutorial](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account) can guide you through generating and configuring an SSH key for your account.

</details>

## Step 6: Submit your changes for review

Go to your repository on GitHub, and you'll see a "Compare & pull request" button. Click on that button.

![Create a pull request](https://firstcontributions.github.io/assets/Readme/compare-and-pull.png)

Submit the pull request.

![Submit pull request](https://firstcontributions.github.io/assets/Readme/submit-pull-request.png)

You will receive a notification email once your changes have been merged.

## What's next?

Congratulations! You've completed the standard _fork -> clone -> edit -> pull request_ workflow for contributing. Celebrate your contribution and share it with friends and followers using the [web app](https://firstcontributions.github.io/#social-share).

If you have questions or need help, you can join our Slack team: [Join Slack Team](https://join.slack.com/t/firstcontributors/shared_invite/zt-vchl8cde-S0KstI_jyCcGEEj7rSTQiA).

Now, let's get you started with contributing to other projects. We've compiled a list of projects with easy issues for newcomers. Check it out [here](https://firstcontributions.github.io/#project-list).

#### [Additional Material](additional-material/git_workflow_scenarios/additional-material.md)