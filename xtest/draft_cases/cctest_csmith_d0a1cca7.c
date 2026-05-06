// SPDX-License-Identifier: MIT
// cctest_csmith_d0a1cca7.c --- cctest case csmith_d0a1cca7 (csmith seed 3500264615)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf9ec3399 */

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

// Options:   -s 3500264615 -o /tmp/csmith_gen_akqhibxl/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_10 = 0x1B61BAB5L;
static uint16_t g_13 = 0UL;
static uint32_t g_34 = 0xD070FEEAL;
static uint16_t g_40[1] = {0xBFEDL};
static int8_t g_59 = 0x27L;
static int64_t g_74[4] = {0xED0A01C1786B757CLL,0xED0A01C1786B757CLL,0xED0A01C1786B757CLL,0xED0A01C1786B757CLL};
static int32_t g_85 = 3L;
static int32_t g_86 = 1L;
static uint64_t g_87 = 0xA95679D6528A1895LL;
static int32_t g_88[4][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
static int8_t g_133 = 0x5CL;
static int32_t g_146 = 0x2E7CA327L;
static uint64_t g_149 = 4UL;
static uint32_t g_177 = 4294967295UL;
static int64_t g_203 = (-4L);



static uint8_t  func_1(void);
static int32_t  func_2(int8_t  p_3, const int16_t  p_4, uint16_t  p_5, uint32_t  p_6);
static int16_t  func_24(uint32_t  p_25, uint32_t  p_26, uint64_t  p_27, int64_t  p_28, int64_t  p_29);
static int16_t  func_48(uint32_t  p_49, uint32_t  p_50, uint32_t  p_51, int32_t  p_52, int16_t  p_53);




static uint8_t  func_1(void)
{ 
    int8_t l_7 = (-1L);
    uint16_t l_11 = 0x4678L;
    uint32_t l_12 = 0x1B1B552BL;
    int32_t l_15 = 0L;
    uint8_t l_19[1][5][1];
    int64_t l_199 = 0xA2E4B3AAB27D9080LL;
    int32_t l_206 = 0x971FE1FCL;
    int32_t l_207 = 0x137C4823L;
    int32_t l_208[1];
    uint16_t l_209 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_19[i][j][k] = 0x35L;
        }
    }
    for (i = 0; i < 1; i++)
        l_208[i] = 1L;
    if (func_2(l_7, ((l_12 &= (safe_add_func_int16_t_s_s(((g_10 < g_10) | ((l_11 , 1UL) < l_7)), l_7))) | l_7), l_7, g_10))
    { 
        uint16_t l_16 = 0x056EL;
        int32_t l_20 = (-2L);
        int64_t l_30 = 0x37A30B91300D3B51LL;
        int32_t l_200 = 0x4D5C3D96L;
        l_16++;
        for (l_15 = 0; (l_15 >= 0); l_15 -= 1)
        { 
            int64_t l_23 = 0x9495E0E2BF35DD75LL;
            int32_t l_159 = 0x95A27483L;
            int64_t l_204 = 0x9FEB54838739BA65LL;
            int8_t l_205 = 0xE7L;
            if (g_13)
            { 
                l_20 = 0x84CBED56L;
            }
            else
            { 
                uint16_t l_150 = 65535UL;
                g_149 |= (safe_rshift_func_int16_t_s_s(l_23, func_24(l_23, ((func_2(l_23, g_10, g_13, g_10) == g_13) || g_10), l_7, l_30, l_7)));
                ++l_150;
                g_88[3][0] = (g_74[2] < ((safe_lshift_func_uint16_t_u_s(g_74[0], 2)) | ((safe_mod_func_uint16_t_u_u(g_85, (-1L))) || g_87)));
            }
            if ((safe_div_func_int32_t_s_s(g_74[2], (((g_85 &= ((g_146 < l_23) | g_86)) , g_10) | l_159))))
            { 
                const int8_t l_176[2] = {(-9L),(-9L)};
                int i;
                g_146 ^= (((safe_div_func_uint32_t_u_u(((0x4E3B0AB2CF5B4EFALL < (((((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((l_15 <= ((safe_rshift_func_int16_t_s_u((g_177 = ((safe_add_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((l_176[0] , g_88[2][1]) , g_34), g_13)) ^ 0x99L), 0x603AL)) < l_16)), l_176[0])) < 0x1AC1L)), l_12)), g_40[0])) >= 0x2BL), g_86)) <= 2UL) || g_74[3]) >= 4294967286UL) <= g_34)) ^ l_16), (-1L))) | g_85) != l_16);
                g_86 |= (((safe_add_func_uint32_t_u_u((g_34 , (g_177 ^= 0UL)), 4294967290UL)) > ((0x2201DAD3L < 0x4D10B9EBL) , 3UL)) != g_34);
            }
            else
            { 
                uint32_t l_198 = 0x726CC1D1L;
                int32_t l_201[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
                uint32_t l_202 = 5UL;
                int i;
                l_204 ^= ((safe_sub_func_uint64_t_u_u(0xB26F9E2A9A63C7B2LL, (g_203 ^= (safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((g_88[1][1] > ((safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((((((l_201[4] = (g_146 = ((safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((g_74[0] && 0x38L) , g_177), 0)) || l_198) | 0L), l_199)) | g_88[0][0]), l_198)) | l_200))) || g_40[0]) || 2L) > l_198) && l_20) , g_146), g_34)), g_133)), 6)) , l_202)) < 0x58L), 0xDBF4248BL)) >= g_74[2]), g_59))))) && 0xBA9EA0974D9EF021LL);
            }
            --l_209;
            for (l_199 = 0; (l_199 >= 0); l_199 -= 1)
            { 
                uint32_t l_216 = 18446744073709551609UL;
                l_159 = (((((((g_40[0] = g_74[2]) , (safe_mod_func_int64_t_s_s(((safe_unary_minus_func_int8_t_s(((+(((g_86 , g_34) != l_199) | l_216)) < 0x228CF20DL))) <= 0xAA36CE900BC56578LL), 0x8A08BE86FCF0EC28LL))) <= 0L) >= 1UL) , 0UL) & 0x074757F8L) || g_149);
                return g_88[0][0];
            }
        }
    }
    else
    { 
        return g_146;
    }
    l_15 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_15, 0xE6L)), 2));
    return l_207;
}



