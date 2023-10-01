# Welcome to First Contributions!

This project aims to simplify and guide beginners through their first contribution. If you're looking to make your first contribution, follow the steps below.

_If you're not comfortable with the command line, [check out tutorials using GUI tools.](#tutorials-using-other-tools)_

![Fork this repository](https://firstcontributions.github.io/assets/Readme/fork.png)

## Getting Started

### Prerequisites

Make sure you have Git installed on your machine. If not, you can [install it here](https://help.github.com/articles/set-up-git/).

### Fork this Repository

Fork this repository by clicking on the "Fork" button at the top of this page. This will create a copy of this repository in your GitHub account.

### Clone the Repository

![Clone this repository](https://firstcontributions.github.io/assets/Readme/clone.png)

Now, clone the forked repository to your machine:
1. Open your forked repository on GitHub.
2. Click on the "Code" button and then click the "Copy to clipboard" icon.
3. Open a terminal and run the following Git command:

    ```sh
    git clone "url you just copied"
    ```

    Replace `"url you just copied"` (without the quotes) with the URL of your forked repository.

    For example:

    ```sh
    git clone https://github.com/your-username/first-contributions.git
    ```

### Making Your Changes

1. Change to the repository directory on your computer (if you're not already there):

    ```sh
    cd first-contributions
    ```

2. Create a new branch for your changes:

    ```sh
    git checkout -b your-new-branch-name
    ```

    Replace `your-new-branch-name` with a descriptive name for your branch.

3. Make the necessary changes and commit them:

    - Open the `Contributors.md` file in a text editor and add your name to it. Place it anywhere between the existing names.
    - Save the file.

    If you run `git status` in the project directory, you'll see your changes.

    ```sh
    git add Contributors.md
    git commit -m "Add <your-name> to Contributors list"
    ```

    Replace `<your-name>` with your name.

### Push Your Changes

Push your changes to GitHub:

```sh
git push origin -u your-new-branch-name


replacing `<add-your-branch-name>` with the name of the branch you created earlier.

<details>
<summary> <strong>If you get any errors while pushing, click here:
</strong> </summary>


-### Authentication Error

Authentication using passwords was disabled on GitHub on August 13, 2021. Instead, you need to use a personal access token for authentication.

For more information and to learn how to generate and configure a personal access token, please visit the [GitHub blog post](https://github.blog/2020-12-15-token-authentication-requirements-for-git-operations/).

If you encounter an error like the one below during authentication:

```plaintext
remote: Support for password authentication was removed on August 13, 2021. Please use a personal access token instead.
remote: Please see https://github.blog/2020-12-15-token-authentication-requirements-for-git-operations/ for more information.
fatal: Authentication failed for 'https://github.com/<your-username>/first-contributions.git/'
```

You'll need to follow GitHub's tutorial on [connecting to GitHub with SSH and adding a new SSH key to your GitHub account](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account).

<details>

<summary> <strong>If you encounter any authentication errors, click here for more details:</strong> </summary>

- ### Authentication Error

    If you get an authentication error, it means you need to use a personal access token. Follow [GitHub's tutorial](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account) on generating and configuring an SSH key for your account.

</details>
```
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
