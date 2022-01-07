#include QMK_KEYBOARD_H

int layer =0;

enum custom_keycodes {
    KC_00 = SAFE_RANGE,
    KC_01,
    KC_02,
    KC_03,
    KC_04,
    KC_05,
    KC_06,
    KC_10,
    KC_11,
    KC_12,
    KC_13,
    KC_14,
    KC_15,
    KC_16,
    KC_20,
    KC_21,
    KC_22,
    KC_23,
    KC_24,
    KC_25,
    KC_26,
    KC_30,
    KC_31,
    KC_32,
    KC_33,
    KC_34,
    KC_35,
    KC_36,
    KC_40,
    KC_41,
    KC_42,
    KC_43,
    KC_44,
    KC_45,
    KC_46,
    KC_50,
    KC_51,
    KC_52,
    KC_53,
    KC_54,
    KC_55,
    KC_56,
    KC_60,
    KC_61,
    KC_62,
    KC_63,
    KC_64,
    KC_65,
    KC_66,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
// Row 0
    case KC_00:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva000\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva100\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva200\n");}
			else if (layer ==3) {SEND_STRING("/t00");}
			else if (layer ==4) {SEND_STRING("go/davidleiva400\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva500\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva600\n");}
        } else {}
        break;
    case KC_01:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva001\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva101\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva201\n");}
			else if (layer ==3) {SEND_STRING("/t01");}
			else if (layer ==4) {SEND_STRING("go/davidleiva401\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva501\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva601\n");}
        } else {}
        break;
    case KC_02:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva002\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva102\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva202\n");}
			else if (layer ==3) {SEND_STRING("/t02");}
			else if (layer ==4) {SEND_STRING("go/davidleiva402\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva502\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva602\n");}
        } else {}
        break;
    case KC_03:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva003\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva103\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva203\n");}
			else if (layer ==3) {SEND_STRING("/t03");}
			else if (layer ==4) {SEND_STRING("go/davidleiva403\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva503\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva603\n");}
        } else {}
        break;
    case KC_04:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva004\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva104\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva204\n");}
			else if (layer ==3) {SEND_STRING("/t04");}
			else if (layer ==4) {SEND_STRING("go/davidleiva404\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva504\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva604\n");}
        } else {}
        break;
    case KC_05:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva005\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva105\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva205\n");}
			else if (layer ==3) {SEND_STRING("/t05");}
			else if (layer ==4) {SEND_STRING("go/davidleiva405\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva505\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva605\n");}
        } else {}
        break;
    case KC_06:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva006\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva106\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva206\n");}
			else if (layer ==3) {SEND_STRING("/t06");}
			else if (layer ==4) {SEND_STRING("go/davidleiva406\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva506\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva606\n");}
        } else {}
        break;
// Row 1
    case KC_10:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva010\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva210\n");}
			else if (layer ==3) {SEND_STRING("/t10");}
			else if (layer ==4) {SEND_STRING("go/davidleiva410\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva510\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva610\n");}
        } else {}
        break;
    case KC_11:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva011\n");}
			else if (layer ==1) {SEND_STRING(SS_TAP(X_UP));}
			else if (layer ==2) {SEND_STRING("go/davidleiva211\n");}
			else if (layer ==3) {SEND_STRING("/t11");}
			else if (layer ==4) {SEND_STRING("go/davidleiva411\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva511\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva611\n");}
        } else {}
        break;
    case KC_12:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva012\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva212\n");}
			else if (layer ==3) {SEND_STRING("/t12");}
			else if (layer ==4) {SEND_STRING("go/davidleiva412\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva512\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva612\n");}
        } else {}
        break;
    case KC_13:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva013\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva213\n");}
			else if (layer ==3) {SEND_STRING("/t13");}
			else if (layer ==4) {SEND_STRING("go/davidleiva413\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva513\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva613\n");}
        } else {}
        break;
    case KC_14:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva014\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva214\n");}
			else if (layer ==3) {SEND_STRING("/t14");}
			else if (layer ==4) {SEND_STRING("go/davidleiva414\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva514\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva614\n");}
        } else {}
        break;
    case KC_15:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva015\n");}
			else if (layer ==1) {SEND_STRING(SS_LSFT(SS_TAP(X_UP)));}
			else if (layer ==2) {SEND_STRING("go/davidleiva215\n");}
			else if (layer ==3) {SEND_STRING("/t15");}
			else if (layer ==4) {SEND_STRING("go/davidleiva415\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva515\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva615\n");}
        } else {}
        break;
    case KC_16:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva016\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva216\n");}
			else if (layer ==3) {SEND_STRING("/t16");}
			else if (layer ==4) {SEND_STRING("go/davidleiva416\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva516\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva616\n");}
        } else {}
        break;

