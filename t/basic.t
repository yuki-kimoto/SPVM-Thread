use Test::More;

use strict;
use warnings;
use lib "t/lib";

use SPVM 'TestCase::Thread';

use SPVM::Thread;

my $api = SPVM::api();

my $start_memory_blocks_count = $api->get_memory_blocks_count;

ok(SPVM::TestCase::Thread->basic);

ok(SPVM::TestCase::Thread->thread_id);

ok(SPVM::TestCase::Thread->exception);

# Version
{
  is($SPVM::Thread::VERSION, $api->get_version_string('Thread'));
}

$api->destroy_runtime_permanent_vars;

my $end_memory_blocks_count = $api->get_memory_blocks_count;
is($end_memory_blocks_count, $start_memory_blocks_count);

done_testing;
