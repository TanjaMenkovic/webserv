#ft_irc
hive school project :)

# ft_irc: A Simple IRC Server
Welcome to ft_irc, an IRC server implementation built from scratch in C++! This project is an exploration of networking fundamentals and the Internet Relay Chat (IRC) protocol. It adheres to core IRC standards, providing a foundation for learning how real-time communication servers operate.

## Overview
IRC (Internet Relay Chat) is a text-based communication protocol that enables real-time messaging through channels and private messages. IRC networks consist of servers that facilitate communication between clients.

ft_irc replicates the core functionality of an IRC server, allowing multiple clients to:
* Authenticate using a password.
* Set nicknames and usernames.
* Join and create channels.
* Send messages in channels or privately.
* Utilize operator commands like kicking users, setting channel topics, and managing channel modes.

This project emphasizes non-blocking I/O and efficient socket management using poll() to handle multiple simultaneous clients.

## Features
Core IRC Server Capabilities
* Authentication: Clients authenticate using a password when connecting to the server.
* Channels: Support for creating, joining, and managing channels.
* Messaging:
  * Broadcast messages within a channel.
  * Direct messaging between users.
* User Roles:
  * Regular users.
  * Channel operators with special permissions.

Operator Commands
* KICK: Remove a user from a channel.
* INVITE: Invite a user to a private channel.
* TOPIC: Change or view a channel's topic.
* MODE: Manage channel modes, including:
  * Invite-only channels.
  * Topic editing restrictions.
  * Password-protected channels.
  * User limits.
  * Operator privileges.

Non-blocking I/O
* Handles multiple clients simultaneously using non-blocking sockets and the poll() system call.

## Installation and Usage
Prerequisites
A C++17 compiler or higher (e.g., g++, clang).
An IRC client such as Irssi or HexChat.

Building the Project
Clone the repository and build the project using the provided Makefile.
Run the server with the following command:
`./ircserv <port> <password> `
* <port>: The port number for the server (e.g., 6667).
* <password>: The password clients must use to connect.

Example:
`./ircserv 6667 mypassword`

Connecting with an IRC Client
1. Open an IRC client like Irssi or HexChat.
2. Connect to the server:
`/connect 127.0.0.1 6667`
3. Authenticate with the server password:
`/pass mypassword`

## Technical Highlights
Socket Programming: Uses raw sockets for low-level network communication.
Non-blocking I/O: Efficiently manages multiple clients with poll().
Protocol Compliance: Implements key features outlined in RFC 1459.
Threadless Design: Avoids multithreading by relying on event-driven I/O.

