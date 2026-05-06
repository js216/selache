// SPDX-License-Identifier: MIT
// cctest_csmith_89ac5d00.c --- cctest case csmith_89ac5d00 (csmith seed 2309774592)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x691eaebf */

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

// Options:   -s 2309774592 -o /tmp/csmith_gen_j37jot1a/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint64_t g_5 = 7UL;
static int64_t g_14[2][4] = {{0x33582F80C3414B58LL,0x33582F80C3414B58LL,0x33582F80C3414B58LL,0x33582F80C3414B58LL},{0x33582F80C3414B58LL,0x33582F80C3414B58LL,0x33582F80C3414B58LL,0x33582F80C3414B58LL}};
static uint64_t g_53[2] = {18446744073709551615UL,18446744073709551615UL};
static uint32_t g_66 = 18446744073709551608UL;
static uint32_t g_71 = 18446744073709551608UL;
static int32_t g_73[3][3] = {{2L,2L,2L},{0xC01CF56EL,1L,0xC01CF56EL},{2L,2L,2L}};
static int32_t g_91 = 5L;
static int32_t g_127 = (-2L);
static uint64_t g_128 = 0x462BD54EFE8F334ELL;
static int8_t g_141[3] = {0x31L,0x31L,0x31L};
static uint32_t g_169[2] = {18446744073709551615UL,18446744073709551615UL};



static uint16_t  func_1(void);
static uint8_t  func_26(int32_t  p_27, int32_t  p_28);
static int32_t  func_29(int16_t  p_30, int32_t  p_31, int32_t  p_32, uint8_t  p_33);




static uint16_t  func_1(void)
{ 
    int32_t l_4 = 0L;
    int32_t l_18 = 0x32D7AF2CL;
    uint64_t l_163 = 0xD0EBFA9BDD0B6939LL;
    if ((safe_rshift_func_int8_t_s_s(l_4, 2)))
    { 
        uint8_t l_17 = 5UL;
        uint8_t l_164 = 255UL;
        --g_5;
        l_18 = (((safe_mod_func_uint16_t_u_u(1UL, (safe_mul_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((g_14[1][0] |= 0x64FD9E2A8D3A18E4LL), (((safe_mod_func_int32_t_s_s(g_5, 0x3C67EE39L)) || l_17) | g_5))) == g_5) & l_17), 0x355FL)))) != g_5) && g_14[1][0]);
        for (g_5 = 0; (g_5 <= 1); g_5 += 1)
        { 
            uint32_t l_19 = 1UL;
            int32_t l_152 = (-7L);
            uint32_t l_165[4] = {18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL};
            int i;
            if (l_19)
            { 
                int64_t l_34[2];
                int32_t l_160 = 0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_34[i] = 2L;
                l_152 = (g_14[1][0] == (safe_mul_func_int8_t_s_s(g_14[1][0], (l_160 = ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((func_26(func_29(((l_4 ^ l_17) > 1UL), l_34[0], l_34[0], l_34[0]), l_152) , l_19), 11)) && l_34[0]), g_5)) , g_141[0])))));
                l_164 = ((l_19 && ((safe_mod_func_uint8_t_u_u((l_18 != ((g_14[0][2] ^= (((l_18 , g_91) , g_127) , l_34[0])) , g_91)), g_141[2])) >= l_34[1])) ^ l_163);
            }
            else
            { 
                ++l_165[3];
            }
            for (l_164 = 0; (l_164 <= 1); l_164 += 1)
            { 
                int16_t l_168[2][2];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_168[i][j] = 0xFC3DL;
                }
                ++g_169[0];
            }
        }
    }
    else
    { 
        int32_t l_172 = 0xE39FD58AL;
        l_172 = 0x0635580CL;
    }
    g_127 = g_14[0][0];
    return l_18;
}



static uint8_t  func_26(int32_t  p_27, int32_t  p_28)
{ 
    uint8_t l_158 = 0xCAL;
    int32_t l_159 = 0x9DCED91EL;
    l_159 = (safe_mul_func_uint8_t_u_u(0x2FL, ((~(safe_add_func_int8_t_s_s(p_28, ((p_28 && g_73[1][0]) || l_158)))) <= (-4L))));
    return l_158;
}