static int32_t  func_2(int8_t  p_3, const int16_t  p_4, uint16_t  p_5, uint32_t  p_6)
{ 
    uint32_t l_14 = 0UL;
    l_14 ^= (g_13 | p_3);
    return l_14;
}



static int16_t  func_24(uint32_t  p_25, uint32_t  p_26, uint64_t  p_27, int64_t  p_28, int64_t  p_29)
{ 
    int32_t l_33 = (-3L);
    uint32_t l_39 = 8UL;
    int32_t l_41 = 0x3F8C547FL;
    int8_t l_61 = 0x52L;
    int32_t l_113 = 0x0CA50A4BL;
    int32_t l_116 = 0xC2773854L;
    uint32_t l_147 = 1UL;
    uint16_t l_148[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
    int i;
    if (g_13)
    { 
        const int32_t l_35[2][5] = {{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)}};
        int16_t l_36 = 0xBAB6L;
        int32_t l_38 = (-1L);
        int i, j;
        for (p_25 = 4; (p_25 > 47); p_25 = safe_add_func_int16_t_s_s(p_25, 6))
        { 
            int64_t l_37 = (-4L);
            l_38 |= func_2(l_33, (g_34 = p_27), (l_35[1][4] || (l_36 = l_33)), l_37);
        }
        l_41 &= (func_2(((l_39 || (((g_40[0] = (g_34 == (0xBB36E903L ^ (g_34 ^ g_34)))) <= (-1L)) ^ l_35[0][3])) < g_13), p_27, p_29, p_26) != l_33);
    }
    else
    { 
        uint32_t l_60 = 1UL;
        int32_t l_115[1][5][3] = {{{0xDF614048L,1L,0xDF614048L},{0xA5590F52L,0xA5590F52L,0xA5590F52L},{0xDF614048L,1L,0xDF614048L},{0xA5590F52L,0xA5590F52L,0xA5590F52L},{0xDF614048L,1L,0xDF614048L}}};
        int i, j, k;
        for (p_25 = 0; (p_25 <= 0); p_25 += 1)
        { 
            int32_t l_56 = 0xAB5AA9D2L;
            int i;
            if ((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_u(func_48(((((g_40[p_25] ^ ((((g_59 = ((((-1L) ^ (((((safe_mod_func_uint16_t_u_u((g_13--), 7L)) || (4L ^ g_40[0])) , p_27) || g_13) , 1L)) <= p_26) && g_13)) == l_60) ^ g_34) , g_10)) || g_40[0]) & p_27) != g_40[0]), p_25, l_61, g_34, p_27), l_60)) < g_34) | l_61), g_34)), g_34)))
            { 
                g_88[3][2] = (~(!7L));
            }
            else
            { 
                int16_t l_105 = 0xBB5DL;
                int32_t l_112[2];
                int16_t l_114[4];
                uint64_t l_117 = 0x64697844A5BE0B32LL;
                int32_t l_134 = (-1L);
                uint32_t l_135 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_112[i] = (-1L);
                for (i = 0; i < 4; i++)
                    l_114[i] = 0xE558L;
                g_88[0][0] = ((safe_sub_func_int8_t_s_s((l_105 < g_34), ((g_40[p_25] <= (((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((l_112[0] |= (safe_mul_func_uint8_t_u_u(0x99L, g_34))) ^ 18446744073709551606UL), l_105)), g_74[2])) , 0xCFFAL) & p_29)) , g_74[3]))) != 0UL);
                l_117++;
                g_86 = (((((((l_134 = (safe_lshift_func_int16_t_s_s((g_133 = (((l_112[1] = (safe_div_func_int16_t_s_s((((+(safe_mod_func_int64_t_s_s(g_87, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0xFC39L, 11)), (safe_mod_func_uint32_t_u_u(p_27, (-3L)))))))) && 0xE3505F38L) < (-9L)), 0x7315L))) >= g_40[p_25]) >= p_25)), g_74[2]))) > g_10) , g_88[3][2]) < g_34) <= p_27) != l_135) , p_27);
            }
            l_56 &= p_29;
        }
    }
    l_41 = (g_86 = ((((safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((p_26 |= 1UL) < (l_113 = (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((((p_28 != (safe_mod_func_uint32_t_u_u((g_146 = (g_40[0] <= ((-1L) >= g_34))), p_27))) != 7UL) || 4294967295UL), l_41)), 12)))) , l_147), 1L)) <= g_34), l_148[1])) & g_40[0]) , l_113) <= g_86));
    return p_27;
}



