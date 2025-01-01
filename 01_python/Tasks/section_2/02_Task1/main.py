from favoriteWebsites import FAVORITE_SITES, open_sites

def print_menu():
    print("select a website to open:")

    for key, (name,_) in FAVORITE_SITES.items():
        print(f"{key}. {name}")


def main():
    print_menu()
    choice = input("Enter the number of the  website you want to open: ")


    if choice in FAVORITE_SITES:
        _,url = FAVORITE_SITES[choice]
        open_sites(url)
    else:
        print("Invalid choice")


if __name__ == "__main__":
    main()