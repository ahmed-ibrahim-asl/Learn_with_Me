'''
    Note: 
        1.I fixed issue with message format, solution was just "shift + enter" in order to be able to
        print new line and preserve the orgianl format of the message 

        2. We need to build alternative way to open conversation with phone Numbers instead of relaying on
            "https://wa.ryad.me/" 

        3. ease position entering for user interface

        4. create a way for user to be able to enter the path for phone Number and message {GUI} 
        
        5. suggestion for fixing entering the position problem you can use openCv

        5. time for program speed        
'''



import pyautogui
import keyboard

import time

phone_numbers = ["+201090080277", "+201002813575", "+212614751135", "+201013765994", "+201067914776",
                 "+201028396067", "+201150939289", "+201033453813", "+201061582372", "+201050082407",
                 "+201205341834", "+201011655706", "+201127772739", "+201019273306", "+201009033591",
                 "+201005648150", "+201223563080", "+201157994980", "+201154770793", "+201143315742",
                 "+201029888168", "+201095571474", "+201017273880", "+201028691524", "+201149794963",
                 "+201010210748", "+201027203434", "+201129833816", "+201113794834", "+201126917243",
                 "+201204298071", "+201093029695", "+201099298946", "+201114175759", "+201115448837",
                 "+201143945872", "+201112902630", "+201010502518", "+201115882130", "+201001356940",
                 "+201012077144", "+201068472801", "+201124291653", "+201006439898", "+1003392280",
                 "+201281619478", "+201155148696", "+201551751551", "+201067168764", "+201066571389",
                 "+201094284010", "+201227263227", "+201024172850", "+201103903241", "+201090666596",
                 "+201068044266", "+201004581477", "+201120089515", "+201207549175", "+201224043106",
                 "+201206782949", "+201551622666", "+201552757677", "+201021039857", "+201021039857",
                 "+201021063653", "+201001055935", "+201010502518", "+201550627585", "+201007054577",
                 "+201006151322", "+201069411746", "+201064725673", "+201289788065", "+201091789587",
                 "+201147803125", "+201027224898", "+201023699913", "+201098819469", "+201094641301",
                 "+201099656753", "+201099656753", "+201063761708", "+201555190528", "+201110492433",
                 "+201142800770", "+201020005011", "+201114028081", "+201142290894", "+201024546861",
                 "+201227471641", "+201155112924", "+2011005639062", "+201553164027", "+201006898233",
                 "+201060901151", "+201120285439", "+201151106486", "+201151106486", "+201154303055",
                 "+201113264413", "+201003831518", "+201069989136", "+201018768841", "+201025092091",
                 "+201501056903", "+201122070264", "+201551331253", "+201224970292",
                 "+201146425301", "+201066080210", "+201018540123", "+20115446095", "+201006573885",
                 "+201155058243", "+201278552284", "+201032908925", "+201154303055", "+201019571158",
                 "+201061452171", "+201021507490", "+201141479508", "+201146878364", "+201142800770",
                 "+201276007002", "+201145533120", "+201200012969", "+201208336264", "+201153472883",
                 "+201098309382", "+201019658441", "+201061883284", "+201092949580", "+201152465757",
                 "+201098152421", "+201000471050", "+201142800770", "+201120920078", "+201004508320",
                 "+201272278079", "+201274792113", "+201001698348", "+201159796677", "+201223587368",
                 "+201221043977", "+201033293239", "+201154480457", "+201095690533", "+201277677526",
                 "+201501518450", "+201067609569", "+201008072748", "+201503107310", "+201033933078",
                 "+201062360315", "+201148596607", "+201116836112", "+201029323284", "+201158382621",
                 "+201157816104", "+201032908925", "+201099822877", "+201013633475", "+201116872045",
                 "+201118687274", "+201202913275", "+201006679459", "+201127653404", "+201202714195",
                 "+201147021121", "+201062165494", "+201103000516", "+201226830155", "+201224043106",
                 "+201016875368", "+201022410510", "+201011920713", "+201016875368", "+201023358547",
                 "+201152432513", "+201140666805", "+201223783992", "+201204650541", "+201063609969",
                 "+201009368263", "+201062899011", "+201118389892", "+201154303055", "+201225677949",
                 "+201004508320", "+201113331678", "+201154303055", "+201012671134", "+201200092105",
                 "+201012671134", "+201003811614", "+201020731741", "+201067613653", "+201204045635",
                 "+201026240634", "+201065186169", "+201550452178", "+201228712374", "+201118848480",
                 "+201017689754", "+201212780265", "+201006449235", "+201012241689", "+201126836740",
                 "+201508160262", "+201212350344", "+201123218188", "+201097761707", "+201204983688",
                 "+201062899011", "+201285939699", "+201280044108", "+201102181560", "+201124969191",
                 "+201152201970", "+201147610928", "+201004904568", "+201010387155", "+201211517706",
                 "+201013620963", "+201129711227", "+201140781146", "+201010844183", "+201554530991",
                 "+201207613830", "+201558854633", "+201555586332", "+201005395690", "+201273838526",
                 "+201551816989", "+201013315921", "+201125992923", "+201111614941", "+201288017864",
                 "+201017689754", "+201288526938", "+201552690239", "+201122156971", "+201153519136",
                 "+201024024264", "+201019422720", "+201093059200", "+201550086498", "+201066146867",
                 "+201065031918", "+201014070714", "+201140756731", "+201152595746", "+201276855523",
                 "+201143082288", "+201276855523", "+201154094567", "+201153255419", "+201029665644",
                 "+201032838805", "+201158078909", "+201029729056", "+201152877745", "+201120471533",
                 "+201096418261", "+201157118288", "+201005586912", "+201025019961", "+201159703618",
                 "+20120578795", "+201009631733", "+201098685467", "+201027926005", "+201022271384",
                 "+201004789847", "+201140980359", "+201274907157", "+201274907157", "+201206372950",
                 "+20116901889", "+201098471912",  "+201114346042", "+201126918660", "+201100192966",
                 "+201210842766", "+201149014573", "+201271663815", "+201212992012", "+201023557559",
                 "+201067342695", "+201288386158", "+201158354434", "+201221043977", "+201050752857",
                 "+201211591740"]


