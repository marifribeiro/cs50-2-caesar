# Index

1. [Caesar's Cipher](https://github.com/maryplank/SAP003-cipher#caesars-cipher) 

2.  [How it works](https://github.com/maryplank/SAP003-cipher#how-it-works)

3. [About the aplication](https://github.com/maryplank/SAP003-cipher#about-the-application)

4. [Usage](https://github.com/maryplank/SAP003-cipher#usage)

# Caesar's Cipher

Are you familiar with Caesar's cipher?
It's a simple encriptacion method where you shift each letter of the text with an according numerical key. 

For example, the word "LOVE", when encrypted using Caesar's cipher with a *key of 4 (this will be our little secret, ok?)* will become "PSZI".

# How it works
Let's count the letters of the alphabet **starting at 0.**
So: A = 0, B = 1, C = 2... and so on, until Z = 25.
On the example above, we have the following letters:

|Letter | Value |
|-------|-------|
|L      |11     |
|O      |14     |
|V      |21     |
|E      |4      |

If we add our *super-secret key of 4*, our code will be encrypted like this:

|Letter| Value|  Plus key | Result | New letter |
|------|------|-----------|--------|------------|
|L     |11    |+ 4        |15      |P           |
|O     |14    |+ 4        |18      |S           |
|V     |21    |+ 4        |25      |Z           |
|E     |4     |+ 4        |8       |I           |

This program will encrypt and decrypt your notes automatically for you. Just type the text you want to encrypt, or the text you received and want to decrypt, and we will do all the work for you.

# About the application

This is a command line application and it was developed fully in C.

The encriptation logic and functions can be found in the cipher.js file.

It will encrypt uppercase letters, keeping them uppercased and the same goes for lowercase letters. Numbers, punctuation (commas, periods, exclamation points and question marks) and special characters (like letters with accents and other signals) will remain as they are typed, they will be not encrypted.

Example:

**¡Este es un texto de ejemplo! ¿Cómo será encriptado?**

Using a key of 4, this text will be encrypted as:

**¡Iwxi iw yr xibxs hi iniqtps! ¿Góqs wivá irgvmtxehs?**

As you can see, the letters with accents and puctuation were not encrypted, so you should have that in mind when typing your message.

In this application, the alphabet has 25 letters (because we started at 0, remember?) so inserting a key of 26 will go around the alphabet back to the letters you typed. That means that it will not be encrypted.


## Usage

Clone this repository, then, through the command line, enter the program's folder and run the following command to compile:

`gcc -o caesar caesar.c -ls50`

Then run the application. Keep in mind the key to encrypt must be an integer:

`./caesar <numerical key>`

The program will ask for a plaintext, which will be spilled back to you using the numeric key you inserted in the previous command.

```Plaintext: <text to encrypt>
Ciphertext: <return of the text you typed using the key you provided>```

