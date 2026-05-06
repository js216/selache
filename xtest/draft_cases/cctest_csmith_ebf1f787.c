// SPDX-License-Identifier: MIT
// cctest_csmith_ebf1f787.c --- cctest case csmith_ebf1f787 (csmith seed 3958503303)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x634bc47 */

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

// Options:   -s 3958503303 -o /tmp/csmith_gen_e0xgcu0h/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_2[5] = {0x831713B9L,0x831713B9L,0x831713B9L,0x831713B9L,0x831713B9L};
static int32_t g_5 = 1L;
static uint8_t g_37 = 0xF2L;
static int32_t g_50 = (-7L);
static int32_t g_82 = 0x9DABC5D6L;
static int8_t g_84 = 9L;
static uint32_t g_85 = 0x00C1829BL;
static int32_t g_91 = 1L;
static uint8_t g_97[5][4] = {{0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL}};
static int16_t g_100 = 8L;
static int64_t g_101 = 8L;
static uint16_t g_102 = 0x5CA9L;
static uint64_t g_110 = 0UL;
static uint32_t g_186 = 1UL;
static uint32_t g_236 = 0x96F6E79FL;
static uint32_t g_267 = 1UL;



static int16_t  func_1(void);
static int64_t  func_8(uint16_t  p_9, int32_t  p_10, int32_t  p_11, uint16_t  p_12, uint32_t  p_13);
static int8_t  func_16(uint8_t  p_17, uint32_t  p_18, int16_t  p_19, int32_t  p_20);
static uint16_t  func_23(uint16_t  p_24, uint32_t  p_25, const int32_t  p_26);




static int16_t  func_1(void)
{ 
    uint16_t l_33 = 2UL;
    int32_t l_185 = 0xA552D6EEL;
    uint32_t l_278 = 0x1ECD67B5L;
    for (g_2[1] = 0; (g_2[1] >= 23); ++g_2[1])
    { 
        uint64_t l_32 = 8UL;
        int32_t l_277 = 0xB0343139L;
        for (g_5 = 0; (g_5 <= 7); g_5 = safe_add_func_uint8_t_u_u(g_5, 7))
        { 
            const uint8_t l_34 = 1UL;
            if ((func_8(((g_186 = (l_185 &= (safe_mul_func_uint16_t_u_u(g_2[0], (255UL > func_16(g_2[1], ((safe_rshift_func_uint16_t_u_s(func_23(((+((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((0x6A056EBF4D39D982LL | l_32), 1)), g_2[2])) & l_32)) , g_2[1]), l_33, l_34), 5)) > l_33), g_2[0], l_32)))))) && l_32), g_100, g_100, l_33, l_34) , (-1L)))
            { 
                int16_t l_279 = 0x747AL;
                g_50 = (safe_sub_func_uint16_t_u_u(g_97[0][1], g_101));
                l_279 = ((g_186 , (((l_185 , (((g_100 = ((-1L) <= (l_277 = l_32))) | g_2[2]) & 0x49L)) >= l_278) , g_37)) > l_34);
            }
            else
            { 
                return l_32;
            }
        }
    }
    return g_267;
}



