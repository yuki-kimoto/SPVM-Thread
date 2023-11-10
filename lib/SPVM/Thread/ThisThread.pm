package SPVM::Thread::ThisThread;

1;

=head1 Name

SPVM::Thread::ThisThread - Getting Current Thread Information

=head1 Usage

  use Thread::ThisThread;
  
=head1 Description

The C<Thread::ThisThread> class of L<SPVM> has methods to get information of the current thread.

=head1 Class Methods

C<static method get_id : L<Thread::ID|SPVM::Thread::ID> ();>

Gets the thread ID of the current thread.

=head1 Copyright & License

Copyright 2022-2022 [--user-name], all rights reserved.

This program is free software; you can redistribute it and/or modify it
under the same terms as Perl itself.

