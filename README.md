<sup>__Revision: 2__</sup>

# Git and Markdown

**This git repo is only for learning purposes. Source codes in this repo is just mimic of a project structure.**

Here are some markdown syntax for writing a **README** file for your project. A good readme file helps a developer to understand. what problems you have solved or aim to solve using your project. and how can he integrate your project to address same issue?

## Text Formatting
You can use text in 3 styles. **Bold**, _Italic_ or **_Bold Italic_** togethor. We have demostrated all three types of style with their syntaxes.

_I am italic_
```
_I am italic_
```
**I am bold**
```
**I am bold**
```
**_I am italic and bold._**
```
**_I am italic and bold_**
```

## Headings

There are six sizes of headings.
# Hello Heading One
```
# Hello Heading One
```
## Hello Heading Two
```
## Hello Heading Two
```
### Hello Heading Three
```
### Hello Heading Three
```
#### Hello Heading Four
```
#### Hello Heading Four
```
##### Hello Heading Five
```
##### Hello Heading Five
```
###### Hello Heading Six
```
###### Hello Heading Six
```

## Links

Links are very useful to show any external thing inside a markdown file. There are two types of link.
* Inline link
* Reference link

#### 1. Inline link

<sup>Using inline link you can link text to url just in single line.</sup>

I am google. You can [visit](https://www.google.com) me to search the internet

```
[visit](https://www.google.com)
```

#### 2. Reference link

<sup>Using reference links, You can reuse a single url multiple times in a file after defining it once.</sup>

I hate [google][url-google], I like [bing][url-bing].

[url-google]: www.google.com
[url-bing]: www.bing.com

```
[google][url-google]

[url-google]: www.google.com
```

## External Image
You can include external image in your markdown file to make more attentive you rendered file.

![It's Moooozilla baby](https://www.mozilla.org/media/protocol/img/logos/mozilla/logo-word-hor.e20791bb4dd4.svg)

```
![Mozilla Foundation](https://www.mozilla.org/media/protocol/img/logos/mozilla/logo-word-hor.e20791bb4dd4.svg)
```

## Blockquotes
Blockquotes are useful for quoting a text from someone. You can also use it for a small notes.

> _"There are years that ask questions and years that answer" - Zora Neale Hurston_

```
> _"There are years that ask questions and years that answer" - Zora Neale Hurston_
```

## Lists
There are two types of list and may be you already know them.
* Unorderd list
* Ordered list

#### 1. Unordered List
<sup>An unordered list can be created by using dashes (-), asterisks (*), or plus sign (+) at the start of line.</sup>

* Google
* Bing
* Yahoo
* Duckduckgo

#### 2. Ordered List
<sup>List item starting with number and followed by dot (.) can cause issues but we have escape charater to deal with such situations.</sup>
1. Google
2. Bing
3. Yahoo
4. Duckduckgo

## Code
You can show snippet code of your project for a quick reference. Code snippet can be display using backticks. ( ` ). Single and double backtickes are used for single line code snippets and triple backtickes are used for multiline code snippets.

```sh
mkdir project-metaworse
cd project-metaworse
echo "Work under process..."
```

```
    ```sh
    mkdir project-metaworse
    cd project-metaworse
    echo "work under process."
    ```
```

## Table
Table can demostrate your data in structured way and help other to understand quickly.

| S.No | Search Engines |
| ---- | -------------- |
| 1. | Google |
| 2. | Bing |
| 3. | Yahoo |
| 4. | Duckduckgo |

```

| S.No | Search Engines |
| ---- | -------------- |
| 1. | Google |
| 2. | Bing |
| 3. | Yahoo |
| 4. | Duckduckgo |
```

## Horizontal lines
Horizontal line can be used as seperator for title and body in a markdown file. Horizontal line can be created using three or more asterisks (***), dashes (---), or underscores (___) in a line.
***
```
***
```

## URLs and Emails
Direct links can be created for a url or an email. It can help quickly open program related to the link.

<https://www.google.com><br/>
<noreply@abc.xyz>
```
<https://www.google.com>
<noreply@abc.xyz>
```