static int64_t  func_8(uint16_t  p_9, int32_t  p_10, int32_t  p_11, uint16_t  p_12, uint32_t  p_13)
{ 
    uint32_t l_197 = 0xAD3CA9B5L;
    uint64_t l_232 = 18446744073709551615UL;
    int32_t l_233 = 0xF021E7EEL;
    int32_t l_246 = 5L;
    const uint32_t l_247 = 0x565785B6L;
lbl_261:
    for (g_101 = 0; (g_101 <= 29); ++g_101)
    { 
        uint8_t l_194 = 0x3CL;
        for (g_84 = 0; (g_84 >= 21); g_84 = safe_add_func_int32_t_s_s(g_84, 1))
        { 
            const int16_t l_191 = (-1L);
            int32_t l_192 = 0xDA0BF809L;
            g_82 ^= (g_91 = (l_191 < 8UL));
            for (g_82 = 0; (g_82 <= 3); g_82 += 1)
            { 
                int16_t l_193 = 0x4FB2L;
                ++l_194;
            }
        }
    }
    l_197 |= 0x50EF736EL;
    if (((+0x91L) == (safe_sub_func_int32_t_s_s(p_13, l_197))))
    { 
        uint8_t l_221 = 0xF7L;
        int64_t l_222 = (-5L);
        int32_t l_223 = 0x6954D5C3L;
        p_10 |= (safe_mod_func_int64_t_s_s((~(l_223 = (l_222 ^= (+(safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((((((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((p_13 & 65535UL), (safe_sub_func_uint32_t_u_u(0xEEA4509CL, (safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(g_91, 18446744073709551613UL)), 2UL)))))), l_221)), l_221)) , 3UL) , 0xE4B3AAB2L) && 1UL) <= (-6L)), 2)), 1)))))), g_5));
        p_11 = ((safe_div_func_uint16_t_u_u(p_10, (safe_lshift_func_int16_t_s_s((((((--g_102) < (65526UL || (safe_add_func_int32_t_s_s(2L, p_9)))) , p_10) | 1UL) < g_2[4]), 15)))) | l_232);
    }
    else
    { 
        uint32_t l_245 = 0xF4C367A6L;
        int32_t l_266 = 0x00073F68L;
        if (g_97[4][1])
        { 
lbl_270:
            l_233 = (-1L);
        }
        else
        { 
            const int8_t l_241 = 0L;
            int8_t l_242[5][5][2] = {{{0xF1L,0L},{(-1L),0xF1L},{(-1L),(-1L)},{(-1L),0xF1L},{(-1L),0L}},{{0xF1L,0L},{(-1L),0xF1L},{(-1L),(-1L)},{(-1L),0xF1L},{(-1L),0L}},{{0xF1L,(-1L)},{(-1L),(-1L)},{0xF1L,0xF1L},{0xF1L,(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{0xF1L,0xF1L},{0xF1L,(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{0xF1L,0xF1L},{0xF1L,(-1L)},{(-1L),(-1L)}}};
            int i, j, k;
            l_242[0][3][1] = ((~g_82) > ((safe_unary_minus_func_uint16_t_u((g_236 = 0x7D8DL))) <= ((safe_lshift_func_uint8_t_u_u((g_5 ^ ((g_5 , p_13) < 0x176E7A2A0CF3850FLL)), l_241)) == p_9)));
        }
        if ((g_2[3] | (((253UL > (safe_rshift_func_int16_t_s_u((l_245 != (((l_246 = 0xD1L) | l_232) , l_247)), 13))) > p_12) & l_245)))
        { 
            p_10 = (0x14L < g_100);
        }
        else
        { 
            uint64_t l_259 = 0x4D0DC1B115D80643LL;
            int32_t l_260 = 3L;
            uint32_t l_264 = 2UL;
            if ((safe_lshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u((l_260 &= (l_233 , (((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_s((0xBEL & 255UL), ((safe_div_func_int8_t_s_s((safe_div_func_uint64_t_u_u((l_246 |= (g_50 > l_259)), 0xB0E3E12D5311EAF5LL)), p_9)) != 0x4A5ECF163A15DAAALL))))) < l_233) >= l_247))), p_10)) , 0x4CL), 0)))
            { 
                int8_t l_265 = 0x1EL;
                if (l_197)
                    goto lbl_261;
                p_11 = (g_91 = ((((l_246 = p_11) ^ l_260) || (((((p_11 , (safe_mul_func_int8_t_s_s((((g_236 &= l_264) <= 0x96D12CF0L) ^ g_102), l_245))) ^ l_197) , l_232) > 0xEF87L) == g_37)) | p_11));
                g_267++;
            }
            else
            { 
                if (p_11)
                    goto lbl_270;
                return g_97[2][2];
            }
            g_50 = (safe_rshift_func_uint8_t_u_s((l_266 &= (l_259 && (l_264 <= (safe_div_func_int64_t_s_s((((((p_9 >= (l_246 = ((l_260 ^= (l_232 || g_97[4][1])) , g_91))) & 247UL) == g_85) == l_264) || 253UL), 0xCFBA1E86DC7E6EE9LL))))), p_12));
        }
    }
    return l_233;
}



