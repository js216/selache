// SPDX-License-Identifier: MIT
// cctest_csmith_cfd47560.c --- cctest case csmith_cfd47560 (csmith seed 3486807392)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9efe3ee5 */

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

// Options:   -s 3486807392 -o /tmp/csmith_gen_lj5gp67p/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_15 = (-5L);
static uint64_t g_45[5] = {0x9347A64A0F0C0ED6LL,0x9347A64A0F0C0ED6LL,0x9347A64A0F0C0ED6LL,0x9347A64A0F0C0ED6LL,0x9347A64A0F0C0ED6LL};
static uint64_t g_75[2][3][2] = {{{7UL,1UL},{7UL,7UL},{1UL,7UL}},{{7UL,1UL},{7UL,7UL},{1UL,7UL}}};
static uint8_t g_77[1] = {0x18L};
static int32_t g_82 = 0x1DFF66F6L;
static int64_t g_85 = 0x1E45A2DC96F09779LL;
static int16_t g_86 = (-7L);
static uint64_t g_87 = 0x2A12E219839B2FD4LL;
static int32_t g_117 = 1L;
static uint32_t g_140[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static int8_t g_170 = 1L;
static int16_t g_209 = 0xF793L;
static uint32_t g_264 = 1UL;
static int8_t g_270 = 0xDBL;
static uint8_t g_271 = 1UL;
static int32_t g_351 = 0x9E785CDDL;
static int8_t g_352 = 1L;
static int16_t g_355 = 0x317FL;
static uint64_t g_356 = 18446744073709551615UL;



static uint64_t  func_1(void);
static uint16_t  func_4(uint16_t  p_5);
static int32_t  func_11(uint64_t  p_12, uint16_t  p_13);
static int32_t  func_28(int16_t  p_29, uint32_t  p_30, int64_t  p_31, uint32_t  p_32);




static uint64_t  func_1(void)
{ 
    int64_t l_14 = 0L;
    uint16_t l_247 = 0xA73CL;
    int32_t l_249 = 0x895135FDL;
    int32_t l_265 = 0x442374C8L;
    int32_t l_353 = (-1L);
    l_249 &= (safe_mul_func_int8_t_s_s((func_4(((4294967295UL & (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_247 ^= (+((((0xD3A18E41L >= func_11(l_14, (1UL | l_14))) | 0xFF55C6AC741E85B1LL) ^ g_86) > 0x98L))), 0xE312L)), 7))) == 251UL)) || l_247), 0xFCL));
    if (((l_265 = ((g_77[0] , (safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((((safe_div_func_int16_t_s_s((((l_249 ^= 0x31L) , (safe_div_func_int16_t_s_s((-1L), (safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((g_264 = (safe_mul_func_uint8_t_u_u(((l_247 >= 0x05CFCB859700A65ALL) , l_249), 0x76L))), l_14)), g_45[0]))))) , g_209), g_75[1][1][0])) && 0x53CBL) <= g_86) != l_247), g_87)), 0x9E38342FEDE261F0LL))) , 0UL)) , 9L))
    { 
        int16_t l_266[4][3] = {{1L,1L,1L},{(-10L),0x81DAL,0x52FFL},{(-10L),(-10L),0x81DAL},{1L,0x81DAL,0x81DAL}};
        int32_t l_267 = 2L;
        int i, j;
        l_267 = (g_117 &= l_266[0][2]);
        if (g_82)
        { 
            for (l_247 = 0; (l_247 == 43); l_247 = safe_add_func_int32_t_s_s(l_247, 3))
            { 
                g_271++;
            }
        }
        else
        { 
            uint16_t l_274 = 0xB01CL;
            int32_t l_277 = (-5L);
            int32_t l_302[4][4];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                    l_302[i][j] = 0xDC29E298L;
            }
            l_274--;
            l_277 = l_267;
            for (l_249 = 7; (l_249 <= 12); ++l_249)
            { 
                uint8_t l_293 = 255UL;
                l_265 = (g_117 |= (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((l_274 != (0x0F76L ^ (~((safe_add_func_uint8_t_u_u((l_293 = (g_86 < ((l_277 = g_270) || g_170))), 0xCBL)) && 0x1BL)))), 0)) && 3UL), 1)) == g_77[0]), 4294967287UL)), g_15)), l_249)));
                g_117 = (safe_sub_func_uint32_t_u_u(g_45[3], g_15));
                l_302[0][2] &= (l_277 = ((g_117 > (safe_mul_func_int8_t_s_s(g_45[0], l_293))) != (((safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(g_117, l_293)), l_14)) < 0x04E1AB3E25826BE5LL) , 0xF82136C564025E57LL)));
            }
        }
        l_249 |= (l_14 >= (l_265 && (((safe_div_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(0x05L, (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_266[1][1], g_77[0])), g_75[1][1][0])))) == g_45[0]) && l_265), 0x16BDL)) & g_77[0]) ^ l_266[0][2])));
    }
    else
    { 
        uint16_t l_314 = 1UL;
        int32_t l_328 = 0x40970185L;
        uint16_t l_330 = 0x40CFL;
        uint32_t l_365 = 0xF1B1AC4BL;
        for (g_87 = 29; (g_87 > 54); g_87++)
        { 
            uint64_t l_313 = 0x43B3FE90797314FELL;
            l_314 |= l_313;
            return g_75[1][1][0];
        }
        for (l_265 = 0; (l_265 <= 4); l_265 += 1)
        { 
            int32_t l_329 = (-1L);
            int32_t l_349 = 0x00E8144AL;
            int i;
            if ((((8UL > (safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0xDAL, (safe_sub_func_int64_t_s_s((((~g_45[l_265]) , g_45[l_265]) != l_314), g_45[0])))), l_247)), 6))) ^ 6L) | 0x791FE6ADB902ED9ALL))
            { 
                int8_t l_348[2][1][5];
                int32_t l_350 = 0x79B6EA8FL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_348[i][j][k] = 0x17L;
                    }
                }
                g_15 = ((0xE0L & (safe_div_func_uint64_t_u_u(g_85, ((l_314 < (0L > 0x5FBDL)) , 1L)))) != g_45[0]);
                l_330--;
                g_15 = ((safe_unary_minus_func_int16_t_s((g_86 = ((((safe_div_func_int64_t_s_s(((g_140[2] = ((((l_350 = (safe_lshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((g_170 = (((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((-6L), (((g_140[4] , (g_87 != (safe_rshift_func_uint8_t_u_u(l_348[1][0][1], g_15)))) && g_45[l_265]) >= 255UL))), g_75[1][1][0])) > l_14) <= l_249)), l_348[1][0][1])), 0L)) , l_349), l_14))) >= g_45[l_265]) , 18446744073709551615UL) , 0UL)) > 0x25829D65L), 2L)) ^ l_348[1][0][2]) < l_348[0][0][2]) ^ g_82)))) , g_271);
            }
            else
            { 
                int16_t l_354[2][4];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_354[i][j] = (-10L);
                }
                ++g_356;
                g_117 |= (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((safe_div_func_int8_t_s_s(0x75L, g_45[0])) > (g_170 || (((((g_45[l_265] == l_353) , l_247) & 0x8DCC0734L) <= 0xB7D6L) <= 1UL))) > l_329), l_354[0][2])), 252UL));
                l_329 |= l_365;
            }
        }
    }
    return g_75[1][1][0];
}



