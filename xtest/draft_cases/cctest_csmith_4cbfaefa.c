// SPDX-License-Identifier: MIT
// cctest_csmith_4cbfaefa.c --- cctest case csmith_4cbfaefa (csmith seed 1287630586)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xac8a4fea */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 1287630586 -o /tmp/csmith_gen_wj1zm8se/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static const int32_t g_2 = (-1L);
static uint32_t g_3 = 0xA32B1CECL;
static int16_t g_8 = 0x6338L;
static int32_t g_12 = (-1L);
static uint32_t g_39[4][4] = {{8UL,0x1CA4B38BL,8UL,8UL},{0x1CA4B38BL,0x1CA4B38BL,18446744073709551615UL,0x1CA4B38BL},{0x1CA4B38BL,8UL,8UL,0x1CA4B38BL},{8UL,0x1CA4B38BL,8UL,8UL}};
static uint32_t g_62 = 0x5F447FE6L;
static uint8_t g_91 = 0UL;
static uint16_t g_100 = 0UL;
static uint64_t g_120 = 1UL;
static int16_t g_128 = 0xCC5EL;
static int64_t g_139[2] = {0xAF3A0D747CD2075ELL,0xAF3A0D747CD2075ELL};
static uint32_t g_142[3][4] = {{0x847CB24EL,0x847CB24EL,0x847CB24EL,0x847CB24EL},{0x847CB24EL,0x847CB24EL,0x847CB24EL,0x847CB24EL},{0x847CB24EL,0x847CB24EL,0x847CB24EL,0x847CB24EL}};
static int32_t g_180[2] = {3L,3L};
static uint32_t g_181 = 4294967286UL;
static int8_t g_202[1] = {0xC7L};



static int16_t  func_1(void);
static int16_t  func_6(uint32_t  p_7);
static uint32_t  func_18(uint32_t  p_19, uint8_t  p_20, int8_t  p_21, const uint8_t  p_22);




static int16_t  func_1(void)
{ 
    int8_t l_200[3][1];
    int32_t l_201[3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_200[i][j] = 0xD9L;
    }
    for (i = 0; i < 3; i++)
        l_201[i] = 0xD47A3A9AL;
    g_3 = g_2;
    if ((safe_mul_func_int16_t_s_s((l_201[0] |= (func_6(g_3) , ((g_39[0][0] && l_200[0][0]) < 65535UL))), g_180[1])))
    { 
        uint8_t l_203[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_203[i][j] = 0xCDL;
        }
        g_202[0] |= g_12;
        g_12 |= 0x11AD5033L;
        l_203[0][0] = l_200[2][0];
    }
    else
    { 
        const int8_t l_206[3][2] = {{0xF6L,0xF6L},{0xF6L,0xF6L},{0xF6L,0xF6L}};
        int i, j;
        g_12 = ((safe_mod_func_uint32_t_u_u(l_206[1][1], 0xEA2FDC87L)) && ((safe_div_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(1UL, 7)) | 0xD6BC24C8L), g_39[2][1])), 0x55174FDF7665E0C9LL)), 1L)) & 0xECL));
        l_201[0] = l_201[0];
    }
    g_12 = l_201[0];
    return g_142[1][2];
}



static int16_t  func_6(uint32_t  p_7)
{ 
    uint16_t l_9 = 1UL;
    int32_t l_13 = 0L;
    --l_9;
    l_13 = (g_12 = 0x29C1464FL);
    l_13 = ((safe_mul_func_uint8_t_u_u((l_13 , (safe_mod_func_uint32_t_u_u(func_18((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(l_9)) , (safe_mod_func_int8_t_s_s(l_13, g_12))), 1)), p_7, g_3, g_8), g_180[1]))), g_180[1])) >= p_7);
    return p_7;
}