static int8_t  func_16(uint8_t  p_17, uint32_t  p_18, int16_t  p_19, int32_t  p_20)
{ 
    uint64_t l_78 = 18446744073709551615UL;
    int32_t l_81 = 0x8D7FF0BAL;
    int32_t l_83 = 0L;
    uint16_t l_86[1];
    int32_t l_151[3][4] = {{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_86[i] = 65531UL;
    g_85 |= ((safe_add_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(1L, (safe_div_func_uint16_t_u_u(((g_84 = (l_83 ^= ((0x80C5262C0850227CLL < 0xA00669673C8243C0LL) ^ (safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((g_82 = ((((!(((l_81 = (--l_78)) && (((g_2[1] , p_20) ^ p_20) >= p_18)) & p_20)) || g_50) , 0xC8A73D9AL) , l_81)), 1L)) , l_81), g_37))))) , g_50), g_2[1])))) , 0x6129DC0630FC3BC3LL) > p_19), 1UL)) ^ 0x775BA80BL);
    for (p_19 = 0; (p_19 <= 0); p_19 += 1)
    { 
        int32_t l_92 = (-8L);
        int32_t l_136[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_136[i][j] = (-1L);
        }
        l_92 = (l_86[p_19] , ((((p_18 >= p_19) & ((safe_lshift_func_int16_t_s_u(((g_91 = ((safe_add_func_uint32_t_u_u(g_2[1], l_83)) > l_78)) ^ 18446744073709551615UL), 10)) & l_86[p_19])) , p_20) , g_84));
        for (g_82 = 13; (g_82 > (-26)); --g_82)
        { 
            int64_t l_134 = 0x32788347750682C5LL;
            const int64_t l_135 = (-1L);
            for (l_81 = (-9); (l_81 != (-15)); l_81 = safe_sub_func_uint8_t_u_u(l_81, 2))
            { 
                g_97[4][1]++;
                return p_18;
            }
            for (l_81 = 3; (l_81 >= 0); l_81 -= 1)
            { 
                int32_t l_109[5][4] = {{(-1L),1L,(-1L),(-1L)},{1L,1L,0x5717136CL,1L},{1L,(-1L),(-1L),1L},{(-1L),1L,(-1L),(-1L)},{1L,1L,0x5717136CL,1L}};
                int i, j;
                ++g_102;
                p_20 = ((((g_97[(p_19 + 1)][p_19] = ((safe_lshift_func_uint8_t_u_u(0x12L, 2)) >= (safe_lshift_func_int16_t_s_u((((g_97[l_81][l_81] , (((g_82 <= ((g_110--) < ((safe_mod_func_int32_t_s_s((((g_2[1] <= g_91) , g_97[3][2]) , 0x59640E15L), g_37)) & 0x35B57BD3F66FFE49LL))) != p_17) && 0x4C362A02F9331570LL)) == 3UL) ^ 0x61FAL), 14)))) != g_50) >= (-7L)) , l_78);
            }
            for (g_37 = 0; (g_37 < 14); g_37 = safe_add_func_uint32_t_u_u(g_37, 8))
            { 
                int32_t l_124 = 1L;
                int16_t l_133 = (-5L);
                p_20 ^= 0x58FEE062L;
                p_20 = (safe_add_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s((safe_sub_func_uint64_t_u_u((l_124 = ((l_92 |= 0UL) || (1L > ((-7L) != ((safe_add_func_int16_t_s_s((((((g_102 ^ g_85) == 18446744073709551615UL) < 0x31L) && g_97[4][1]) , 0x1ADDL), 0x6348L)) ^ 0xF41299D8L))))), l_86[p_19])))) ^ 0xF0L), g_101));
                l_81 &= (l_92 >= (safe_div_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((l_124 |= (l_83 == (0xB4L != (safe_mul_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u((((l_133 &= (((g_97[4][1] ^ g_91) , g_2[1]) , 7UL)) , g_97[4][1]) , 0x40L), p_20)) != 0x1EL) == 0x0FF7F8D1F2F80B5ALL) & 0x4697L), l_134))))), g_84)) < l_135) && 0x376357ED5DE960ECLL), p_17)));
            }
        }
        if ((((0L && (l_92 = p_17)) ^ ((g_50 = l_86[p_19]) & (l_81 = l_136[1][0]))) != p_20))
        { 
            uint32_t l_158 = 0x5DFAD9A4L;
            int32_t l_178[3][1][4] = {{{0x3DB33060L,0x3DB33060L,0x3DB33060L,0x3DB33060L}},{{0x3DB33060L,0x3DB33060L,0x3DB33060L,0x3DB33060L}},{{0x3DB33060L,0x3DB33060L,0x3DB33060L,0x3DB33060L}}};
            int i, j, k;
            for (g_101 = 0; (g_101 > 22); g_101 = safe_add_func_int16_t_s_s(g_101, 5))
            { 
                return g_91;
            }
            if ((((g_97[0][0] = (p_17 = (safe_add_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((l_151[1][3] || (p_19 , ((0xF77E60D2C52FFF79LL >= ((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(g_97[3][1], g_85)) == l_86[p_19]), 0x7A8449D7L)) == l_158), 2)) != g_97[4][1])) || p_20))), 0L)), 7)), l_81)), 0xE4L)), 65535UL)) , g_50) && p_19), p_18)))) && g_91) , p_18))
            { 
                return g_37;
            }
            else
            { 
                const int32_t l_183 = 0x0E871084L;
                int16_t l_184 = 0xA973L;
                p_20 = (safe_lshift_func_int16_t_s_u((l_136[1][0] = (((+(safe_add_func_uint16_t_u_u(p_18, (safe_div_func_uint16_t_u_u(((g_91 < (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u((((((((safe_add_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u((l_178[1][0][2] &= p_18), 5)) , ((l_92 = (safe_rshift_func_int8_t_s_s((((((safe_lshift_func_int8_t_s_s(((0x0D91L != 4L) != g_84), l_183)) == 6UL) ^ g_91) != l_178[0][0][1]) < 1L), l_184))) >= p_17)) > p_20) | l_183), 0xBDCAL)) & l_136[0][0]) , p_20) >= l_136[0][0]) == 1UL) | 4294967295UL) >= p_18), l_136[0][0])) != (-10L)) > 0L) <= 65534UL), 3)), p_19)), g_37))) < 1UL), 8L))))) | g_97[4][1]) < 4294967295UL)), 4));
                return g_101;
            }
        }
        else
        { 
            if (p_18)
                break;
        }
    }
    return l_83;
}



