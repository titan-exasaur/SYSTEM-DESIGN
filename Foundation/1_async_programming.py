import time, asyncio

# PART I: SYNCHRONOUS
# Tasks run one after another, next task waits for current to finish

def make_coffee_sync():
    print("[coffee] started...")
    time.sleep(3)
    print("[coffee] ready!")

def make_toast_sync():
    print("[toast] started...")
    time.sleep(3)
    print("[toast] ready!")

def synchronous():
    print("=== SYNCHRONOUS ===")
    print("Making breakfast")

    start = time.time()

    make_coffee_sync() # starts coffee, waits 3 seconds, nothing else happens
    make_toast_sync() # only starts after the coffee is done

    end = time.time()
    print(f"\nBreakfast ready in {end - start:.1f}s \n")


# PART II: ASYNCHRONOUS
async def make_coffee_async():
    print("[coffee] started...")
    await asyncio.sleep(3)
    print("[coffee] ready!")

"""
Await means,
    I am waiting.
    Event loop, you can run something else meanwhile.
    Come back to me after 3 seconds.
"""

async def make_toast_async():
    print("[toast] started...")
    await asyncio.sleep(2)
    print("[toast] ready!")

async def asynchronous():
    print("=== ASYNCHRONOUS ===")
    print(f"Making Breakfast...\n")

    start = time.time()

    await asyncio.gather(
        make_coffee_async(),
        make_toast_async()
    )

    end = time.time()
    print(f"\nBreakfast ready in {end-start:.1f}s\n")


# PART III: SYNCHRONOUS
# Tasks run one after another, next task waits for current to finish
async def what_await_means():
    print("=== WHAT await DOES ===")
    print("step1: started")
    await asyncio.sleep(1)

    print("step2: resumed after 1s wait")
    await asyncio.sleep(1)

    print("step3: resumed after another wait of 1s")
    print()


if __name__ == "__main__":
    # synchronous - runs sequentially
    synchronous()

    # async - runs concurrently
    asyncio.run(asynchronous())

    # await explanation
    asyncio.run(what_await_means())

    print("=== SUMMARY ===")
    print("Sync:  coffee(3s) + toast(2s) = 5s  — waited for each task")
    print("Async: coffee(3s) | toast(2s) = 3s  — tasks overlapped")
    print()
    print("Key insight:")
    print("  Async is NOT faster per task.")
    print("  It's faster overall because waiting time is shared.")
    print()
    print("  time.sleep()       = blocking   — holds the whole program")
    print("  asyncio.sleep()    = non-blocking — yields control while waiting")
    print()
    print("In APIs:")
    print("  Sync  → one request at a time, others queue up")
    print("  Async → while request A waits for DB, request B is being handled")