static uint16_t  func_4(uint16_t  p_5)
{ 
    uint64_t l_248 = 18446744073709551615UL;
    l_248 = 5L;
    return l_248;
}



static int32_t  func_11(uint64_t  p_12, uint16_t  p_13)
{ 
    uint32_t l_16[4] = {0xD0BB94D0L,0xD0BB94D0L,0xD0BB94D0L,0xD0BB94D0L};
    int32_t l_17 = 0x77904128L;
    int32_t l_81[2];
    int8_t l_125 = 0L;
    int32_t l_219[5][1] = {{(-10L)},{(-6L)},{(-10L)},{(-6L)},{(-10L)}};
    uint16_t l_224[1];
    int i, j;
    for (i = 0; i < 2; i++)
        l_81[i] = 0x587BB5B2L;
    for (i = 0; i < 1; i++)
        l_224[i] = 0UL;
lbl_174:
    if ((g_15 , ((l_16[3] == (l_16[3] , 0x5FFF839E071A0513LL)) & p_13)))
    { 
        uint64_t l_18 = 0x52FA814B11F3813BLL;
        l_17 = p_12;
        return l_18;
    }
    else
    { 
        uint8_t l_76 = 0UL;
        int32_t l_78 = 0x92DDE99EL;
        int32_t l_79 = (-5L);
        int32_t l_80 = 1L;
        int32_t l_83 = 0xC626C480L;
        int32_t l_84[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_84[i][j] = 0x7DE593F2L;
        }
        for (g_15 = 3; (g_15 >= 0); g_15 -= 1)
        { 
            int i;
            if (l_16[g_15])
                break;
            for (l_17 = 0; (l_17 <= 3); l_17 += 1)
            { 
                int32_t l_35[2][5] = {{0x01D4C3F1L,0L,0x59515ED7L,0L,0x59515ED7L},{0L,0L,0x01D4C3F1L,0L,0L}};
                int32_t l_38 = (-1L);
                int i, j;
                if (g_15)
                    break;
                g_77[0] = (l_35[1][4] = ((safe_lshift_func_uint8_t_u_s(g_15, (safe_div_func_uint16_t_u_u(((+(safe_rshift_func_int16_t_s_u((-9L), ((((safe_rshift_func_int8_t_s_s((func_28((l_38 |= ((((safe_mul_func_int16_t_s_s((((((((l_35[1][1] > (safe_rshift_func_int16_t_s_s(p_12, 9))) == l_17) ^ 1UL) < g_15) , g_15) < p_13) & (-1L)), 0x8C84L)) , g_15) == 1L) > l_16[1])), l_35[0][4], g_15, l_16[g_15]) > 0x42E063A2L), p_13)) | g_15) , p_12) <= g_15)))) & l_76), g_15)))) > 247UL));
            }
            for (p_12 = 0; (p_12 <= 3); p_12 += 1)
            { 
                return p_13;
            }
        }
        g_87--;
    }
    for (g_15 = 5; (g_15 < 15); g_15 = safe_add_func_uint64_t_u_u(g_15, 7))
    { 
        uint8_t l_94[2];
        int32_t l_116 = 0L;
        int32_t l_131 = 0L;
        uint32_t l_165 = 0x350F1593L;
        int32_t l_166 = 1L;
        uint32_t l_167 = 4294967292UL;
        int i;
        for (i = 0; i < 2; i++)
            l_94[i] = 0x85L;
        if ((safe_sub_func_uint8_t_u_u((l_94[0] != ((l_81[0] = (((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((+((g_117 = (safe_mul_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(l_81[0], (((l_17 ^= (((safe_lshift_func_int16_t_s_s(7L, (l_116 ^= (((safe_lshift_func_int16_t_s_u(l_16[2], p_13)) < p_13) , l_94[0])))) || (-1L)) , p_13)) , g_45[0]) ^ 0xD98765FAFB163631LL))) == 0xFC1E9F9EEF7B85BFLL), g_87))) , 0xCABD61F3L)) , l_116) || l_94[0]), p_13)), l_81[1])) && p_13), 3UL)), g_86)) , l_16[3]), 0x99L)) != 4294967289UL), 3)) && p_13) ^ g_82)) & 9UL)), 255UL)))
        { 
            uint64_t l_124 = 0xC331A2D7867E7C57LL;
            int32_t l_129 = 1L;
            for (g_117 = 1; (g_117 == (-11)); g_117 = safe_sub_func_int64_t_s_s(g_117, 1))
            { 
                uint32_t l_126 = 0x02A55519L;
                int16_t l_130[3][3] = {{(-6L),(-6L),(-6L)},{0x6B46L,0x6B46L,0x6B46L},{(-6L),(-6L),(-6L)}};
                int i, j;
                l_131 = (l_130[0][1] |= ((l_129 = ((safe_mul_func_int8_t_s_s(((g_85 < (l_81[1] = ((l_116 = (safe_div_func_uint8_t_u_u((g_77[0] = l_124), (l_126--)))) <= (0x4A4BB2EEL & (g_117 >= g_85))))) && l_94[0]), l_124)) , g_75[0][1][1])) || g_87));
            }
            for (l_116 = 0; (l_116 >= (-22)); l_116 = safe_sub_func_int16_t_s_s(l_116, 5))
            { 
                int32_t l_163 = 0xDD4A88B0L;
                int32_t l_164 = (-1L);
                l_167 |= (safe_mul_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((((((safe_sub_func_int8_t_s_s((((((g_140[4]--) > 0xFD82L) && ((l_16[3] <= (safe_mod_func_uint64_t_u_u(((((safe_add_func_int64_t_s_s(((((safe_rshift_func_uint16_t_u_u((((safe_add_func_int64_t_s_s((((l_129 &= ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s((0x742CL ^ (safe_sub_func_uint32_t_u_u((((l_163 = (safe_lshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s(1L, l_94[0])) , g_85), 4))) , l_124) , 4294967295UL), 0L))), l_94[0])), (-9L))), p_13)) >= l_94[0])) && p_12) , l_81[1]), l_164)) < l_81[1]) == 0xF3L), g_85)) || 7L) & 0xD68B998AL) , 1L), g_140[4])) != l_124) | p_13) ^ 1L), 9UL))) >= g_140[4])) ^ l_165) , (-7L)), g_45[0])) == l_166) > 0x2BL) == g_45[0]) , l_163), 252UL)) || p_12) <= 0x2DBFB6B4L), 0x47L));
            }
        }
        else
        { 
            int32_t l_173 = 0x71EAA774L;
            int16_t l_189 = 0x5562L;
            int32_t l_190 = 0x02CFFAFFL;
            if (((l_116 = (((safe_lshift_func_uint16_t_u_u((g_170 ^= g_86), p_13)) | (g_77[0] ^= ((g_85 , (((safe_rshift_func_uint8_t_u_s(8UL, l_131)) > 1UL) && 0xDCL)) <= 0xC14FE9C12CE41FC7LL))) , l_173)) , p_13))
            { 
                uint64_t l_181 = 0x00042A17331CC493LL;
                if (l_167)
                    goto lbl_174;
                l_81[1] = ((4294967295UL && (safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(((l_173 = (safe_lshift_func_uint8_t_u_u(p_13, 3))) > (l_181 != (safe_lshift_func_uint16_t_u_u(0UL, 7)))), g_87)) , 1UL), 0x55B3299BL))) & 0x72B3L);
                return p_12;
            }
            else
            { 
                int32_t l_188 = 0x08D31AF4L;
                l_190 &= ((l_188 = ((!((safe_mod_func_uint64_t_u_u(((-4L) <= ((0x58L <= ((((l_94[1] > ((!p_13) | g_15)) & 0x7D84EA22E85F5907LL) , l_188) , l_173)) == l_189)), 0xABB1F7435F2194A6LL)) , 0x7F16177B4B0E1CB3LL)) || 0UL)) == p_13);
                if (p_13)
                    continue;
                g_117 &= (+(((safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(p_12, ((safe_rshift_func_uint8_t_u_s((g_77[0] = (safe_div_func_int8_t_s_s((0L | (safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(l_188, g_77[0])), g_140[0])), l_190))), l_173))), p_12)) , g_140[4]))), g_87)) || p_12) || p_12));
            }
            for (g_117 = 0; (g_117 <= 1); g_117 += 1)
            { 
                int i;
                l_17 = ((l_81[g_117] = l_16[(g_117 + 2)]) == (7UL >= (255UL | ((((l_190 &= (g_209 |= (safe_div_func_uint64_t_u_u(((safe_unary_minus_func_uint32_t_u(l_16[(g_117 + 2)])) , g_86), g_45[0])))) >= g_87) , p_12) && g_77[0]))));
            }
        }
        if (p_13)
            break;
    }
    if ((l_17 &= (l_219[1][0] = ((safe_mod_func_int32_t_s_s((+(g_87 = (safe_add_func_int64_t_s_s(((l_81[1] , (l_81[0] = (((l_81[1] != ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((g_77[0]++), 1)), 13)) < ((g_87 > (safe_div_func_int64_t_s_s((0xD51EL > l_81[1]), g_87))) || l_219[4][0]))) > 1UL) || p_12))) & l_224[0]), p_12)))), p_12)) | p_12))))
    { 
        for (l_125 = (-20); (l_125 < (-14)); l_125 = safe_add_func_int8_t_s_s(l_125, 2))
        { 
            return l_16[1];
        }
    }
    else
    { 
        int64_t l_235 = (-1L);
        for (g_87 = 0; (g_87 <= 0); g_87 += 1)
        { 
            int32_t l_236 = 0x65945407L;
            int i;
            g_15 = (g_77[g_87] , ((l_236 = ((p_12 >= (p_13 | ((g_77[0]--) >= ((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((g_170 & l_224[0]) >= l_235) == l_235), l_236)), 8)) | 4294967295UL) , g_45[0]) ^ 4L) || 1UL), 6)) | p_12)))) > g_45[3])) != g_117));
            for (l_235 = 0; (l_235 >= 0); l_235 -= 1)
            { 
                int i, j;
                l_236 &= ((((18446744073709551609UL >= (safe_mul_func_uint16_t_u_u(((l_219[l_235][l_235] , ((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((((g_77[0] = 250UL) , (safe_mul_func_uint16_t_u_u(((((((((((0x511DFB01F2DFD3FBLL && 0x54A4C857A1910C96LL) || p_13) != 4294967295UL) != g_170) & g_87) >= p_13) ^ p_12) , l_235) >= l_235) , g_15), g_45[0]))) >= g_86) != 0x013E866AL) != p_12), p_12)), l_219[l_235][l_235])), p_13)) >= l_235)) , p_12), g_45[2]))) , l_235) ^ l_235) == (-1L));
            }
        }
    }
    return l_224[0];
}



