// SPDX-License-Identifier: MIT
// cctest_csmith_3442bf29.c --- cctest case csmith_3442bf29 (csmith seed 876789545)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7035c4c1 */
/* @exp_ticks 0x3b2f */

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

// Options:   -s 876789545 -o /tmp/csmith_gen_0_on0zxc/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint16_t  f0;
   uint16_t  f1;
   uint8_t  f2;
   int8_t  f3;
   uint64_t  f4;
   int32_t  f5;
};

union U1 {
   int32_t  f0;
   struct S0  f1;
   uint32_t  f2;
};


static int32_t g_5 = (-2L);
static int32_t g_8 = (-6L);
static int8_t g_44 = 0x29L;
static int16_t g_45 = 4L;
static int64_t g_46 = 0L;
static int16_t g_51 = 0L;
static uint32_t g_52 = 0xAF53C8CBL;
static union U1 g_67[2] = {{-5L},{-5L}};
static uint8_t g_101[5] = {0x34L,0x34L,0x34L,0x34L,0x34L};
static int64_t g_112 = 0xF5F5C31AFCD19E8FLL;
static int16_t g_116[2][5] = {{0L,0L,0L,0L,0L},{5L,5L,5L,5L,5L}};
static int32_t g_120[5][4] = {{1L,0x822056F0L,0x822056F0L,1L},{0xDE86D361L,7L,0x822056F0L,0xB37CA69BL},{1L,0xFEEC887CL,0xCB379706L,0xFEEC887CL},{0xFEEC887CL,0x822056F0L,0xDE86D361L,0xFEEC887CL},{0xDE86D361L,0xFEEC887CL,0xB37CA69BL,0xB37CA69BL}};
static uint8_t g_149 = 4UL;



static int16_t  func_1(void);
static int16_t  func_16(uint16_t  p_17, uint32_t  p_18);
static const uint32_t  func_35(uint32_t  p_36);
static const int32_t  func_63(union U1  p_64, uint64_t  p_65, struct S0  p_66);




static int16_t  func_1(void)
{ 
    const int32_t l_2 = 0xA00F47A6L;
    uint32_t l_4[2];
    int32_t l_169 = 1L;
    int i;
    for (i = 0; i < 2; i++)
        l_4[i] = 6UL;
    if ((l_2 == (0x328F6C74L | 0L)))
    { 
        int32_t l_3 = 0L;
        l_3 = 0x7D0FA516L;
        return l_4[0];
    }
    else
    { 
        int32_t l_19 = 6L;
        for (g_5 = 0; (g_5 == (-27)); --g_5)
        { 
            int16_t l_11 = 1L;
            for (g_8 = 0; (g_8 != (-16)); g_8 = safe_sub_func_int32_t_s_s(g_8, 8))
            { 
                if (l_11)
                    break;
                return g_5;
            }
            l_169 = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(func_16(l_19, l_19), l_11)), l_4[0])) > 0xA2B8C224E53AA939LL);
        }
    }
    return g_46;
}



static int16_t  func_16(uint16_t  p_17, uint32_t  p_18)
{ 
    uint32_t l_20 = 2UL;
    int32_t l_23 = 0xDDB84C6AL;
    int32_t l_40 = 0x7C5C6A81L;
    int32_t l_155 = (-1L);
    int32_t l_156 = 0xCE78BFBDL;
    int32_t l_157 = 0xDCADDF3CL;
    int32_t l_158 = 0x13958EBFL;
    int32_t l_159 = 1L;
    int32_t l_160 = 0x12B70BD8L;
    int32_t l_161 = 1L;
    int32_t l_162 = 1L;
    int32_t l_163 = (-2L);
    int32_t l_164[3];
    int16_t l_165[1];
    uint32_t l_166 = 0UL;
    int i;
    for (i = 0; i < 3; i++)
        l_164[i] = 0x452DFFA4L;
    for (i = 0; i < 1; i++)
        l_165[i] = 0x8784L;
lbl_154:
    l_20 = g_8;
    for (l_20 = (-6); (l_20 < 60); l_20 = safe_add_func_uint8_t_u_u(l_20, 6))
    { 
        uint32_t l_24 = 1UL;
        uint8_t l_41 = 1UL;
        int32_t l_127 = 0xE59D8630L;
        --l_24;
        if (((safe_rshift_func_int8_t_s_u((0xF8L > (safe_rshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_s(((l_23 = (safe_div_func_uint32_t_u_u(func_35((~(l_40 = (safe_add_func_uint64_t_u_u((l_40 | (g_8 = ((((l_41 , ((safe_div_func_uint8_t_u_u((p_18 && g_8), g_8)) ^ p_17)) || g_5) , l_24) & g_8))), g_5))))), l_23))) , 0x00L), g_44)) | 0x4BABL) && 1UL), 5))), l_20)) != 4294967295UL))
        { 
            return g_45;
        }
        else
        { 
            uint32_t l_128 = 0x18E49B9DL;
            for (g_52 = 0; (g_52 >= 53); g_52 = safe_add_func_uint64_t_u_u(g_52, 8))
            { 
                struct S0 l_68 = {1UL,1UL,255UL,-9L,0x34BB1B2B1506F573LL,0L};
                l_127 = (safe_div_func_uint8_t_u_u((g_51 | (0x01L >= (safe_add_func_int16_t_s_s((0UL != ((safe_div_func_int32_t_s_s(func_63(g_67[0], l_40, l_68), g_51)) , 0xD5L)), 0xBB0BL)))), l_23));
                l_128 ^= 3L;
            }
            for (g_52 = 0; (g_52 <= 1); g_52 += 1)
            { 
                int32_t l_137[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_137[i] = 0x88A0B6D6L;
                l_137[0] ^= (g_120[(g_52 + 1)][(g_52 + 2)] = (0L || (g_116[g_52][g_52] == ((safe_mod_func_int8_t_s_s(0xFAL, (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_52, 12)), p_17)), l_41)))) >= p_17))));
                g_120[(g_52 + 1)][(g_52 + 2)] = (l_137[0] < p_17);
            }
            g_120[3][1] = (l_127 &= (safe_add_func_uint8_t_u_u((p_17 , p_18), (0xC5F198F030F790E2LL ^ (safe_mul_func_uint16_t_u_u(l_23, (-1L)))))));
        }
        for (g_52 = 0; (g_52 <= 4); g_52 += 1)
        { 
            uint16_t l_152 = 0xEE36L;
            int i;
            if ((safe_rshift_func_int16_t_s_s((((!((g_67[0].f2--) != ((safe_mod_func_uint64_t_u_u(((g_101[g_52] <= (g_149 = g_51)) != g_45), (((p_18++) , (l_23 = (p_17 | p_18))) , 7UL))) , p_18))) & p_17) != 3L), l_152)))
            { 
                return p_18;
            }
            else
            { 
                uint32_t l_153 = 0xC2055579L;
                l_153 = l_127;
                if (l_153)
                    continue;
                if (l_24)
                    goto lbl_154;
            }
        }
    }
    --l_166;
    return l_162;
}