// Row 2
    case KC_20:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva020\n");}
			else if (layer ==1) {SEND_STRING(SS_TAP(X_LEFT));}
			else if (layer ==2) {SEND_STRING("go/davidleiva220\n");}
			else if (layer ==3) {SEND_STRING("/t20");}
			else if (layer ==4) {SEND_STRING("go/davidleiva420\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva520\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva620\n");}
        } else {}
        break;
    case KC_21:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva021\n");}
			else if (layer ==1) {SEND_STRING(SS_TAP(X_DOWN));}
			else if (layer ==2) {SEND_STRING("go/davidleiva221\n");}
			else if (layer ==3) {SEND_STRING("/t21");}
			else if (layer ==4) {SEND_STRING("go/davidleiva421\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva521\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva621\n");}
        } else {}
        break;
    case KC_22:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva022\n");}
			else if (layer ==1) {SEND_STRING(SS_TAP(X_RIGHT));}
			else if (layer ==2) {SEND_STRING("go/davidleiva222\n");}
			else if (layer ==3) {SEND_STRING("/t22");}
			else if (layer ==4) {SEND_STRING("go/davidleiva422\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva522\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva622\n");}
        } else {}
        break;
    case KC_23:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva023\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva223\n");}
			else if (layer ==3) {SEND_STRING("/t23");}
			else if (layer ==4) {SEND_STRING("go/davidleiva423\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva523\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva623\n");}
        } else {}
        break;
    case KC_24:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva024\n");}
			else if (layer ==1) {SEND_STRING(SS_LSFT(SS_TAP(X_LEFT)));}
			else if (layer ==2) {SEND_STRING("go/davidleiva224\n");}
			else if (layer ==3) {SEND_STRING("/t24");}
			else if (layer ==4) {SEND_STRING("go/davidleiva424\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva524\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva624\n");}
        } else {}
        break;
    case KC_25:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva025\n");}
			else if (layer ==1) {SEND_STRING(SS_LSFT(SS_TAP(X_DOWN)));}
			else if (layer ==2) {SEND_STRING("go/davidleiva225\n");}
			else if (layer ==3) {SEND_STRING("/t25");}
			else if (layer ==4) {SEND_STRING("go/davidleiva425\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva525\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva625\n");}
        } else {}
        break;
    case KC_26:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva026\n");}
			else if (layer ==1) {SEND_STRING(SS_LSFT(SS_TAP(X_RIGHT)));}
			else if (layer ==2) {SEND_STRING("go/davidleiva226\n");}
			else if (layer ==3) {SEND_STRING("/t26");}
			else if (layer ==4) {SEND_STRING("go/davidleiva426\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva526\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva626\n");}
        } else {}
        break;