static int32_t  func_29(int16_t  p_30, int32_t  p_31, int32_t  p_32, uint8_t  p_33)
{ 
    int32_t l_51 = 0xDC4B54C5L;
    int32_t l_72 = (-9L);
    int32_t l_74 = 0x1F9D3F58L;
    uint8_t l_90[1][2];
    int32_t l_97 = (-4L);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_90[i][j] = 0x5AL;
    }
    for (p_31 = 11; (p_31 >= 21); p_31++)
    { 
        uint32_t l_52 = 0xCF58A412L;
        g_53[0] = (safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((0x5F4D0C65L | ((safe_sub_func_int8_t_s_s(((((((g_14[0][3] < ((safe_add_func_int32_t_s_s((1UL || p_33), p_30)) && g_14[0][0])) >= l_51) > p_33) , p_33) ^ (-5L)) , 0x26L), 1L)) | l_52)) , g_14[1][2]), p_31)), 0xAFL)), (-1L))), l_51)) , (-1L)), 3));
    }
    if ((g_66 &= ((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_30, (((g_53[0] || l_51) | 0L) <= 0x36C21779538E5EFBLL))), g_53[0])), g_53[0])), 8)), l_51)), g_5)) & g_14[1][3])))
    { 
        uint64_t l_88 = 0xEA5693CDB7CFF1CCLL;
        int32_t l_89 = (-9L);
        for (p_31 = 0; (p_31 <= (-17)); p_31 = safe_sub_func_int8_t_s_s(p_31, 5))
        { 
            uint32_t l_75 = 0x6F6324B7L;
            g_71 = (safe_rshift_func_int16_t_s_s(l_51, 2));
            --l_75;
        }
        l_89 |= ((4UL <= (safe_add_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(g_73[1][0], 5)), 7)) , 1L), l_72)), p_30)) , p_32) | l_88), 8UL))) , g_66);
        l_72 = p_33;
    }
    else
    { 
        g_91 = l_90[0][1];
    }
    if ((!0xBDB030F3L))
    { 
        g_91 = g_14[0][3];
    }
    else
    { 
        int16_t l_98 = 5L;
        int32_t l_139[1];
        int32_t l_142[3];
        int i;
        for (i = 0; i < 1; i++)
            l_139[i] = 0xCA7CC927L;
        for (i = 0; i < 3; i++)
            l_142[i] = 5L;
        if ((safe_mul_func_int8_t_s_s((1UL == l_72), ((safe_add_func_uint32_t_u_u((((0x2257L < l_97) <= g_91) & l_98), g_66)) , p_33))))
        { 
            int32_t l_115[3];
            int i;
            for (i = 0; i < 3; i++)
                l_115[i] = 0x8392DDE9L;
            for (l_51 = 0; (l_51 > (-8)); l_51 = safe_sub_func_uint16_t_u_u(l_51, 1))
            { 
                int16_t l_114 = 0xFF10L;
                int32_t l_116 = (-10L);
                g_91 = (safe_add_func_uint8_t_u_u(((p_30 = (((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((+(p_30 && 4294967295UL)), (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((l_116 = ((l_114 , l_114) & l_115[2])), 2)) , 9UL), 0x0225L)))) , p_33) || p_31) , 1L), g_66)), l_74)) > p_30) >= 1UL)) <= p_33), (-1L)));
            }
            return l_98;
        }
        else
        { 
            int64_t l_122 = 0x85C55787DF3DEF63LL;
            uint8_t l_140[1][2];
            uint8_t l_143 = 3UL;
            int16_t l_148 = (-3L);
            int32_t l_149 = 0xDEDA8194L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_140[i][j] = 0x05L;
            }
            g_91 ^= (safe_div_func_uint64_t_u_u((+(g_128 = ((safe_mod_func_uint8_t_u_u(l_122, (safe_add_func_int8_t_s_s((g_127 |= (((safe_div_func_int64_t_s_s((p_31 == (5UL ^ 255UL)), l_122)) >= 0xA119L) != l_97)), g_73[1][0])))) > g_73[1][0]))), l_74));
            l_143 = (l_142[2] = (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((g_141[0] = ((p_32 , (((safe_div_func_uint64_t_u_u((l_139[0] = (safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((g_71 > (l_140[0][0] ^= (l_139[0] < l_139[0]))), g_71)), g_71))), l_74)) , 0L) != g_53[0])) <= g_73[1][0])), l_122)), (-6L))));
            l_149 = (p_32 = ((safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(p_32, (l_148 = 18446744073709551615UL))), ((g_73[0][1] | 1L) || g_66))) , g_91));
        }
        l_139[0] = 0x9605DBDBL;
        g_127 = ((0x9FL < 0UL) , ((safe_sub_func_uint32_t_u_u(g_73[0][0], p_30)) == l_98));
    }
    return g_128;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_73[i][j], "g_73[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