static int32_t  func_28(int16_t  p_29, uint32_t  p_30, int64_t  p_31, uint32_t  p_32)
{ 
    uint8_t l_41[2];
    int32_t l_44 = (-1L);
    int32_t l_64 = 1L;
    int i;
    for (i = 0; i < 2; i++)
        l_41[i] = 0x68L;
    g_45[0] = ((((p_30 < p_29) || (safe_lshift_func_uint8_t_u_u(((l_41[0] |= p_30) >= (safe_div_func_uint32_t_u_u((l_44 , 0x7820EAADL), p_29))), l_44))) < g_15) && l_41[0]);
    for (l_44 = 28; (l_44 == (-19)); l_44 = safe_sub_func_uint8_t_u_u(l_44, 4))
    { 
        uint32_t l_59 = 4294967295UL;
        int32_t l_62 = 0x1A33FE8FL;
        int8_t l_63 = 1L;
        l_64 = (((0xAA0BL > (safe_sub_func_uint32_t_u_u(((((+(((safe_rshift_func_uint8_t_u_s(g_15, 2)) || ((safe_mod_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((l_59 = 0x9D5C01CF56E035D6LL), ((((safe_lshift_func_uint8_t_u_u(l_44, g_45[0])) > g_45[3]) < p_30) || (-8L)))), 0xAA841158L)) , 0UL) ^ g_45[3]) != l_62), p_29)) < l_63)) != 0x49E3B93F16A1EA56LL)) && 9L) | g_45[0]) ^ l_41[0]), p_32))) >= l_41[1]) <= g_45[1]);
    }
    g_75[1][1][0] = (((safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((1L == (0xEC44CB182417F16CLL > (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(1L, (((safe_sub_func_int16_t_s_s(((l_44 || 2UL) >= p_31), p_30)) == 8L) != 0x018BFD1EL))), g_15)))), l_64)), g_45[4])) , g_15) != 7UL);
    return p_31;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_45[i], "g_45[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_75[i][j][k], "g_75[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_77[i], "g_77[i]", print_hash_value);

    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);

    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