static int16_t  func_48(uint32_t  p_49, uint32_t  p_50, uint32_t  p_51, int32_t  p_52, int16_t  p_53)
{ 
    uint8_t l_65 = 0x23L;
    int32_t l_94 = 0x11835E00L;
    int64_t l_99[4][3] = {{0xF66FFE49794E5485LL,0xF66FFE49794E5485LL,0L},{0x2F9331570527DF68LL,0x2F9331570527DF68LL,0L},{0xF66FFE49794E5485LL,0xF66FFE49794E5485LL,0L},{0x2F9331570527DF68LL,0x2F9331570527DF68LL,0L}};
    int i, j;
    for (g_13 = 16; (g_13 < 41); g_13 = safe_add_func_int32_t_s_s(g_13, 8))
    { 
        int64_t l_64 = 0xAD11CF5132FC9DABLL;
        int32_t l_93 = 0x794E43DEL;
        for (p_51 = 0; (p_51 <= 0); p_51 += 1)
        { 
            uint64_t l_73[3][2] = {{18446744073709551615UL,18446744073709551615UL},{1UL,18446744073709551615UL},{18446744073709551615UL,1UL}};
            int i, j;
            g_74[2] |= (((((++l_65) || ((+((l_65 < 0xFF85525C537F45EALL) <= ((safe_mod_func_uint16_t_u_u(((g_40[p_51] ^= (0x58L & (safe_div_func_int64_t_s_s((-3L), g_13)))) == 0xE00CL), l_73[1][0])) , l_65))) >= 1UL)) || l_65) < g_34) | l_64);
            for (l_64 = 0; (l_64 == 28); ++l_64)
            { 
                g_88[0][0] = ((-9L) >= (g_87 = ((safe_lshift_func_uint16_t_u_u((g_40[0] = ((((0xF0B38F1CEF17F0EFLL == (g_34 <= (g_86 &= (g_85 = (safe_sub_func_uint32_t_u_u(g_59, g_40[0])))))) < l_64) > (-6L)) , g_74[0])), g_74[2])) <= 0UL)));
            }
            l_94 = ((p_52 == 0UL) ^ ((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((p_49 != 18446744073709551613UL) , l_93), l_64)), g_74[2])) & 0UL));
        }
        if ((((safe_rshift_func_uint16_t_u_u((l_94 = 6UL), 2)) , (((g_87 > l_99[1][1]) < ((g_40[0] , g_13) >= g_86)) , p_53)) || 0xE4L))
        { 
            int32_t l_100 = 0xA31C558FL;
            l_100 = l_100;
            if (l_100)
                continue;
            if (p_53)
                continue;
        }
        else
        { 
            return p_51;
        }
    }
    return g_74[2];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_40[i], "g_40[i]", print_hash_value);

    }
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_88[i][j], "g_88[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