static uint16_t  func_23(uint16_t  p_24, uint32_t  p_25, const int32_t  p_26)
{ 
    int32_t l_35 = 0L;
    int32_t l_36[1];
    int64_t l_56[2];
    int64_t l_59 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_36[i] = 7L;
    for (i = 0; i < 2; i++)
        l_56[i] = 0x5ABFEDE048FFD526LL;
    g_37++;
    l_36[0] ^= ((safe_add_func_int32_t_s_s((g_37 & (safe_mul_func_uint8_t_u_u(251UL, (p_24 | (safe_mod_func_uint32_t_u_u(p_25, p_26)))))), 0xC7A2E428L)) , l_35);
    for (l_35 = (-14); (l_35 <= (-1)); l_35 = safe_add_func_uint8_t_u_u(l_35, 1))
    { 
        int32_t l_60[2];
        int32_t l_63 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_60[i] = 0x6813F8C5L;
        if (((65535UL & (((((1L <= ((((safe_mod_func_uint32_t_u_u(0xED863780L, (g_50 &= g_37))) , l_36[0]) < g_37) & l_36[0])) >= 0UL) == p_26) & 4UL) && g_2[4])) ^ p_24))
        { 
            int64_t l_61 = (-1L);
            int32_t l_62[5] = {0x38F5E691L,0x38F5E691L,0x38F5E691L,0x38F5E691L,0x38F5E691L};
            int i;
            for (p_24 = 0; p_24 < 1; p_24 += 1)
            {
                l_36[p_24] = (-4L);
            }
            l_62[0] = ((safe_mod_func_uint16_t_u_u((l_36[0] = (~(safe_mul_func_int16_t_s_s((l_56[1] , l_36[0]), ((safe_rshift_func_uint8_t_u_u(((l_60[0] = (p_24 = l_59)) , l_61), 1)) , p_26))))), 0x783EL)) & g_5);
            if (l_60[0])
                continue;
        }
        else
        { 
            int16_t l_66 = (-1L);
            for (g_50 = 0; (g_50 >= 0); g_50 -= 1)
            { 
                int i;
                return l_36[g_50];
            }
            l_63 = 0xC3345720L;
            for (p_24 = 0; (p_24 <= 0); p_24 += 1)
            { 
                int i;
                g_50 = (l_66 = (safe_div_func_int16_t_s_s(l_56[(p_24 + 1)], 8L)));
            }
        }
    }
    return g_37;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_97[i][j], "g_97[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