static const uint32_t  func_35(uint32_t  p_36)
{ 
    int8_t l_47 = 0x69L;
    int32_t l_48 = 1L;
    int32_t l_49 = 3L;
    int32_t l_50[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_50[i][j] = 6L;
    }
    ++g_52;
    return p_36;
}



static const int32_t  func_63(union U1  p_64, uint64_t  p_65, struct S0  p_66)
{ 
    uint8_t l_77 = 0x59L;
    int32_t l_91 = 0L;
    int32_t l_100 = 1L;
    for (p_66.f3 = (-6); (p_66.f3 > (-14)); p_66.f3 = safe_sub_func_int64_t_s_s(p_66.f3, 8))
    { 
        int32_t l_92 = 1L;
        int64_t l_114 = 0xCA1794A777CC8DDELL;
        int32_t l_118 = 0x5D9C67F7L;
        int32_t l_121 = 0x066B3233L;
        int32_t l_122 = 0xBCF54F23L;
        int32_t l_123 = 0x13B58279L;
        g_8 ^= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((((safe_div_func_uint64_t_u_u((((l_77 = g_67[0].f0) && ((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_s(p_66.f1, 5)) | g_46) && (((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_91 |= ((g_44 <= l_77) , 5L)), (-1L))), p_66.f4)), l_92)) < 0x56AA7D87L), 0x68L)) , p_66.f1) | 2L)), p_64.f0)))) , 0x90205405EA325A44LL)) || 0x8337L), 0x763FF6366113C509LL)) >= l_92) , l_92) == g_67[0].f2), 0x84L)), 0));
        g_8 = (((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((g_51 & p_64.f0) >= ((safe_mod_func_uint64_t_u_u((1L ^ ((l_100 &= (((l_91 != l_92) | p_66.f3) <= p_64.f2)) <= l_92)), 5UL)) < g_101[1])), l_92)), p_65)))) <= p_64.f2) | l_92);
        for (p_64.f1.f1 = 16; (p_64.f1.f1 == 60); p_64.f1.f1++)
        { 
            uint16_t l_113 = 65535UL;
            int32_t l_117[1];
            int i;
            for (i = 0; i < 1; i++)
                l_117[i] = 0x9C5DFBC4L;
            if ((safe_add_func_int64_t_s_s(((safe_div_func_int64_t_s_s((g_112 = (safe_mul_func_int16_t_s_s((((p_65 == (safe_add_func_int32_t_s_s(((g_67[1] , g_52) || (g_112 < g_112)), l_113))) && g_101[1]) && g_8), p_66.f3))), 0x366FF5FBB4CDDCCFLL)) < 4UL), l_114)))
            { 
                int8_t l_115 = 0xFDL;
                int32_t l_119 = 0xAFAA48CCL;
                uint8_t l_124 = 0UL;
                ++l_124;
            }
            else
            { 
                l_100 &= 0xEE6A4CB4L;
            }
        }
    }
    return g_46;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_67[i].f0, "g_67[i].f0", print_hash_value);
        transparent_crc(g_67[i].f2, "g_67[i].f2", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);

    }
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_116[i][j], "g_116[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_120[i][j], "g_120[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_149, "g_149", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