// Row 3
    case KC_30:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva030");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva230\n");}
			else if (layer ==3) {SEND_STRING("/t30");}
			else if (layer ==4) {SEND_STRING("go/davidleiva430\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva530\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva630\n");}
        } else {}
        break;
    case KC_31:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva031\n");}
			else if (layer ==1) {SEND_STRING(SS_LCTRL(SS_TAP(X_HOME)));}
			else if (layer ==2) {SEND_STRING("go/davidleiva231\n");}
			else if (layer ==3) {SEND_STRING("/t31");}
			else if (layer ==4) {SEND_STRING("go/davidleiva431\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva531\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva631\n");}
        } else {}
        break;
    case KC_32:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva032\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva232\n");}
			else if (layer ==3) {SEND_STRING("/t32");}
			else if (layer ==4) {SEND_STRING("go/davidleiva432\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva532\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva632\n");}
        } else {}
        break;
    case KC_33:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva033\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva233\n");}
			else if (layer ==3) {SEND_STRING("/t33");}
			else if (layer ==4) {SEND_STRING("go/davidleiva433\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva533\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva633\n");}
        } else {}
        break;
    case KC_34:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva034\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva234\n");}
			else if (layer ==3) {SEND_STRING("/t34");}
			else if (layer ==4) {SEND_STRING("go/davidleiva434\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva534\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva634\n");}
        } else {}
        break;
    case KC_35:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva035\n");}
			else if (layer ==1) {SEND_STRING(SS_LSFT(SS_LCTRL(SS_TAP(X_HOME))));}
			else if (layer ==2) {SEND_STRING("go/davidleiva235\n");}
			else if (layer ==3) {SEND_STRING("/t35");}
			else if (layer ==4) {SEND_STRING("go/davidleiva435\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva535\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva635\n");}
        } else {}
        break;
    case KC_36:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva036\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva236\n");}
			else if (layer ==3) {SEND_STRING("/t36");}
			else if (layer ==4) {SEND_STRING("go/davidleiva436\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva536\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva636\n");}
        } else {}
        break;

// Row 4
    case KC_40:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva040\n");}
			else if (layer ==1) {SEND_STRING(SS_TAP(X_HOME));}
			else if (layer ==2) {SEND_STRING("go/davidleiva240\n");}
			else if (layer ==3) {SEND_STRING("go/davidleiva340\n");}
			else if (layer ==4) {SEND_STRING("go/davidleiva440\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva540\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva640\n");}
        } else {}
        break;
    case KC_41:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva041\n");}
			else if (layer ==1) {SEND_STRING(SS_LCTRL(SS_TAP(X_END)));}
			else if (layer ==2) {SEND_STRING("go/davidleiva241\n");}
			else if (layer ==3) {SEND_STRING("/t41");}
			else if (layer ==4) {SEND_STRING("go/davidleiva441\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva541\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva641\n");}
        } else {}
        break;
    case KC_42:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva042\n");}
			else if (layer ==1) {SEND_STRING(SS_TAP(X_END));}
			else if (layer ==2) {SEND_STRING("go/davidleiva242\n");}
			else if (layer ==3) {SEND_STRING("/t42");}
			else if (layer ==4) {SEND_STRING("go/davidleiva442\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva542\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva642\n");}
        } else {}
        break;
    case KC_43:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva043\n");}
			else if (layer ==1) {SEND_STRING("");}
			else if (layer ==2) {SEND_STRING("go/davidleiva243\n");}
			else if (layer ==3) {SEND_STRING("/t43");}
			else if (layer ==4) {SEND_STRING("go/davidleiva443\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva543\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva643\n");}
        } else {}
        break;
    case KC_44:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva044\n");}
			else if (layer ==1) {SEND_STRING(SS_LSFT(SS_TAP(X_HOME)));}
			else if (layer ==2) {SEND_STRING("go/davidleiva244\n");}
			else if (layer ==3) {SEND_STRING("/t44");}
			else if (layer ==4) {SEND_STRING("go/davidleiva444\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva544\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva644\n");}
        } else {}
        break;
    case KC_45:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva045\n");}
			else if (layer ==1) {SEND_STRING(SS_LSFT(SS_LCTRL(SS_TAP(X_END))));}
			else if (layer ==2) {SEND_STRING("go/davidleiva245\n");}
			else if (layer ==3) {SEND_STRING("/t45");}
			else if (layer ==4) {SEND_STRING("go/davidleiva445\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva545\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva645\n");}
        } else {}
        break;
    case KC_46:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva046\n");}
			else if (layer ==1) {SEND_STRING(SS_LSFT(SS_TAP(X_END)));}
			else if (layer ==2) {SEND_STRING("go/davidleiva246\n");}
			else if (layer ==3) {SEND_STRING("/t46");}
			else if (layer ==4) {SEND_STRING("go/davidleiva446\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva546\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva646\n");}
        } else {}
        break;