text123 = f"""    
    Hello Dear,
    we hope this message finds you well, Congratulations and Welcome to Google IO Egypt😍.
    
     We Can't wait to see You at Google IO Egypt 🥳
    
     scheduled on 15th July, 2023.
     At the Akhbar El Yom Academy. https://goo.gl/maps/kHFwEc8HyKjN5JCm6
     At 9 AM.
    
     You can learn more about this event via this link
     https://fb.me/e/2M5aE9RRH
    
     * Don't forget that the Google IO Egypt relocated to Akhbar El Yom Academy *
    
     Hope real benefit and nice time.
    
     see you there 😍
"""





phoneLinst = ["+201110467700"]

for i in phoneLinst:

    # text box
    pyautogui.click(889, 647)
    
    pyautogui.hotkey('ctrl', 'a')
    time.sleep(3)
    pyautogui.press('backspace')

    pyautogui.hotkey('ctrl', 'a')
    pyautogui.press('backspace')
    
    pyautogui.typewrite(i)





    pyautogui.click(760, 712)

    # delay for program to open
    time.sleep(3)


    #click to type the message
    pyautogui.click(2551, 1130)

    
    for line in text123.split('\n'):

        keyboard.write(line.strip())
        keyboard.write(" ")
        time.sleep(0.5)

        pyautogui.keyDown('shift')
        pyautogui.press('enter')
        pyautogui.keyUp('shift')



    #send the message
    pyautogui.click(3000, 1128)

    print("Done: " + i)