static uint32_t  func_18(uint32_t  p_19, uint8_t  p_20, int8_t  p_21, const uint8_t  p_22)
{ 
    uint16_t l_30 = 7UL;
    int32_t l_36 = 8L;
    if (((safe_mul_func_uint8_t_u_u(l_30, p_22)) && (-2L)))
    { 
        return p_22;
    }
    else
    { 
        int32_t l_33 = 0x635290CEL;
        uint32_t l_38 = 6UL;
        l_36 = (safe_mul_func_int8_t_s_s(l_33, (safe_mod_func_int32_t_s_s((p_19 <= l_33), 0x00EADD5DL))));
        l_36 |= (((((((g_39[0][0] = (+(((g_8 < (g_3 < 0x5CL)) == p_21) > l_38))) != 0x6CD5L) != g_12) ^ l_30) < g_12) <= l_38) , p_22);
        for (l_36 = 0; (l_36 > 20); ++l_36)
        { 
            int32_t l_44 = (-4L);
            g_12 = (safe_rshift_func_uint16_t_u_u(l_44, 7));
        }
    }
    if ((safe_add_func_uint16_t_u_u((((~l_30) || ((((((l_36 == (safe_lshift_func_int16_t_s_u(p_19, p_20))) && g_12) & l_36) || g_3) & g_2) & 0x8A97D63F7CEC7E9ALL)) >= p_21), g_8)))
    { 
        int32_t l_53 = 0xF93B76F0L;
        int16_t l_138 = (-10L);
        uint16_t l_157 = 2UL;
        int32_t l_170 = 0xEE02A266L;
        int64_t l_171[2][4] = {{0x85FFE76D6E16A95ELL,0L,0x85FFE76D6E16A95ELL,0L},{0x85FFE76D6E16A95ELL,0L,0x85FFE76D6E16A95ELL,0L}};
        int i, j;
        if (g_12)
        { 
            uint32_t l_56 = 4294967295UL;
            int32_t l_60 = (-5L);
            for (g_3 = 0; (g_3 < 31); g_3 = safe_add_func_uint16_t_u_u(g_3, 8))
            { 
                l_53 = ((!0x9FD593B88A615B38LL) || (g_39[3][2] , g_8));
                if (p_21)
                    break;
            }
            if ((safe_div_func_int64_t_s_s(l_56, (((~(l_60 = ((g_39[0][0] || (safe_mod_func_int16_t_s_s(1L, g_39[0][0]))) || 0x99L))) > g_3) ^ p_22))))
            { 
                uint32_t l_61 = 3UL;
                l_36 |= g_3;
                l_61 = (g_39[0][0] , 0L);
            }
            else
            { 
                uint64_t l_75 = 0xAA97CAD959FC8950LL;
                --g_62;
                l_36 = (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((p_21 || (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u(p_22, g_39[3][0])) != p_19), p_19)) , g_2), l_60))) >= g_62) == l_75), 252UL)), l_53));
                g_12 = (((((--p_19) <= p_22) > ((g_39[0][3] < ((g_39[1][3] , p_21) , g_39[2][3])) , p_20)) & 0x31368DE6L) , 0xF261B24CL);
            }
            for (g_8 = (-6); (g_8 != (-18)); g_8 = safe_sub_func_int8_t_s_s(g_8, 2))
            { 
                int16_t l_84 = 0L;
                l_60 |= (safe_lshift_func_int8_t_s_s(((p_20 | ((((safe_add_func_uint64_t_u_u((((l_84 >= (((safe_mod_func_int16_t_s_s((g_91 ^= (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_62, g_62)) > 1L), 0))), g_3)) > l_53) < 0x0685L)) == g_39[0][0]) , 18446744073709551614UL), l_56)) == 0x7FDF8BF216A9CAF0LL) , g_91) & p_22)) != p_21), 3));
                g_12 |= ((((safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((g_91 | ((g_100 = 0UL) & (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((0xB8L >= (-1L)) , 0x38L), 0xC8L)), p_22)), 1)))), 0UL)), p_22)), l_60)) ^ (-2L)) || p_22) && l_36);
            }
        }
        else
        { 
            uint32_t l_111[1];
            int32_t l_141[2][4] = {{1L,0xE737D706L,0xE737D706L,1L},{0xE737D706L,1L,0xE737D706L,0xE737D706L}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_111[i] = 4UL;
            if ((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(0x5E16L, (g_8 = g_100))), ((l_111[0] == 0xE140BD20L) > l_53))))
            { 
                int32_t l_121 = 0x0B92564DL;
                l_121 = ((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_120 |= (l_30 , (((l_111[0] <= ((((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((g_100 != (-1L)), p_20)), g_39[0][0])) , 0xC7346DDCF828E4EALL) , g_91) == l_36)) < g_91) & g_100))), g_91)), 9)) & 0x89C3L);
                g_12 = (safe_mul_func_int8_t_s_s(p_20, ((((safe_mod_func_uint64_t_u_u((((((g_128 = ((safe_mod_func_int8_t_s_s((p_21 = l_111[0]), 0x95L)) < 0xC56FL)) < g_39[3][1]) & 0UL) , 0xAFDDL) | 65532UL), p_20)) && g_120) == l_111[0]) & g_2)));
            }
            else
            { 
                int16_t l_137 = 6L;
                int32_t l_140[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_140[i][j] = 0xDE9350E5L;
                }
                g_12 &= (safe_sub_func_int16_t_s_s((p_21 >= (!((safe_mod_func_int16_t_s_s((250UL >= ((((g_142[1][2] = (l_141[0][0] |= (l_140[1][0] = (g_139[0] = (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint8_t_u_u(((l_137 | l_137) || p_21), l_138)))))))) < g_8) != l_111[0]) < g_2)), l_138)) ^ g_3))), l_111[0]));
            }
        }
        for (g_8 = 0; (g_8 <= 2); g_8 += 1)
        { 
            int32_t l_158 = 1L;
            l_36 = (safe_sub_func_int16_t_s_s((g_91 < 0UL), (safe_div_func_uint64_t_u_u(1UL, g_139[0]))));
            if ((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s((((l_30 & (((g_100 = (((l_53 = ((g_142[0][3] ^ (g_120 = (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((g_128 = (l_158 = ((g_8 != l_157) || 255UL))) == p_21), g_120)), p_20)), p_19)) ^ 8L) == 0x2CL))) | p_22)) < 0x338C270E2A70171CLL) , 9UL)) | p_19) < l_36)) <= g_8) | 0xD6L), 0x13D9L)), g_39[0][0])))
            { 
                int32_t l_168[3][2];
                const int32_t l_169 = 0x3EDB1A99L;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_168[i][j] = (-8L);
                }
                l_170 = (((l_53 = ((((((~(safe_div_func_int32_t_s_s(((p_21 > ((safe_lshift_func_int8_t_s_u((l_168[0][0] = ((safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(((-7L) && l_158), 9)) & g_120), p_19)) < l_36)), 3)) ^ 65532UL)) & g_139[0]), l_169))) , 4294967295UL) || p_19) >= p_21) && (-1L)) != l_158)) < g_2) >= p_21);
                if (l_171[1][1])
                    continue;
            }
            else
            { 
                l_158 = ((g_12 = (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((--p_19) == g_2) && (p_21 = p_20)), ((g_100 , 0x27B7L) ^ p_20))), 4))) || (-1L));
            }
            for (g_100 = 0; (g_100 <= 2); g_100 += 1)
            { 
                int16_t l_190 = 0xE19FL;
                int32_t l_193 = 0x88D01BA1L;
                int32_t l_194 = (-1L);
                l_53 = g_139[0];
                l_53 |= (safe_mul_func_uint16_t_u_u((--g_181), ((safe_sub_func_int64_t_s_s((((safe_mod_func_int8_t_s_s((l_190 &= ((((p_21 , ((safe_add_func_uint16_t_u_u(1UL, l_30)) , p_19)) && l_138) | 2L) ^ p_21)), g_62)) || g_8) < 0xFA259D05L), g_12)) , g_128)));
                l_194 = ((l_193 = (g_181 , (((0xBD87L <= (safe_lshift_func_uint8_t_u_u((1L ^ 0xC6450A63L), 1))) && 0xB84604D86CB6A13BLL) , g_139[0]))) | p_22);
            }
        }
    }
    else
    { 
        uint32_t l_195 = 0xED4DE4FEL;
        for (p_19 = 0; (p_19 <= 2); p_19 += 1)
        { 
            if (l_195)
                break;
            return p_21;
        }
        g_12 = (safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(p_19, p_19)) ^ 0x48D0L), 0x12L));
    }
    g_12 |= l_36;
    return g_91;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_39[i][j], "g_39[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_139[i], "g_139[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_142[i][j], "g_142[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_180[i], "g_180[i]", print_hash_value);

    }
    transparent_crc(g_181, "g_181", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_202[i], "g_202[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