// Row 5
    case KC_50:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("/050");}
			else if (layer ==1) {SEND_STRING("/150");}
			else if (layer ==2) {SEND_STRING("/250");}
			else if (layer ==3) {SEND_STRING("/350");}
			else if (layer ==4) {SEND_STRING("/450");}
			else if (layer ==5) {SEND_STRING("/550");}
			else if (layer ==6) {SEND_STRING("/650");}
        } else {}
        break;
    case KC_51:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("/051");}
			else if (layer ==1) {SEND_STRING("/151");}
			else if (layer ==2) {SEND_STRING("/251");}
			else if (layer ==3) {SEND_STRING("/351");}
			else if (layer ==4) {SEND_STRING("/451");}
			else if (layer ==5) {SEND_STRING("/551");}
			else if (layer ==6) {SEND_STRING("/651");}
        } else {}
        break;
    case KC_52:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("/052");}
			else if (layer ==1) {SEND_STRING("/152");}
			else if (layer ==2) {SEND_STRING("/252");}
			else if (layer ==3) {SEND_STRING("/352");}
			else if (layer ==4) {SEND_STRING("/452");}
			else if (layer ==5) {SEND_STRING("/552");}
			else if (layer ==6) {SEND_STRING("/652");}
        } else {}
        break;
    case KC_53:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva053\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva153\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva253\n");}
			else if (layer ==3) {SEND_STRING("go/davidleiva353\n");}
			else if (layer ==4) {SEND_STRING("go/davidleiva453\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva553\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva653\n");}
        } else {}
        break;
    case KC_54:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva054\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva154\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva254\n");}
			else if (layer ==3) {SEND_STRING("go/davidleiva354\n");}
			else if (layer ==4) {SEND_STRING("go/davidleiva454\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva554\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva654\n");}
        } else {}
        break;
    case KC_55:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva055\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva155\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva255\n");}
			else if (layer ==3) {SEND_STRING("go/davidleiva355\n");}
			else if (layer ==4) {SEND_STRING("go/davidleiva455\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva555\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva655\n");}
        } else {}
        break;
    case KC_56:
	    if (record->event.pressed) {
            if (layer == 0){SEND_STRING("go/davidleiva056\n");}
			else if (layer ==1) {SEND_STRING("go/davidleiva156\n");}
			else if (layer ==2) {SEND_STRING("go/davidleiva256\n");}
			else if (layer ==3) {SEND_STRING("go/davidleiva356\n");}
			else if (layer ==4) {SEND_STRING("go/davidleiva456\n");}
			else if (layer ==5) {SEND_STRING("go/davidleiva556\n");}
			else if (layer ==6) {SEND_STRING("go/davidleiva656\n");}
        } else {}
        break;




// Row 6
    case KC_60:
	    if (record->event.pressed) {
            layer = 0;
        } else {}
        break;
    case KC_61:
	    if (record->event.pressed) {
            layer = 1;
        } else {}
        break;
    case KC_62:
	    if (record->event.pressed) {
            layer = 2;
        } else {}
        break;
    case KC_63:
	    if (record->event.pressed) {
            layer = 3;
        } else {}
        break;
    case KC_64:
	    if (record->event.pressed) {
            //layer = 4;
        } else {}
        break;
    case KC_65:
	    if (record->event.pressed) {
            //layer = 5;
        } else {}
        break;
    case KC_66:
	    if (record->event.pressed) {
            //layer = 6;
			SEND_STRING("go/davidleiva666\n");
        } else {}
        break;
	}
	return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT_ortho_5x4(
		KC_00, KC_01, KC_02, KC_03, KC_04, KC_05, KC_06, 
		KC_10, KC_11, KC_12, KC_13, KC_14, KC_15, KC_16,
		KC_20, KC_21, KC_22, KC_23, KC_24, KC_25, KC_26,
		KC_30, KC_31, KC_32, KC_33, KC_34, KC_35, KC_36,
		KC_40, KC_41, KC_42, KC_43, KC_44, KC_45, KC_46,
		KC_50, KC_51, KC_52, KC_53, KC_54, KC_55, KC_56,
		KC_60, KC_61, KC_62, KC_63, KC_64, KC_65, KC_66),

};
