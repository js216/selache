// SPDX-License-Identifier: MIT
// cctest_csmith_9be22b77.c --- cctest case csmith_9be22b77 (csmith seed 2615290743)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe5673ea1 */
/* @exp_ticks 0xf6df */

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

// Options:   -s 2615290743 -o /tmp/csmith_gen__p9o47ws/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
};

union U1 {
   int64_t  f0;
};

union U2 {
   int16_t  f0;
   int8_t * f1;
   uint16_t  f2;
   struct S0  f3;
   uint32_t  f4;
};

union U3 {
   int64_t  f0;
   uint32_t  f1;
   const struct S0  f2;
   int16_t  f3;
   uint16_t  f4;
};


static int8_t g_3 = 0x36L;
static union U2 g_10 = {0xDC99L};
static union U3 g_46[6] = {{0x6953C535718A84D2LL},{0x6953C535718A84D2LL},{0x6953C535718A84D2LL},{0x6953C535718A84D2LL},{0x6953C535718A84D2LL},{0x6953C535718A84D2LL}};
static union U3 *g_45 = &g_46[4];
static uint16_t g_51 = 4UL;
static union U3 g_61[5][7][7] = {{{{0xA905BEA6296EF6A0LL},{0x7998387B67A03D6ELL},{0xA9463023C0783B07LL},{0xA64A9B53ABF6A420LL},{0x4D5E33AB57C19DE8LL},{0xEA2DBBA470062155LL},{8L}},{{1L},{6L},{8L},{0x4770DDAD4DBF7CD6LL},{0x92BF7C62769A4A7BLL},{0x2D1299D621DD8CACLL},{0x6B2E546C5BE01121LL}},{{0x9D4C80454F8DAE6ELL},{1L},{0x3E233DF555A6F0EDLL},{-1L},{-1L},{1L},{0xBF2C4EE0C605F778LL}},{{0x92BF7C62769A4A7BLL},{0xA905BEA6296EF6A0LL},{0x5C8FE30C1ABDDA6ALL},{0xA13E652FC6110BDBLL},{2L},{0xA6627841B20306C0LL},{0x7998387B67A03D6ELL}},{{0xBF2C4EE0C605F778LL},{0x187147D86C3CE99CLL},{7L},{0xA0C7D0B67C402FB5LL},{7L},{0xA6627841B20306C0LL},{0xEA2DBBA470062155LL}},{{1L},{0xBF2C4EE0C605F778LL},{0xA64A9B53ABF6A420LL},{1L},{0x25F2AAF3324EF461LL},{6L},{1L}},{{0xA13E652FC6110BDBLL},{0xFFE2AA969AAE9A15LL},{0x4D5E33AB57C19DE8LL},{8L},{0x6402D6FA87DC7FB0LL},{8L},{0x4D5E33AB57C19DE8LL}}},{{{1L},{1L},{0x4770DDAD4DBF7CD6LL},{1L},{-1L},{0x65828949F0E3FDF4LL},{0x2A57D884BB8686B4LL}},{{-8L},{0x473CA56B74084DAELL},{0x6402D6FA87DC7FB0LL},{-3L},{0xEA2DBBA470062155LL},{-1L},{0x9D4C80454F8DAE6ELL}},{{-3L},{6L},{0xE05BF5EF7B6068BELL},{0xBF2C4EE0C605F778LL},{-1L},{0x5C8FE30C1ABDDA6ALL},{0x2259947D9BA74152LL}},{{0x65828949F0E3FDF4LL},{0xA64A9B53ABF6A420LL},{0xFFE2AA969AAE9A15LL},{0x9292B13749941B8ELL},{0x6402D6FA87DC7FB0LL},{0x25F2AAF3324EF461LL},{0x2D1299D621DD8CACLL}},{{0x25F2AAF3324EF461LL},{0x2ECD44262C44F031LL},{0x65828949F0E3FDF4LL},{0x10CD78DC7DAD0557LL},{0xA9463023C0783B07LL},{1L},{0x1916DC91E8449123LL}},{{4L},{2L},{0xA9463023C0783B07LL},{0xFFE2AA969AAE9A15LL},{-1L},{0x4679F7867F40E302LL},{0xA13E652FC6110BDBLL}},{{0x2D1299D621DD8CACLL},{0xE05BF5EF7B6068BELL},{0xEA2DBBA470062155LL},{0xFFE2AA969AAE9A15LL},{0x2ECD44262C44F031LL},{8L},{1L}}},{{{0x34A2D56AB65697B4LL},{0xFD32083B01F68849LL},{0xA905BEA6296EF6A0LL},{0x10CD78DC7DAD0557LL},{0x473CA56B74084DAELL},{7L},{8L}},{{0L},{0x187147D86C3CE99CLL},{0xA6627841B20306C0LL},{0x9292B13749941B8ELL},{0xA6627841B20306C0LL},{0x187147D86C3CE99CLL},{0L}},{{0xA64A9B53ABF6A420LL},{0x3E233DF555A6F0EDLL},{0x480D8AAF453288EELL},{0xBF2C4EE0C605F778LL},{1L},{0xA13E652FC6110BDBLL},{0x6B2E546C5BE01121LL}},{{-1L},{7L},{0xBF2C4EE0C605F778LL},{-3L},{0x65828949F0E3FDF4LL},{0L},{8L}},{{7L},{0xA6627841B20306C0LL},{0x480D8AAF453288EELL},{1L},{0x9292B13749941B8ELL},{0x10CD78DC7DAD0557LL},{1L}},{{7L},{1L},{0xA6627841B20306C0LL},{8L},{0x62ED8E9B07D9F9AELL},{0x6402D6FA87DC7FB0LL},{0x92BF7C62769A4A7BLL}},{{0x4D5E33AB57C19DE8LL},{0x9292B13749941B8ELL},{0xA905BEA6296EF6A0LL},{-1L},{0x0122BF4B2487F0BBLL},{0x473CA56B74084DAELL},{0xA9463023C0783B07LL}}},{{{0xFFE2AA969AAE9A15LL},{8L},{0xEA2DBBA470062155LL},{0x4D5E33AB57C19DE8LL},{0xA64A9B53ABF6A420LL},{0xA9463023C0783B07LL},{0x7998387B67A03D6ELL}},{{0xA0C7D0B67C402FB5LL},{8L},{0xA9463023C0783B07LL},{-1L},{7L},{0xBF2C4EE0C605F778LL},{0x473CA56B74084DAELL}},{{0x1916DC91E8449123LL},{0x9292B13749941B8ELL},{0x65828949F0E3FDF4LL},{4L},{0xA13E652FC6110BDBLL},{0x0122BF4B2487F0BBLL},{0x0122BF4B2487F0BBLL}},{{-2L},{1L},{0xFFE2AA969AAE9A15LL},{1L},{-2L},{-1L},{6L}},{{0xA9463023C0783B07LL},{0xA6627841B20306C0LL},{0xE05BF5EF7B6068BELL},{0x3E233DF555A6F0EDLL},{0xBF2C4EE0C605F778LL},{1L},{0xEA2DBBA470062155LL}},{{1L},{7L},{0x6402D6FA87DC7FB0LL},{0xFD32083B01F68849LL},{0x4679F7867F40E302LL},{1L},{-3L}},{{0xA9463023C0783B07LL},{0x3E233DF555A6F0EDLL},{0x4770DDAD4DBF7CD6LL},{0x62ED8E9B07D9F9AELL},{0xEFB40ACB48866363LL},{7L},{0xA64A9B53ABF6A420LL}}},{{{-2L},{0x187147D86C3CE99CLL},{0x4D5E33AB57C19DE8LL},{0x92BF7C62769A4A7BLL},{0x2259947D9BA74152LL},{0x2A57D884BB8686B4LL},{1L}},{{0x1916DC91E8449123LL},{0xFD32083B01F68849LL},{0x3E233DF555A6F0EDLL},{0xEA2DBBA470062155LL},{8L},{0xE05BF5EF7B6068BELL},{1L}},{{0xA0C7D0B67C402FB5LL},{0xE05BF5EF7B6068BELL},{1L},{0x2259947D9BA74152LL},{7L},{0x9292B13749941B8ELL},{1L}},{{0xFFE2AA969AAE9A15LL},{2L},{0xE2CA52C43DA4AA2ELL},{0xA9463023C0783B07LL},{1L},{0xFD32083B01F68849LL},{1L}},{{0x4D5E33AB57C19DE8LL},{0x2ECD44262C44F031LL},{1L},{0xA64A9B53ABF6A420LL},{-8L},{-8L},{0xA64A9B53ABF6A420LL}},{{-1L},{0x3E233DF555A6F0EDLL},{-1L},{0x480D8AAF453288EELL},{0x10CD78DC7DAD0557LL},{0x4D5E33AB57C19DE8LL},{-2L}},{{1L},{0x34A2D56AB65697B4LL},{0xA6627841B20306C0LL},{-8L},{0x2ECD44262C44F031LL},{1L},{0x65828949F0E3FDF4LL}}}};
static union U3 *g_60[3] = {&g_61[3][0][6],&g_61[3][0][6],&g_61[3][0][6]};
static uint8_t g_71 = 0xB4L;
static int8_t g_72[7] = {0x36L,0x49L,0x49L,0x36L,0x49L,0x49L,0x36L};
static int16_t g_101 = 0x7059L;
static int8_t g_102 = 0xCCL;
static const union U1 g_104 = {0xE0A4D05B2AB3A25ELL};
static const union U1 *g_103 = &g_104;
static uint32_t g_123 = 4294967295UL;
static uint32_t g_124 = 0x6E85A4DAL;
static struct S0 g_126[4][3][5] = {{{{248UL},{0UL},{0xF4L},{0x57L},{255UL}},{{255UL},{6UL},{0x22L},{6UL},{255UL}},{{0UL},{9UL},{246UL},{0x57L},{0xB7L}}},{{{5UL},{0x6BL},{0x83L},{0x83L},{0x6BL}},{{0UL},{0xF4L},{248UL},{9UL},{0xB7L}},{{6UL},{0x83L},{255UL},{0xFCL},{255UL}}},{{{0xB7L},{0xB7L},{0UL},{0UL},{255UL}},{{6UL},{0xE4L},{5UL},{0x22L},{0x22L}},{{0UL},{5UL},{0UL},{255UL},{0x57L}}},{{{5UL},{0xE4L},{6UL},{0x6BL},{1UL}},{{0UL},{0xB7L},{0xB7L},{0UL},{0UL}},{{255UL},{0x83L},{6UL},{1UL},{0xE4L}}}};
static struct S0 *g_130 = &g_126[3][1][3];
static int8_t g_139[4][4][3] = {{{0x6CL,(-1L),0xFCL},{(-1L),0xFCL,(-1L)},{0x0CL,0x53L,0xE4L},{0xFCL,0xFCL,0x53L}},{{0xBAL,(-1L),0x2FL},{0xBAL,5L,0x0CL},{0xFCL,(-1L),(-1L)},{0x0CL,0xBAL,0x0CL}},{{(-1L),0L,0x2FL},{0x6CL,0L,0x53L},{(-1L),0xBAL,0xE4L},{1L,(-1L),(-1L)}},{{(-1L),5L,0xFCL},{0x6CL,(-1L),0xFCL},{(-1L),0xFCL,(-1L)},{0x0CL,0x53L,0xE4L}}};
static uint8_t g_141 = 0x19L;
static int32_t g_145 = 0x980C733FL;
static union U1 g_158 = {1L};
static union U1 *g_157 = &g_158;
static union U1 ** const g_156 = &g_157;
static union U1 ** const * const g_155 = &g_156;
static int8_t g_175 = 0x53L;
static int32_t g_199[2] = {0x4DEDF0D3L,0x4DEDF0D3L};
static int32_t *g_198 = &g_199[1];
static uint64_t g_209[5] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
static int32_t **g_243[6][7][1] = {{{&g_198},{&g_198},{&g_198},{(void*)0},{&g_198},{&g_198},{&g_198}},{{(void*)0},{&g_198},{&g_198},{&g_198},{&g_198},{(void*)0},{&g_198}},{{&g_198},{&g_198},{(void*)0},{&g_198},{&g_198},{&g_198},{&g_198}},{{(void*)0},{&g_198},{&g_198},{&g_198},{(void*)0},{&g_198},{&g_198}},{{&g_198},{&g_198},{(void*)0},{&g_198},{&g_198},{&g_198},{(void*)0}},{{&g_198},{&g_198},{&g_198},{&g_198},{(void*)0},{&g_198},{&g_198}}};
static int32_t ***g_242 = &g_243[3][4][0];
static int32_t ***g_245 = &g_243[3][4][0];
static uint16_t *g_258[2] = {&g_51,&g_51};
static union U2 *g_270 = &g_10;
static union U2 **g_269[4][2][7] = {{{&g_270,&g_270,&g_270,&g_270,&g_270,&g_270,&g_270},{(void*)0,(void*)0,&g_270,&g_270,&g_270,&g_270,&g_270}},{{&g_270,&g_270,&g_270,&g_270,&g_270,&g_270,&g_270},{&g_270,&g_270,&g_270,(void*)0,&g_270,&g_270,&g_270}},{{(void*)0,(void*)0,&g_270,&g_270,(void*)0,(void*)0,(void*)0},{(void*)0,&g_270,&g_270,&g_270,(void*)0,(void*)0,(void*)0}},{{&g_270,&g_270,&g_270,&g_270,(void*)0,&g_270,(void*)0},{(void*)0,&g_270,&g_270,&g_270,(void*)0,&g_270,&g_270}}};
static int32_t **g_288 = &g_198;
static const uint32_t g_327 = 0x1284C5BBL;
static union U1 ***g_387 = (void*)0;
static uint32_t g_415 = 0x6EAC0C16L;
static uint32_t g_459 = 0x3C9A92FAL;
static uint32_t g_552 = 0UL;
static uint8_t g_594 = 248UL;
static union U1 ****g_603 = &g_387;
static union U1 *****g_602 = &g_603;
static union U2 ***g_700[3] = {&g_269[2][1][2],&g_269[2][1][2],&g_269[2][1][2]};
static union U2 **** const g_699 = &g_700[0];
static uint64_t g_808 = 18446744073709551615UL;
static uint32_t g_878 = 0x807EE264L;
static int32_t g_881[6] = {0L,0L,0L,0L,0L,0L};
static int32_t g_886 = 1L;
static int8_t g_895 = 1L;
static int8_t *g_894 = &g_895;
static const int32_t g_914[2] = {0xA0C1F539L,0xA0C1F539L};
static const int32_t *g_915[2][7][2] = {{{&g_914[0],&g_914[0]},{&g_914[0],&g_914[0]},{&g_914[0],&g_914[0]},{(void*)0,(void*)0},{(void*)0,&g_914[0]},{&g_914[0],&g_914[0]},{(void*)0,(void*)0}},{{(void*)0,&g_914[0]},{&g_914[0],&g_914[0]},{&g_914[0],&g_914[0]},{&g_914[0],&g_914[0]},{&g_914[1],&g_914[1]},{&g_914[1],&g_914[0]},{&g_914[0],&g_914[0]}}};
static const int64_t *g_957 = &g_158.f0;
static uint8_t g_1001 = 0x0AL;
static uint8_t * const g_1000 = &g_1001;
static uint8_t * const *g_999 = &g_1000;
static struct S0 g_1005[2][6] = {{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}};
static int32_t g_1073 = 0x04557C00L;
static uint64_t g_1165 = 1UL;
static int64_t g_1235 = 0x5DCF6BE26F2C1546LL;
static uint32_t g_1250[2] = {1UL,1UL};
static uint32_t g_1617[3] = {0x3322E0ADL,0x3322E0ADL,0x3322E0ADL};
static struct S0 * const **g_1643 = (void*)0;
static uint8_t *g_1697 = &g_141;
static uint8_t **g_1696 = &g_1697;
static int16_t g_1775 = 0x0538L;
static int64_t g_1788 = 1L;
static union U3 **g_1793 = &g_60[1];
static union U2 ****g_1796 = &g_700[2];
static uint64_t g_1843[3] = {0x926DE07EA2B23118LL,0x926DE07EA2B23118LL,0x926DE07EA2B23118LL};
static uint16_t g_1851 = 65533UL;
static const struct S0 *g_1879 = &g_126[0][0][0];
static const struct S0 **g_1878[3] = {&g_1879,&g_1879,&g_1879};
static const struct S0 ***g_1877[3] = {&g_1878[0],&g_1878[0],&g_1878[0]};
static const struct S0 ****g_1876[2] = {&g_1877[0],&g_1877[0]};
static const struct S0 *****g_1875 = &g_1876[1];
static int32_t g_1896 = 0x8112716BL;
static int32_t g_1927 = (-1L);
static uint8_t g_1943 = 0x60L;
static int32_t *g_1978[4][1][2] = {{{(void*)0,&g_1896}},{{(void*)0,&g_1896}},{{(void*)0,&g_1896}},{{(void*)0,&g_1896}}};
static const int8_t g_2026 = 0x86L;
static int8_t **g_2119 = &g_894;
static int8_t ***g_2118 = &g_2119;
static uint32_t g_2133 = 0x1304BB88L;



static const int64_t  func_1(void);
static int8_t * func_5(union U2  p_6, union U1  p_7, int32_t  p_8, uint64_t  p_9);
static union U1  func_11(int8_t * p_12, int8_t * const  p_13, int8_t * p_14, int32_t  p_15, int8_t * p_16);
static int16_t  func_24(union U1  p_25, int32_t  p_26);
static union U1  func_27(int8_t * p_28, int8_t * p_29);
static int8_t  func_32(int32_t  p_33, int8_t * p_34, uint32_t  p_35, int8_t * p_36);
static int8_t * func_37(int64_t  p_38);
static int64_t  func_42(int32_t  p_43);




static const int64_t  func_1(void)
{ 
    int64_t l_2 = (-7L);
    struct S0 l_4[5][6][5] = {{{{0x45L},{0x8BL},{255UL},{9UL},{0x8BL}},{{5UL},{255UL},{7UL},{0x44L},{0xB4L}},{{0x1AL},{9UL},{0xE3L},{255UL},{0x96L}},{{0xB4L},{0xCEL},{255UL},{5UL},{0xDAL}},{{255UL},{0x92L},{0xADL},{5UL},{5UL}},{{4UL},{255UL},{4UL},{255UL},{0UL}}},{{{0x45L},{0xDAL},{0x1AL},{0x44L},{246UL}},{{9UL},{0xB4L},{0x37L},{9UL},{5UL}},{{0xE3L},{9UL},{0x1AL},{246UL},{0x92L}},{{0x96L},{0x1AL},{4UL},{255UL},{0xE3L}},{{9UL},{0x44L},{0xADL},{0UL},{0xB4L}},{{0x5BL},{0x44L},{255UL},{255UL},{0x44L}}},{{{5UL},{0x1AL},{0xE3L},{0x44L},{0xCEL}},{{255UL},{9UL},{0x45L},{0x1AL},{0x5BL}},{{0xB0L},{255UL},{0x37L},{255UL},{0xE3L}},{{251UL},{7UL},{0x00L},{0x8BL},{255UL}},{{0x8BL},{246UL},{0x44L},{0x1AL},{0xDAL}},{{0x00L},{0xE3L},{0x0EL},{0xB0L},{0xDAL}}},{{{0xCEL},{0xB0L},{0xB0L},{0xCEL},{255UL}},{{0x5BL},{0xCEL},{255UL},{0xDAL},{0xE3L}},{{0xADL},{251UL},{255UL},{0x0EL},{0x5BL}},{{0xCEL},{0xB0L},{0x00L},{0xDAL},{0xB0L}},{{4UL},{255UL},{0xB4L},{0xCEL},{255UL}},{{255UL},{251UL},{0xADL},{0xB0L},{255UL}}},{{{251UL},{0x37L},{0xADL},{0x1AL},{0xADL}},{{255UL},{255UL},{0xB4L},{0x8BL},{0xE3L}},{{0x0EL},{0xE3L},{0x00L},{255UL},{0x8BL}},{{0x8BL},{255UL},{255UL},{0x1AL},{0x6EL}},{{4UL},{0xE3L},{255UL},{255UL},{0xDAL}},{{0x37L},{255UL},{0xB0L},{0x37L},{0x8BL}}}};
    int32_t l_21 = 4L;
    int8_t * const l_893 = (void*)0;
    int32_t l_1903 = 1L;
    int32_t l_1905 = (-1L);
    int32_t l_1906 = 0xE1FA66DEL;
    int64_t l_1907 = (-1L);
    int32_t l_1908 = 0x63A74973L;
    uint64_t l_1909[2];
    int64_t l_1932 = (-10L);
    int32_t l_1942[7] = {0x0233B821L,0x0233B821L,0x0233B821L,0x0233B821L,0x0233B821L,0x0233B821L,0x0233B821L};
    uint64_t l_1968 = 18446744073709551615UL;
    union U2 ****l_1994 = &g_700[0];
    const uint64_t l_2023 = 0x045B4E2EBAAA4A4DLL;
    int32_t l_2024[1];
    int16_t l_2037 = 0L;
    int16_t l_2064 = 1L;
    uint8_t l_2066 = 5UL;
    struct S0 **l_2108 = &g_130;
    int8_t ***l_2120 = (void*)0;
    uint16_t l_2121 = 0x3F23L;
    uint16_t l_2132 = 0xAF3EL;
    int16_t l_2161 = 0xC22FL;
    int32_t *l_2170 = (void*)0;
    const uint64_t *l_2172 = (void*)0;
    const uint64_t **l_2171 = &l_2172;
    uint64_t *l_2174 = &g_808;
    uint64_t **l_2173 = &l_2174;
    int32_t *l_2177 = &l_1905;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1909[i] = 0x2EA549BF0D768FC8LL;
    for (i = 0; i < 1; i++)
        l_2024[i] = 0xBBE59492L;
    if (l_2)
    { 
        uint64_t l_1511 = 0xC23A0ACCF054BB82LL;
        int32_t *l_1897 = &g_199[0];
        int32_t l_1901 = 0xCF6CA8C1L;
        int32_t l_1902 = 1L;
        int32_t l_1904[5] = {0xC4084A86L,0xC4084A86L,0xC4084A86L,0xC4084A86L,0xC4084A86L};
        struct S0 l_1918 = {251UL};
        const int32_t * const l_1946[1][2] = {{&l_21,&l_21}};
        union U2 l_1950 = {-1L};
        union U2 ***l_1959 = &g_269[0][1][4];
        uint64_t l_1965 = 0xB294AAE283054747LL;
        uint8_t **l_1997 = &g_1697;
        struct S0 l_2062 = {246UL};
        struct S0 *l_2063 = &g_126[3][0][3];
        int32_t *l_2065[4][7][1] = {{{&l_1901},{&l_1942[1]},{&l_1942[5]},{&l_1942[1]},{&l_1901},{&l_1908},{&l_1901}},{{&l_1942[1]},{&l_1942[5]},{&l_1942[1]},{&l_1901},{&l_1908},{&l_1901},{&l_1942[1]}},{{&l_1942[5]},{&l_1942[1]},{&l_1901},{&l_1908},{&l_1901},{&l_1942[1]},{&l_1942[5]}},{{&l_1942[1]},{&l_1901},{&l_1908},{&l_1901},{&l_1942[1]},{&l_1942[5]},{&l_1942[1]}}};
        int i, j, k;
    }
    else
    { 
        int8_t **l_2072 = (void*)0;
        int8_t ***l_2071 = &l_2072;
        int32_t l_2078[3][7] = {{0xC546F7D7L,0xC546F7D7L,0xC546F7D7L,0xC546F7D7L,0xC546F7D7L,0xC546F7D7L,0xC546F7D7L},{0x4E3E891DL,0x4E3E891DL,0x4E3E891DL,0x4E3E891DL,0x4E3E891DL,0x4E3E891DL,0x4E3E891DL},{0xC546F7D7L,0xC546F7D7L,0xC546F7D7L,0xC546F7D7L,0xC546F7D7L,0xC546F7D7L,0xC546F7D7L}};
        const struct S0 *l_2082 = &g_1005[0][4];
        int32_t l_2137[5][3] = {{1L,0xC44DC2D7L,0xC44DC2D7L},{(-6L),0xD0693659L,0xD0693659L},{1L,0xC44DC2D7L,0xC44DC2D7L},{(-6L),0xD0693659L,0xD0693659L},{1L,0xC44DC2D7L,0xC44DC2D7L}};
        union U1 **l_2148 = &g_157;
        union U1 ***l_2147 = &l_2148;
        uint8_t l_2165 = 0xBAL;
        int i, j;
        for (l_2037 = (-13); (l_2037 == (-17)); l_2037 = safe_sub_func_int32_t_s_s(l_2037, 6))
        { 
            int8_t ****l_2073 = &l_2071;
            uint16_t *l_2076 = (void*)0;
            struct S0 l_2096 = {0x5BL};
            int32_t ***l_2114 = &g_243[3][6][0];
            int32_t *l_2122 = &l_1903;
            uint64_t l_2139 = 18446744073709551612UL;
            union U1 *l_2169 = &g_158;
            (*l_2073) = l_2071;
            for (g_145 = 0; (g_145 <= 2); g_145 += 1)
            { 
                const struct S0 l_2077 = {1UL};
                uint64_t *l_2085 = &l_1968;
                int32_t *l_2086 = &l_21;
                union U3 l_2095[2][3][2] = {{{{0xAD69373A149AF7B9LL},{0xAD69373A149AF7B9LL}},{{0xAD69373A149AF7B9LL},{0x46D68EEC244213C8LL}},{{-1L},{-9L}}},{{{0x46D68EEC244213C8LL},{-9L}},{{-1L},{0x46D68EEC244213C8LL}},{{0xAD69373A149AF7B9LL},{0xAD69373A149AF7B9LL}}}};
                int16_t *l_2103 = (void*)0;
                int64_t *l_2104 = &l_1907;
                uint32_t *l_2105 = (void*)0;
                uint32_t *l_2106 = &g_459;
                int32_t l_2107 = 0xFD5C4B7CL;
                int i, j, k;
                for (l_2066 = 0; (l_2066 <= 2); l_2066 += 1)
                { 
                    int i;
                    l_2078[1][5] = ((safe_rshift_func_uint16_t_u_s((l_1942[0] = (l_2076 != (l_2077 , l_2076))), 6)) != g_1843[g_145]);
                }
                (*l_2086) |= (safe_add_func_uint16_t_u_u((!((void*)0 == l_2082)), (safe_div_func_uint64_t_u_u(((*l_2085) = (g_1843[g_145] >= g_199[1])), 0x0A0AD39CDDA9F1D8LL))));
                l_2107 |= ((safe_div_func_uint32_t_u_u(4294967287UL, ((*g_198) = (safe_sub_func_int64_t_s_s(((0x418BA7F4L && (((safe_div_func_uint32_t_u_u(((*l_2106) |= (safe_mod_func_int32_t_s_s(0x8D456E1CL, (l_2095[1][2][1] , ((l_2096 , ((*l_2104) = (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((0x01L == ((void*)0 == l_2103)), 0xC2L)), (*g_894))) <= 0x6D132EF348C05BBBLL) > l_2024[0]))) && (*g_957)))))), l_2078[1][2])) ^ 0x1F9BE48C14925E01LL) != (*g_198))) <= (*l_2086)), l_2096.f0))))) && 0x7D9CL);
            }
            if (((**g_288) = (l_2108 == l_2108)))
            { 
                int32_t ****l_2109 = (void*)0;
                int32_t ****l_2110 = (void*)0;
                int32_t ****l_2111 = (void*)0;
                int32_t ****l_2112 = (void*)0;
                int32_t ****l_2113[3][7] = {{&g_242,&g_245,&g_245,&g_242,&g_245,&g_245,&g_242},{&g_245,&g_242,&g_245,&g_245,&g_242,&g_245,&g_245},{&g_242,&g_242,&g_245,&g_242,&g_245,&g_242,&g_245}};
                uint32_t *l_2117[6][1][2] = {{{&g_123,&g_878}},{{&g_123,&g_123}},{{&g_878,&g_123}},{{&g_123,&g_878}},{{&g_123,&g_123}},{{&g_878,&g_123}}};
                int16_t *l_2134 = &l_2064;
                uint16_t *l_2136 = &g_61[3][0][6].f4;
                uint16_t *l_2138 = &g_46[4].f4;
                uint8_t l_2166 = 0xB4L;
                int i, j, k;
                (**g_288) = ((((l_2114 = &g_243[3][6][0]) == &g_288) != l_2096.f0) && (safe_div_func_uint32_t_u_u((((&g_1796 != (void*)0) & (((g_878 |= (0xC1498D62L != l_2096.f0)) == (**g_288)) > (*g_894))) | 1UL), l_1908)));
                l_2121 = ((**g_288) = (g_2118 != l_2120));
                (*g_288) = l_2122;
                if ((**g_288))
                    continue;
                if ((~((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_2138) = ((((((*l_2136) |= ((safe_lshift_func_uint8_t_u_u(((*l_2114) == (g_46[4].f4 , (*l_2114))), 4)) != (((l_2132 != (((l_1909[0] < ((*l_2134) &= g_2133)) & (+(*g_957))) != g_209[2])) | 4UL) < (*g_1697)))) , l_2137[4][2]) != 0x2884L) , (*g_894)) , l_1968)), l_2137[4][2])), l_2139)), l_1942[4])) < 1L)))
                { 
                    uint8_t *l_2162 = (void*)0;
                    uint8_t *l_2163 = &l_4[1][1][1].f0;
                    int32_t l_2164 = 0xB8E061E5L;
                    l_2164 = (safe_lshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((((safe_add_func_uint8_t_u_u(0x84L, ((*l_2163) ^= ((l_2161 = (!((((*g_45) , (((((*l_2122) = (((*g_603) = (**g_602)) != l_2147)) == ((g_459 = (safe_div_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((**g_1696), 1)) | (0xCAF8L & g_1005[1][4].f0)), l_2078[1][5])) <= 0xDFL), g_1250[1])), 2)) < 0xDA226862L), (-1L))) & (**g_2119)), 0x6C6422A0L))) & 4294967295UL)) | 0xE4L) != g_914[1])) & g_881[0]) & (*g_894)))) , (**g_999))))) , 0x1B1AAF60L) || 0x60907980L), g_3)), 5));
                    l_2165 = (-1L);
                }
                else
                { 
                    l_2166--;
                    (*g_156) = l_2169;
                }
            }
            else
            { 
                (*g_1793) = (void*)0;
            }
            return l_1942[4];
        }
        return l_2078[2][6];
    }
    l_2170 = &l_1903;
    (*l_2177) &= ((l_2171 != (l_2173 = l_2173)) >= ((safe_mul_func_int8_t_s_s((*l_2170), (((*g_288) = &l_1942[0]) == (void*)0))) , (*l_2170)));
    (*l_2108) = (*l_2108);
    (*g_288) = &l_1905;
    return (*g_957);
}



static int8_t * func_5(union U2  p_6, union U1  p_7, int32_t  p_8, uint64_t  p_9)
{ 
    uint32_t l_1517[5][5];
    uint32_t *l_1518[1][5][6] = {{{&g_459,&g_459,&g_552,(void*)0,&g_552,&g_459},{&g_552,&g_878,(void*)0,(void*)0,&g_878,&g_552},{&g_459,&g_552,(void*)0,&g_552,&g_459,&g_459},{&g_878,&g_552,&g_552,&g_878,&g_878,&g_878},{&g_878,&g_878,&g_878,&g_552,&g_552,&g_878}}};
    int32_t l_1519[4][5] = {{0x8E3C0E41L,0x8E3C0E41L,0x8E3C0E41L,0x8E3C0E41L,0x8E3C0E41L},{0x7CE76DBDL,4L,0x7CE76DBDL,4L,0x7CE76DBDL},{0x8E3C0E41L,0x8E3C0E41L,0x8E3C0E41L,0x8E3C0E41L,0x8E3C0E41L},{0x7CE76DBDL,4L,0x7CE76DBDL,4L,0x7CE76DBDL}};
    struct S0 **l_1524 = &g_130;
    struct S0 ***l_1523 = &l_1524;
    struct S0 ****l_1522 = &l_1523;
    union U3 l_1526 = {0L};
    int8_t **l_1555 = &g_894;
    int32_t *** const *l_1566[1];
    int32_t *l_1673 = &l_1519[0][2];
    int16_t l_1691[5][3] = {{0xA2D9L,0xA2D9L,4L},{0x93E4L,0x93E4L,0x5D17L},{0xA2D9L,0xA2D9L,4L},{0x93E4L,0x93E4L,0x5D17L},{0xA2D9L,0xA2D9L,4L}};
    int16_t l_1692 = 0x45AFL;
    int32_t l_1704 = 0x6D9DDA49L;
    const uint8_t ** const l_1718 = (void*)0;
    uint8_t l_1730 = 251UL;
    int8_t l_1773 = 5L;
    union U3 * const *l_1781 = &g_60[1];
    int32_t l_1787 = 0xF2A77C52L;
    union U2 ****l_1794 = &g_700[0];
    int32_t l_1833 = 0xB04F23BBL;
    uint32_t l_1860 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            l_1517[i][j] = 18446744073709551606UL;
    }
    for (i = 0; i < 1; i++)
        l_1566[i] = &g_242;
    if ((g_139[0][1][0] | (l_1519[0][2] ^= (safe_lshift_func_int16_t_s_s(((p_6.f0 | (safe_div_func_uint64_t_u_u((0x59F0L >= (((((g_72[1] , (!(*g_894))) || p_6.f2) & 1L) ^ p_7.f0) > 0x32D2L)), 18446744073709551615UL))) == 0L), l_1517[2][3])))))
    { 
        uint16_t l_1546 = 0x1F8EL;
        union U1 ** const *l_1565[6][1] = {{&g_156},{&g_156},{(void*)0},{&g_156},{&g_156},{(void*)0}};
        union U3 l_1568 = {0x0320C3A5E9496D8CLL};
        const int32_t *l_1569[6];
        int16_t l_1584[7];
        int32_t l_1618 = 0x2763F365L;
        const int8_t l_1649 = 0xFCL;
        int8_t *l_1655 = &g_175;
        uint8_t **l_1701 = &g_1697;
        int32_t l_1733[1];
        uint64_t l_1767 = 0xCC0FD075B83AE1E1LL;
        union U3 **l_1792 = &g_45;
        int i, j;
        for (i = 0; i < 6; i++)
            l_1569[i] = &g_199[1];
        for (i = 0; i < 7; i++)
            l_1584[i] = 1L;
        for (i = 0; i < 1; i++)
            l_1733[i] = (-10L);
lbl_1786:
        for (g_552 = 2; (g_552 < 40); g_552++)
        { 
            struct S0 *****l_1525 = &l_1522;
            int32_t l_1529[4][7] = {{1L,0xFB1E2B9DL,1L,0xFB1E2B9DL,1L,0xFB1E2B9DL,1L},{0L,0L,0L,0L,0L,0L,0L},{1L,0xFB1E2B9DL,1L,0xFB1E2B9DL,1L,0xFB1E2B9DL,1L},{0L,0L,0L,0L,0L,0L,0L}};
            uint32_t *l_1644 = &l_1517[2][3];
            int8_t l_1678[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_1678[i] = 1L;
            if (((((*l_1525) = l_1522) != &l_1523) > (255UL > (l_1526 , ((*g_894) = (((safe_mul_func_uint16_t_u_u(2UL, l_1529[2][1])) != ((l_1519[2][2] == g_72[6]) <= 0x36D3A7F8L)) , (-2L)))))))
            { 
                const int32_t ** const **l_1553 = (void*)0;
                union U2 ***l_1557 = &g_269[0][1][4];
                int32_t l_1567 = 0xA8F9F784L;
                for (g_808 = 0; (g_808 <= 0); g_808 += 1)
                { 
                    int32_t *l_1530 = &l_1529[1][1];
                    int32_t *l_1531 = &l_1529[3][3];
                    int32_t *l_1532 = &l_1519[0][2];
                    int32_t *l_1533 = (void*)0;
                    int32_t *l_1534 = &l_1529[2][1];
                    int32_t *l_1535 = &l_1519[0][2];
                    int32_t *l_1536 = &l_1529[0][3];
                    int32_t *l_1537 = &l_1529[2][1];
                    int32_t *l_1538 = &g_199[1];
                    int32_t *l_1539 = &l_1529[2][0];
                    int32_t *l_1540 = &l_1519[1][4];
                    int32_t *l_1541 = &l_1519[0][2];
                    int32_t *l_1542[7][6] = {{&g_199[0],&g_199[1],&g_199[1],&g_199[0],&g_199[1],&g_199[1]},{&g_199[0],&g_199[1],&g_199[1],&g_199[0],&g_199[1],&g_199[1]},{&g_199[0],&g_199[1],&g_199[1],&g_199[0],&g_199[1],&g_199[1]},{&g_199[0],&g_199[1],&g_199[1],&g_199[0],&g_199[1],&g_199[1]},{&g_199[0],&g_199[1],&g_199[1],&g_199[0],&g_199[1],&g_199[1]},{&g_199[0],&g_199[1],&g_199[1],&g_199[0],&g_199[1],&g_199[1]},{&g_199[0],&g_199[1],&g_199[1],&g_199[0],&g_199[1],&g_199[1]}};
                    uint32_t l_1543 = 0x4FA0E591L;
                    int i, j;
                    l_1543--;
                    (****l_1522) = (*g_130);
                    (*l_1539) = (-1L);
                    if (p_9)
                        continue;
                    ++l_1546;
                }
                for (g_141 = 13; (g_141 > 59); g_141 = safe_add_func_int32_t_s_s(g_141, 4))
                { 
                    uint64_t *l_1554 = &g_209[1];
                    int32_t *l_1556 = &g_199[1];
                    (*l_1556) &= (safe_lshift_func_int8_t_s_u(((((*l_1554) ^= (((void*)0 == l_1553) , ((&g_1000 == &g_1000) && g_459))) | p_9) >= ((&g_894 != l_1555) & 0x9F68L)), 4));
                    (*l_1556) = (((((*l_1556) >= (((*g_699) != l_1557) >= ((p_9 && (((((~p_8) && (safe_div_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s(((*g_1000) | p_6.f2), p_8)) , l_1529[2][1]), l_1546)) , p_6.f0), l_1546))) ^ (-1L)) >= p_8) || g_175)) && 0xBAB8A942L))) == l_1529[2][1]) , (void*)0) == l_1565[5][0]);
                    (*l_1556) = 0x44B183CFL;
                    l_1567 |= (l_1566[0] != (void*)0);
                    if (l_1529[2][1])
                        continue;
                }
            }
            else
            { 
                const int32_t **l_1570 = &l_1569[4];
                g_915[1][0][1] = ((*l_1570) = (l_1568 , l_1569[0]));
            }
            for (p_8 = 0; (p_8 <= 4); p_8 += 1)
            { 
                uint16_t l_1585 = 65531UL;
                int8_t *l_1587 = &g_139[1][3][1];
                union U2 l_1598 = {0xF724L};
                union U3 l_1599[3] = {{0x364E29E14A928E89LL},{0x364E29E14A928E89LL},{0x364E29E14A928E89LL}};
                int64_t *l_1606 = &g_158.f0;
                int32_t l_1607 = 0x7E6B8BB3L;
                int32_t l_1608[7];
                union U1 **l_1615 = (void*)0;
                int i;
                for (i = 0; i < 7; i++)
                    l_1608[i] = 0x3EB429F1L;
                for (l_1568.f4 = 1; (l_1568.f4 <= 5); l_1568.f4 += 1)
                { 
                    int64_t l_1577 = (-4L);
                    int16_t *l_1580 = (void*)0;
                    int32_t l_1581 = 0x4C52D908L;
                    uint16_t *l_1582 = (void*)0;
                    uint16_t *l_1583 = &l_1526.f4;
                    int32_t l_1586[5][4] = {{1L,0x9C663D53L,0x9C663D53L,1L},{0x9C663D53L,1L,0x9C663D53L,0x9C663D53L},{1L,1L,0xBE119136L,1L},{1L,0x9C663D53L,0x9C663D53L,1L},{0x9C663D53L,1L,0x9C663D53L,0x9C663D53L}};
                    int i, j;
                    l_1586[4][3] |= (((((((*g_957) , ((((((((safe_lshift_func_int8_t_s_u(p_9, (g_139[2][2][2] >= (p_9 >= ((safe_mul_func_uint16_t_u_u(((*l_1583) &= (safe_lshift_func_int8_t_s_s(((l_1577 = p_6.f0) ^ (l_1581 = (g_199[1] != (safe_add_func_int8_t_s_s(l_1529[1][4], (*g_894)))))), 7))), g_10.f0)) && p_7.f0))))) && g_552) && l_1529[1][1]) >= (*g_957)) && 1L) & (*g_957)) == 254UL) >= p_8)) > g_46[4].f4) == p_9) | l_1529[2][1]) , l_1584[2]) , l_1585);
                    return l_1587;
                }
                l_1608[4] |= ((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((l_1607 ^= ((safe_lshift_func_uint8_t_u_u((p_6.f3.f0 = (*g_1000)), 7)) ^ (((safe_add_func_uint64_t_u_u((l_1598 , (l_1599[1] , 8UL)), ((*l_1606) = (((g_51 , (safe_div_func_int32_t_s_s(p_8, (safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((*g_602) == &l_1565[5][0]), (*g_957))), p_7.f0))))) || p_9) ^ p_9)))) && (-1L)) > l_1598.f2))), p_7.f0)) != p_9) | p_8), p_9)), l_1529[2][1])) <= g_3);
                for (g_124 = 0; (g_124 <= 4); g_124 += 1)
                { 
                    int32_t l_1616 = 0x6B010B7EL;
                    l_1618 &= (safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_10.f0, ((((void*)0 != &l_1565[5][0]) , (safe_sub_func_uint32_t_u_u(((p_6.f0 , (void*)0) != l_1615), l_1616))) ^ g_1617[1]))), 1UL));
                }
            }
            for (g_102 = 3; (g_102 >= 0); g_102 -= 1)
            { 
                uint16_t *l_1627 = &g_51;
                int64_t l_1654 = 0x765730A249293320LL;
                int i, j;
                if ((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((((*l_1627) &= l_1529[g_102][(g_102 + 2)]) > l_1529[g_102][(g_102 + 3)]), 4)) , p_6.f2), 11)), ((p_7.f0 >= (((***l_1523) , ((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u((~l_1529[g_102][(g_102 + 3)]))), ((!(((safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((!((g_1643 != (void*)0) , 0x93C9L)) == 1UL))), 0x25L)), 0xF6L)) && g_123) != 9L), (*g_894))) , (*g_957)) < (*g_957))) , l_1529[2][1]))), 0xB2C2C604724E40DALL)) < l_1529[g_102][(g_102 + 3)])) || 0x13L)) | 0xCAC8B1D647723DE2LL))), p_8)))
                { 
                    l_1529[2][6] &= (p_7.f0 ^ 0xDCCCL);
                    l_1529[2][1] |= 0x044F1456L;
                    l_1618 ^= (((void*)0 != l_1644) | (safe_add_func_int64_t_s_s(p_6.f2, ((safe_lshift_func_int16_t_s_s((g_101 |= g_327), 4)) && l_1649))));
                    if (p_7.f0)
                        break;
                    if (p_7.f0)
                        continue;
                }
                else
                { 
                    uint8_t l_1650 = 0x06L;
                    uint64_t l_1653 = 0x24ABBB1435561254LL;
                    (*g_130) = (***l_1523);
                    l_1650++;
                    l_1654 ^= l_1653;
                    return l_1655;
                }
                for (p_9 = 0; (p_9 > 2); p_9 = safe_add_func_int16_t_s_s(p_9, 8))
                { 
                    uint16_t l_1670[2];
                    union U1 **l_1694 = &g_157;
                    union U1 ***l_1693 = &l_1694;
                    int32_t l_1695 = (-6L);
                    uint8_t ***l_1698 = &g_1696;
                    uint8_t **l_1700[7];
                    uint8_t ***l_1699[6][7] = {{&l_1700[4],&l_1700[5],&l_1700[4],&l_1700[6],&l_1700[6],&l_1700[4],&l_1700[5]},{&l_1700[6],&l_1700[5],&l_1700[4],(void*)0,&l_1700[5],&l_1700[4],(void*)0},{(void*)0,&l_1700[4],&l_1700[4],(void*)0,(void*)0,(void*)0,&l_1700[4]},{&l_1700[4],&l_1700[4],&l_1700[4],&l_1700[5],&l_1700[4],&l_1700[6],&l_1700[4]},{&l_1700[4],&l_1700[4],(void*)0,&l_1700[4],&l_1700[6],&l_1700[6],&l_1700[4]},{(void*)0,(void*)0,(void*)0,&l_1700[4],&l_1700[4],(void*)0,&l_1700[4]}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1670[i] = 0xF7FEL;
                    for (i = 0; i < 7; i++)
                        l_1700[i] = &g_1697;
                    l_1618 = (safe_add_func_uint8_t_u_u(0x76L, (((0x33L == (((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((*l_1627) = (safe_div_func_uint16_t_u_u(p_6.f2, p_8))), (p_9 , (((l_1670[0]--) == (p_9 & l_1529[g_102][(g_102 + 2)])) && 8UL)))), 15)), 0x311E973D2944A6C3LL)), (*g_894))) >= 0x52EEL) != g_886)) | p_6.f0) > 4294967288UL)));
                    (*g_288) = l_1673;
                    l_1695 |= (safe_add_func_uint8_t_u_u(((((((((*l_1693) = (((*g_1000) = (safe_lshift_func_int8_t_s_s(((l_1678[0] & (((((safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((((((l_1618 = ((safe_rshift_func_int16_t_s_u(((p_8 <= ((safe_div_func_uint32_t_u_u((~(0x2C85L || (p_9 & ((safe_rshift_func_uint16_t_u_s((~(((l_1529[1][0] = (*g_894)) < ((l_1691[0][1] || ((p_9 , p_6.f0) , g_1001)) | l_1654)) , l_1670[0])), l_1692)) != (*g_957))))), 4294967295UL)) , 0x77F62B59L)) || (*g_1000)), l_1678[0])) , p_6.f0)) , p_7) , p_6.f2) && (-2L)) >= p_6.f2), l_1670[0])) & p_8) < l_1654), (-3L))) ^ 5UL) & 255UL) | p_7.f0) >= l_1678[0])) >= g_1073), (*g_894)))) , (void*)0)) == (void*)0) || 0L) > p_9) , g_46[4].f4) >= (*l_1673)) || p_9), p_8));
                    l_1701 = ((*l_1698) = g_1696);
                }
                return (*l_1555);
            }
        }
        if (((p_7.f0 , p_9) < (((safe_lshift_func_uint16_t_u_s((((p_7.f0 < (l_1704 <= p_9)) & ((g_101 = (p_7.f0 & 2UL)) | (*l_1673))) != 0L), p_6.f2)) , 9L) | p_6.f2)))
        { 
            uint64_t l_1709 = 4UL;
            int16_t *l_1710 = &l_1568.f3;
            int32_t l_1734 = 1L;
            int32_t l_1737[4];
            uint64_t l_1740 = 0x24CF98CF46A69245LL;
            int16_t l_1764 = 0x1014L;
            int8_t l_1774 = 0L;
            uint32_t l_1776 = 4UL;
            union U3 * const *l_1782 = (void*)0;
            uint32_t l_1789[1][3];
            int i, j;
            for (i = 0; i < 4; i++)
                l_1737[i] = 0x29E85F29L;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1789[i][j] = 0xDB6A788DL;
            }
            if ((((safe_lshift_func_int16_t_s_s((p_8 != (((((*g_157) , (((p_7.f0 &= (safe_sub_func_int64_t_s_s(((l_1709 && 4294967295UL) & ((*l_1710) = p_8)), (safe_mul_func_int8_t_s_s((((~(safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(p_6.f2, (((0x6661L | l_1709) < 65527UL) != p_6.f0))) && g_1073), l_1709))) , l_1718) == l_1718), 0x82L))))) > (-3L)) < g_3)) && p_7.f0) , (-1L)) == l_1709)), 7)) , p_7.f0) , 0x3D8D4AF0L))
            { 
                int32_t l_1729 = 0L;
                int32_t l_1735 = 0x392BB22AL;
                int32_t l_1736 = 2L;
                int32_t l_1738 = 0xBFFC946BL;
                int32_t l_1739 = 1L;
                if (((*l_1673) = (safe_lshift_func_int16_t_s_u(0xFEC9L, (g_1073 || (g_46[4].f0 = (safe_sub_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u(g_1617[1], 5)) & (((1L && (safe_mul_func_int16_t_s_s(g_1005[1][4].f0, (safe_mod_func_int8_t_s_s((g_3 ^ ((((&g_1617[0] == &g_1250[0]) < 0L) || 4294967295UL) , (-5L))), (*l_1673)))))) , 0x2DEAL) && l_1729)) != l_1730), l_1709))))))))
                { 
                    int64_t l_1731 = 0x51B80C275D9655C4LL;
                    int32_t l_1732[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1732[i] = (-1L);
                    ++l_1740;
                    return &g_102;
                }
                else
                { 
                    return &g_72[6];
                }
            }
            else
            { 
                int32_t **l_1748 = (void*)0;
                int32_t l_1755 = (-1L);
                int32_t l_1756 = (-1L);
                int32_t l_1757 = 0x8CBF5BE7L;
                int32_t l_1759 = 0x8CD9A7A1L;
                int32_t l_1761 = (-3L);
                int32_t l_1763 = 0x048E5DA2L;
                int32_t l_1765 = 0x371EAB61L;
                int32_t l_1766[5] = {6L,6L,6L,6L,6L};
                int16_t l_1770 = 7L;
                int16_t l_1772 = 0x3872L;
                int i;
lbl_1783:
                for (g_158.f0 = 0; (g_158.f0 <= 2); g_158.f0 += 1)
                { 
                    int8_t *l_1743 = (void*)0;
                    return l_1743;
                }
                if ((l_1737[2] > ((*l_1673) ^= (((safe_rshift_func_int8_t_s_u(l_1734, (**g_1696))) != ((*g_1697) != (l_1748 == (void*)0))) | (safe_sub_func_int32_t_s_s(0L, 0xDA607ED2L))))))
                { 
                    uint16_t l_1751 = 0x466FL;
                    --l_1751;
                }
                else
                { 
                    int8_t l_1754 = 0x7DL;
                    int32_t l_1758 = 0xC635CC7DL;
                    int32_t l_1760 = 0xE5E1FCC9L;
                    int32_t l_1762[6][7] = {{0x7853592DL,0x59AF753BL,(-9L),0xFAD03860L,0x529AD151L,0xFAF41A37L,0x529AD151L},{(-1L),(-1L),(-1L),(-1L),1L,(-1L),(-1L)},{0x5A6D6032L,4L,0x7853592DL,0xFAD03860L,0x7853592DL,4L,0x5A6D6032L},{0xA022FE5FL,(-1L),(-1L),(-1L),0xA022FE5FL,0xA022FE5FL,(-1L)},{0xE5FDE830L,0x59AF753BL,0xE5FDE830L,0xFAF41A37L,0x7853592DL,0xBF0371A5L,0x529AD151L},{(-1L),1L,(-1L),(-1L),1L,(-1L),1L}};
                    int16_t l_1771 = 0L;
                    int i, j;
                    l_1767--;
                    l_1776--;
                }
                for (g_123 = 0; (g_123 <= 41); ++g_123)
                { 
                    l_1618 = 0x93D1D329L;
                    l_1782 = l_1781;
                    if (l_1649)
                        goto lbl_1783;
                }
            }
            for (l_1526.f0 = 0; (l_1526.f0 > (-20)); l_1526.f0 = safe_sub_func_int16_t_s_s(l_1526.f0, 1))
            { 
                if (g_886)
                    goto lbl_1786;
            }
            p_6.f3 = (*g_130);
            l_1789[0][0]++;
        }
        else
        { 
            g_1793 = l_1792;
        }
        return (*l_1555);
    }
    else
    { 
        union U2 *****l_1795[1][3];
        const int32_t l_1804 = 0x08F1EF47L;
        uint16_t *l_1805 = &g_46[4].f4;
        int32_t l_1806 = 0x77490079L;
        int64_t *l_1807[3][7] = {{&g_158.f0,&g_1235,&l_1526.f0,&g_1235,&g_158.f0,&g_1788,&g_1788},{&g_158.f0,&g_1235,&l_1526.f0,&g_1235,&g_158.f0,&g_1788,&g_1788},{&g_158.f0,&g_1235,&l_1526.f0,&g_1235,&g_158.f0,&g_1788,&g_1788}};
        int32_t l_1829 = 0x1392CE97L;
        int32_t l_1831[3][3] = {{(-1L),(-1L),(-1L)},{0xF4408A53L,0x59798ABEL,0xF4408A53L},{(-1L),(-1L),(-1L)}};
        int8_t *l_1863 = &g_139[0][1][0];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1795[i][j] = (void*)0;
        }
        if ((0x04FB38B56405AD4FLL && (1UL ^ (((p_6 , l_1794) != (g_1796 = l_1794)) && (safe_rshift_func_uint16_t_u_s((p_6.f2 = (((*g_1000) |= ((((*g_1697) = (~((((*l_1673) & ((p_7.f0 = (safe_lshift_func_int8_t_s_s(((**l_1555) ^= (((l_1806 = (((*l_1805) &= ((18446744073709551612UL && l_1804) && (*g_1697))) <= p_6.f2)) , p_8) > p_6.f2)), l_1804))) , 0x27F3ADAB951DEF0CLL)) ^ p_8) > 0UL))) < p_6.f0) > g_1250[0])) >= p_9)), 1))))))
        { 
            uint32_t l_1808 = 0x20FC0B27L;
            l_1808 ^= l_1804;
        }
        else
        { 
            int64_t l_1822[6][3] = {{0L,3L,0L},{0L,3L,0L},{0L,3L,0L},{0L,3L,0L},{0L,3L,0L},{0L,3L,0L}};
            const struct S0 l_1826 = {251UL};
            int32_t l_1828 = 1L;
            int32_t l_1835 = (-7L);
            int32_t l_1836[4];
            int8_t l_1850[1];
            struct S0 *****l_1880[7] = {&l_1522,&l_1522,&l_1522,&l_1522,&l_1522,&l_1522,&l_1522};
            uint32_t l_1892 = 1UL;
            int i, j;
            for (i = 0; i < 4; i++)
                l_1836[i] = 0x28056D25L;
            for (i = 0; i < 1; i++)
                l_1850[i] = 0x05L;
            if (l_1806)
            { 
                uint64_t l_1814 = 0x4E2F54D2BB7E14FALL;
                int32_t l_1819 = 6L;
                uint8_t l_1837 = 0x34L;
                int8_t l_1846 = (-1L);
                int32_t l_1847[6][2] = {{0xABB78187L,0xABB78187L},{0xABB78187L,0xABB78187L},{0xABB78187L,0xABB78187L},{0xABB78187L,0xABB78187L},{0xABB78187L,0xABB78187L},{0xABB78187L,0xABB78187L}};
                int16_t *l_1861 = &l_1692;
                int i, j;
                if (((-1L) | (((safe_mod_func_int32_t_s_s((~(0x8CL && (safe_mod_func_uint32_t_u_u(((l_1814 > (l_1814 , (safe_rshift_func_uint16_t_u_u(((*l_1805) ^= 65526UL), ((safe_mod_func_int8_t_s_s((l_1819 = (*l_1673)), (safe_sub_func_int64_t_s_s((g_1235 = (p_8 , 0xD984B9733760EFE7LL)), (*g_957))))) & p_7.f0))))) < l_1822[0][0]), g_209[0])))), (-6L))) | 0L) ^ p_9)))
                { 
                    uint64_t l_1823 = 0xC086CE99C03F3775LL;
                    l_1806 = p_6.f0;
                    ++l_1823;
                    (****l_1522) = l_1826;
                }
                else
                { 
                    int32_t l_1827 = 0xE28E1BC3L;
                    int32_t l_1830 = (-1L);
                    int32_t l_1832 = 0xBCD6943DL;
                    int32_t l_1834[4][1][1] = {{{0x1A0EF7D3L}},{{0xDE07814DL}},{{0x1A0EF7D3L}},{{0xDE07814DL}}};
                    int i, j, k;
                    l_1828 |= ((*l_1673) &= (p_6 , l_1827));
                    --l_1837;
                    l_1806 &= (l_1829 ^= l_1835);
                }
                for (g_1775 = 0; (g_1775 < (-28)); g_1775--)
                { 
                    uint8_t ***l_1842 = &g_1696;
                    int32_t l_1848 = 0x90A7E769L;
                    int32_t l_1849 = 0x37310A59L;
                    (*l_1842) = &g_1697;
                    g_1843[2]--;
                    if (l_1814)
                        continue;
                    g_1851--;
                    if ((*l_1673))
                        continue;
                }
                (**l_1524) = l_1826;
                (*l_1673) = ((((*g_894) = (p_6.f2 != ((void*)0 != &p_6))) & 6L) | (safe_sub_func_int16_t_s_s(((*l_1861) |= ((*g_45) , ((l_1806 = (safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((l_1814 , 0xD8L), l_1806)) ^ (*l_1673)), (*l_1673)))) == l_1860))), l_1814)));
            }
            else
            { 
                int8_t *l_1862[1][3][2] = {{{&l_1850[0],&l_1850[0]},{&l_1850[0],&l_1850[0]},{&l_1850[0],&l_1850[0]}}};
                int i, j, k;
                return l_1863;
            }
            if ((safe_sub_func_uint16_t_u_u(65534UL, ((((*g_103) , &g_1250[1]) != (void*)0) >= p_8))))
            { 
                uint8_t l_1874 = 255UL;
                (*l_1673) = ((-1L) | ((+((~l_1836[0]) <= ((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u(l_1874, ((-4L) || 246UL))) , g_1875) == l_1880[4]) , l_1874), p_7.f0)), 2UL)) , g_1843[2]))) & g_199[1]));
                return &g_72[6];
            }
            else
            { 
                int16_t *l_1888 = &l_1691[1][2];
                int32_t l_1889 = 4L;
                int32_t l_1890 = (-2L);
                int32_t l_1891 = 2L;
                l_1828 ^= ((((**g_1696) = 1UL) , 0x659D4E70L) < ((l_1889 = ((((p_8 , g_104.f0) , ((+5L) <= (safe_rshift_func_int8_t_s_u((((*l_1888) |= (safe_rshift_func_int16_t_s_s(((((((safe_rshift_func_int16_t_s_u(0x3EE1L, l_1831[2][2])) || l_1850[0]) == p_9) != (*l_1673)) == 0x099F34CCL) >= p_6.f0), g_102))) || 0xF306L), l_1889)))) == l_1889) <= p_9)) > 0x89941507A717DC7ELL));
                l_1892--;
            }
        }
    }
    return (*l_1555);
}



static union U1  func_11(int8_t * p_12, int8_t * const  p_13, int8_t * p_14, int32_t  p_15, int8_t * p_16)
{ 
    uint8_t l_898 = 0x28L;
    int8_t l_903 = 0xBEL;
    int32_t l_908 = 0x60CCEB4EL;
    int32_t *l_909 = &g_199[1];
    const int32_t *l_916 = &l_908;
    union U1 *** const *l_926 = (void*)0;
    int8_t l_927 = (-3L);
    union U3 l_928 = {-4L};
    int64_t l_958 = 8L;
    int32_t *l_967 = &l_908;
    uint8_t *l_998 = &g_126[3][1][3].f0;
    uint8_t * const *l_997[3];
    int32_t l_1044 = 0x35ACAE94L;
    int32_t l_1047 = 0x6049D745L;
    int32_t l_1050 = (-3L);
    int32_t l_1052 = (-10L);
    int32_t l_1053 = 1L;
    int32_t l_1054 = 0xA27BCB38L;
    int32_t l_1060 = (-6L);
    int32_t l_1065[7][7][1] = {{{0x718A2999L},{0x80ED5B8CL},{(-10L)},{0x7CC87FF2L},{8L},{0x9FDECB7FL},{6L}},{{(-10L)},{6L},{0x9FDECB7FL},{8L},{0x7CC87FF2L},{(-10L)},{0x80ED5B8CL}},{{0x718A2999L},{0x80ED5B8CL},{(-10L)},{0x7CC87FF2L},{8L},{0x9FDECB7FL},{6L}},{{(-10L)},{6L},{0x9FDECB7FL},{8L},{0x7CC87FF2L},{(-10L)},{0x80ED5B8CL}},{{0x718A2999L},{0x80ED5B8CL},{(-10L)},{0x7CC87FF2L},{8L},{0x9FDECB7FL},{6L}},{{(-10L)},{(-10L)},{(-10L)},{0L},{0x1177B66DL},{0x718A2999L},{0x9FDECB7FL}},{{4L},{0x9FDECB7FL},{0x718A2999L},{0x1177B66DL},{0L},{(-10L)},{(-10L)}}};
    uint8_t l_1079 = 5UL;
    int16_t l_1119 = (-7L);
    union U1 *l_1157[5][2];
    int32_t l_1161 = (-4L);
    uint64_t *l_1217 = &g_209[0];
    uint16_t l_1278 = 0x3D6CL;
    int16_t l_1297[4];
    const struct S0 *l_1338[5];
    int32_t l_1400[7][1] = {{0xDE73FF9CL},{(-3L)},{0xDE73FF9CL},{(-3L)},{0xDE73FF9CL},{(-3L)},{0xDE73FF9CL}};
    uint64_t l_1421 = 0xE1ED87FEE20676CELL;
    int32_t l_1468 = 9L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_997[i] = &l_998;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_1157[i][j] = &g_158;
    }
    for (i = 0; i < 4; i++)
        l_1297[i] = 0L;
    for (i = 0; i < 5; i++)
        l_1338[i] = &g_126[2][1][3];
    (*l_909) = (safe_rshift_func_int16_t_s_s((l_908 = ((l_898 >= (safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((*g_894), 4)) < (l_903 <= (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(0x60L, ((*p_12) = ((void*)0 != &l_903)))) <= g_46[4].f3), 4)))), p_15))) , 0x437CL)), 7));
lbl_1039:
    for (g_102 = 0; (g_102 > 18); g_102 = safe_add_func_uint16_t_u_u(g_102, 1))
    { 
        const int32_t *l_913 = &g_914[0];
        const int32_t **l_912[2];
        int32_t l_949 = (-5L);
        int i;
        for (i = 0; i < 2; i++)
            l_912[i] = &l_913;
        l_916 = (g_915[1][0][1] = &l_908);
        for (g_141 = (-15); (g_141 < 14); g_141 = safe_add_func_int32_t_s_s(g_141, 6))
        { 
            uint8_t **l_921 = (void*)0;
            uint8_t *l_923 = &l_898;
            uint8_t **l_922 = &l_923;
            int32_t l_947 = 9L;
            uint8_t *l_948 = &g_594;
            int32_t l_950 = 0xDD801E24L;
            (*l_909) |= ((p_15 | (((*l_922) = (void*)0) != (void*)0)) && (safe_mul_func_int8_t_s_s((l_927 = (l_926 == (*g_602))), (*p_12))));
            l_950 |= (l_928 , (safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u(0x35CF5ED6L, (l_949 |= (safe_div_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((((safe_sub_func_int8_t_s_s(((((p_15 , l_913) == &g_415) != ((((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((*l_948) = (safe_div_func_uint64_t_u_u(((+(l_947 = (safe_rshift_func_int16_t_s_s(6L, (p_15 ^ 18446744073709551615UL))))) & 249UL), g_459))), g_327)) | g_139[0][1][0]), (*l_909))) | g_124) == 0x055AL) > g_881[0])) >= (*l_909)), 255UL)) && g_104.f0) < p_15))), g_51))))), (*l_916))));
        }
    }
    (*l_967) |= (safe_mod_func_int16_t_s_s(((((0x9228D357L != p_15) <= ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((((void*)0 == g_957) < ((*g_157) , p_15)) ^ (*l_909)), 2)), 1UL)) || p_15)) & g_104.f0) ^ 5L), 1UL));
    if (((void*)0 == &l_967))
    { 
        int16_t l_970 = (-3L);
        union U2 *l_971 = &g_10;
        int32_t l_988 = 0L;
        uint16_t l_989 = 0x4099L;
        uint8_t **l_1003 = (void*)0;
        int32_t *l_1008 = &g_199[1];
        int64_t *l_1014 = &l_958;
        struct S0 l_1034 = {0xCCL};
        int32_t l_1045 = 0xA2C64E36L;
        int32_t l_1048 = 0x069F65CBL;
        int32_t l_1049 = (-1L);
        int32_t l_1056 = 0xDD51D851L;
        int32_t l_1059 = 0x28257E19L;
        int32_t l_1071 = 0xFE598F5EL;
        int32_t l_1072 = (-1L);
        int32_t l_1074 = 1L;
        int32_t l_1076 = 6L;
        int32_t l_1077 = 0x8891541BL;
        uint64_t l_1120 = 5UL;
        union U1 l_1123 = {0L};
        uint32_t l_1220 = 8UL;
        uint32_t l_1242 = 0UL;
        const uint8_t l_1359 = 249UL;
        for (g_158.f0 = 0; (g_158.f0 < 28); g_158.f0++)
        { 
            (*g_288) = &l_908;
            (*g_198) &= l_970;
        }
        l_971 = l_971;
        if ((&g_51 == ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_970, ((safe_rshift_func_uint16_t_u_u(l_970, (~((safe_div_func_int8_t_s_s((*p_12), l_970)) >= l_970)))) || ((void*)0 != &g_700[0])))), 0UL)) , &g_51)))
        { 
            int32_t *l_983 = &g_199[0];
            int32_t *l_984 = (void*)0;
            int32_t l_985 = 0L;
            int32_t *l_986 = &l_985;
            int32_t *l_987[2][7] = {{&g_199[1],&l_985,(void*)0,(void*)0,&l_985,&g_199[1],&l_985},{&g_199[1],&g_199[1],&g_199[1],&g_199[1],&l_985,&g_199[1],&g_199[1]}};
            uint8_t *l_994 = (void*)0;
            const uint8_t *l_996 = &g_126[3][1][3].f0;
            int64_t *l_1015 = &l_958;
            int i, j;
            l_989--;
            if ((safe_sub_func_int64_t_s_s((((*p_16) = ((((((*l_909) != (p_15 || p_15)) , (g_594 = p_15)) | p_15) , p_15) <= (*l_983))) ^ g_881[5]), (*g_957))))
            { 
                union U3 **l_995 = &g_60[1];
                uint8_t * const **l_1002 = &l_997[1];
                (*l_995) = &l_928;
                (*l_967) = ((&g_594 != l_996) ^ (((*l_1002) = (g_999 = l_997[1])) != l_1003));
            }
            else
            { 
                struct S0 *l_1004 = &g_1005[1][4];
                int32_t *l_1023[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1023[i][j] = &l_988;
                }
                (*l_1004) = ((*g_130) = (*g_130));
                for (g_808 = (-1); (g_808 > 2); g_808++)
                { 
                    int32_t *l_1009[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1009[i] = &l_985;
                    if (l_988)
                        break;
                    (*l_967) ^= (*l_909);
                    l_1009[0] = ((*g_288) = l_1008);
                    (*l_986) &= (0xD638CB1C1813508FLL != (safe_add_func_uint64_t_u_u((1UL == 0x1ED9DC6DL), (((safe_add_func_int64_t_s_s(((*l_1014) |= (l_1014 == l_1015)), (&g_130 != (void*)0))) != p_15) , (*g_957)))));
                    (*l_986) ^= (safe_sub_func_int16_t_s_s(0xEC1FL, 0x2D83L));
                }
                for (g_145 = (-3); (g_145 > (-7)); g_145 = safe_sub_func_int64_t_s_s(g_145, 1))
                { 
                    uint16_t l_1020[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1020[i] = 0UL;
                    --l_1020[0];
                    if (p_15)
                        continue;
                    (*g_288) = l_1023[0][1];
                    (*l_983) |= (*g_198);
                    (*g_288) = &l_985;
                }
                (*l_986) |= (*l_1008);
            }
        }
        else
        { 
            uint64_t l_1027 = 0x687CC91A86B4DFDFLL;
            int32_t l_1040 = 0xF1877362L;
            int32_t l_1042 = 0x667572CFL;
            int32_t l_1046 = 0x467C5CE6L;
            int32_t l_1061 = 1L;
            int32_t l_1066[5][7] = {{0x334B4CAEL,(-1L),0x334B4CAEL,0x334B4CAEL,(-1L),0x334B4CAEL,0x334B4CAEL},{0x5609A7F1L,0x5609A7F1L,0x7B8841E1L,0x5609A7F1L,0x5609A7F1L,0x7B8841E1L,0x5609A7F1L},{(-1L),0x334B4CAEL,0x334B4CAEL,(-1L),0x334B4CAEL,0x334B4CAEL,(-1L)},{0xEEA8AB18L,0x5609A7F1L,0xEEA8AB18L,0xEEA8AB18L,0x5609A7F1L,0xEEA8AB18L,0xEEA8AB18L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
            uint8_t ***l_1103 = (void*)0;
            struct S0 l_1139 = {0UL};
            uint32_t l_1155 = 1UL;
            union U1 l_1184[5][5][2] = {{{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}}},{{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}}},{{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}}},{{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}}},{{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}},{{0x877CAC3795CE8B51LL},{3L}}}};
            union U2 *l_1200 = &g_10;
            struct S0 l_1257 = {0xC9L};
            int32_t *l_1287[5][2][1] = {{{&l_1048},{(void*)0}},{{&l_1048},{(void*)0}},{{&l_1048},{(void*)0}},{{&l_1048},{(void*)0}},{{&l_1048},{(void*)0}}};
            struct S0 **l_1306 = &g_130;
            struct S0 ***l_1305 = &l_1306;
            uint16_t l_1322 = 0x899CL;
            const uint16_t l_1424[1] = {0UL};
            int i, j, k;
            if ((((safe_unary_minus_func_int16_t_s(g_895)) && (l_1027 > (((safe_add_func_int8_t_s_s(0x76L, (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((*l_1008) && ((l_1034 , (safe_lshift_func_uint8_t_u_s(((*l_916) , (p_15 , p_15)), (*l_916)))) & p_15)), 4)), l_1027)))) && p_15) == 0x527AA6A5L))) >= (*l_1008)))
            { 
                int8_t l_1041[6];
                int32_t l_1051 = 0xCCDF1132L;
                int32_t l_1055 = 0xD48033F3L;
                int32_t l_1057 = 0x2649154CL;
                int32_t l_1058 = 0xE3BC9221L;
                int32_t l_1062 = 4L;
                int32_t l_1063 = 9L;
                int32_t l_1064 = 0x655DB115L;
                int32_t l_1067 = 0x4D47243DL;
                int32_t l_1068 = (-8L);
                int32_t l_1069 = 0x67937AB7L;
                int32_t l_1070 = 0x05FD323FL;
                int32_t l_1075[3][4][2] = {{{9L,0xAA45928CL},{0xAA45928CL,9L},{0xAA45928CL,0xAA45928CL},{9L,0xAA45928CL}},{{0xAA45928CL,9L},{0xAA45928CL,0xAA45928CL},{9L,0xAA45928CL},{0xAA45928CL,9L}},{{0xAA45928CL,0xAA45928CL},{9L,0xAA45928CL},{0xAA45928CL,9L},{0xAA45928CL,0xAA45928CL}}};
                int32_t l_1078 = 0x558CEF25L;
                uint16_t l_1094 = 0UL;
                struct S0 l_1112 = {255UL};
                uint32_t *l_1117[6][1];
                int32_t *l_1118[4][2] = {{&l_1056,(void*)0},{(void*)0,&l_1056},{(void*)0,(void*)0},{&l_1056,(void*)0}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1041[i] = 0x96L;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1117[i][j] = (void*)0;
                }
                for (l_1034.f0 = 0; (l_1034.f0 != 19); l_1034.f0 = safe_add_func_uint64_t_u_u(l_1034.f0, 1))
                { 
                    int32_t *l_1043[5];
                    uint16_t *l_1100 = &g_61[3][0][6].f4;
                    uint32_t *l_1106 = &g_124;
                    uint32_t *l_1107[3][3] = {{&g_878,(void*)0,(void*)0},{&g_878,(void*)0,(void*)0},{&g_878,(void*)0,(void*)0}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1043[i] = &g_199[1];
                    if (l_928.f4)
                        goto lbl_1039;
                    l_1079++;
                    l_1072 = (safe_mul_func_uint16_t_u_u(0x0CA8L, (+((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(l_1066[2][5], ((safe_unary_minus_func_uint64_t_u(4UL)) < ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_1094, (safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_s((--(*l_1100)), 10)))) < ((void*)0 == l_1103)), (l_1042 &= ((*l_1106) = (((*l_1008) = ((safe_add_func_uint8_t_u_u(0xB6L, (*l_1008))) && 0x143C4246871827A3LL)) ^ l_1046))))))), 0UL)) & g_209[0])))), p_15)) | 65535UL))));
                }
                l_1061 &= ((*l_916) | ((safe_sub_func_int16_t_s_s(0x79ECL, (((l_1075[1][0][1] = ((*l_909) = ((l_1070 = (safe_mul_func_int8_t_s_s((l_1112 , 0L), ((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((-3L), ((-1L) < (((*l_909) < 0L) , l_1070)))), g_209[0])) && l_1046)))) <= g_199[1]))) == (-10L)) >= p_15))) != g_124));
                (*l_967) ^= 0x5B663341L;
                (*l_967) ^= (*l_1008);
                l_1120++;
            }
            else
            { 
                return l_1123;
            }
            for (g_124 = (-22); (g_124 >= 27); g_124 = safe_add_func_int64_t_s_s(g_124, 2))
            { 
                int16_t *l_1134[1][6][7] = {{{(void*)0,(void*)0,&g_101,&g_10.f0,&g_101,&l_1119,&g_101},{&g_46[4].f3,&g_61[3][0][6].f3,&g_61[3][0][6].f3,&g_46[4].f3,(void*)0,&g_10.f0,(void*)0},{(void*)0,&g_10.f0,(void*)0,&g_46[4].f3,&g_61[3][0][6].f3,&g_61[3][0][6].f3,&g_101},{(void*)0,&l_1119,(void*)0,&l_970,(void*)0,&g_61[3][0][6].f3,&g_101},{&l_1119,&g_46[4].f3,(void*)0,&l_1119,(void*)0,&l_1119,(void*)0},{(void*)0,(void*)0,&l_1119,&g_10.f0,&g_10.f0,&g_61[3][0][6].f3,&l_1119}}};
                int32_t l_1135 = 8L;
                struct S0 **l_1136 = &g_130;
                int32_t l_1162 = (-6L);
                int32_t l_1163 = 0x7427C245L;
                int32_t l_1164 = 2L;
                int i, j, k;
            }
            if (((safe_sub_func_uint8_t_u_u((((*l_1008) && ((l_1066[3][4] = (((+p_15) == ((~(safe_div_func_uint64_t_u_u((*l_916), g_139[0][0][0]))) > (p_15 != ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((((l_971 != l_1200) , (-1L)) | p_15))), g_123)) && 0x06L)))) ^ (*l_1008))) & l_1061)) & 0xC7L), (*g_894))) & (*l_967)))
            { 
                uint16_t *l_1203 = &g_46[4].f4;
                uint32_t *l_1214 = &l_1155;
                uint64_t *l_1216 = &g_209[4];
                uint64_t **l_1215 = &l_1216;
                uint64_t **l_1218 = &l_1217;
                int32_t l_1219 = 0xB9316589L;
                int32_t *l_1245 = (void*)0;
                int32_t *l_1246 = &l_1065[2][4][0];
                int32_t *l_1247 = &l_1219;
                int32_t *l_1248 = &l_1059;
                int32_t *l_1249[2][6] = {{&l_1059,(void*)0,&l_1059,(void*)0,(void*)0,&l_1059},{&g_199[0],&g_199[0],(void*)0,&l_1046,(void*)0,&g_199[0]}};
                int i, j;
                for (g_594 = 5; (g_594 > 10); ++g_594)
                { 
                    (*g_288) = (void*)0;
                    if (g_594)
                        goto lbl_1221;
                    return (*g_103);
                }
lbl_1221:
                l_1220 &= (((((((((*l_1203) = 0xA8D4L) >= (((safe_add_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u((*g_894), 2)) , ((*l_1014) &= (safe_rshift_func_int8_t_s_s((*p_16), 6)))), ((*l_909) = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((((*l_1215) = (((*l_1214) = g_141) , &l_1027)) == ((*l_1218) = l_1217)), (*l_1008))), l_1219))))) == 5L) | p_15)) <= 0x561B89B3L) && 5L) | (-1L)) , (**g_999)) > p_15) ^ (*g_894));
                for (g_808 = (-18); (g_808 == 14); g_808 = safe_add_func_int8_t_s_s(g_808, 2))
                { 
                    struct S0 l_1224 = {0x5FL};
                    int32_t l_1225 = (-1L);
                    int32_t *l_1226 = &g_199[1];
                    int32_t *l_1227 = &l_1044;
                    int32_t *l_1228 = &g_199[1];
                    int32_t *l_1229 = (void*)0;
                    int32_t *l_1230 = &l_1048;
                    int32_t *l_1231 = &l_1045;
                    int32_t l_1232 = 0x898355BFL;
                    int32_t *l_1233 = &l_1050;
                    int32_t *l_1234 = &l_1065[5][6][0];
                    int32_t *l_1236 = &l_1054;
                    int32_t *l_1237 = &l_1046;
                    int32_t *l_1238 = &l_1219;
                    int32_t *l_1239 = &l_1066[1][4];
                    int32_t *l_1240 = &l_1054;
                    int32_t *l_1241[3][7][4] = {{{&l_1059,&l_1077,&l_1219,&l_1065[2][5][0]},{&l_1066[4][6],&l_1046,&l_1059,&l_1219},{&l_908,&l_1066[4][6],&l_1219,&l_1066[4][6]},{&l_1232,&l_1077,&l_1219,&l_1077},{(void*)0,&l_1052,&l_1056,&l_1076},{(void*)0,&l_1045,&l_1076,&l_1066[4][6]},{&l_1066[4][6],&l_1232,&l_1052,&l_1049}},{{&l_1066[4][6],&l_1225,&l_1076,(void*)0},{(void*)0,&l_1049,&l_1056,&l_908},{(void*)0,&g_199[0],&l_1219,(void*)0},{&l_1232,&l_1219,&l_1219,&l_1219},{&l_908,&l_908,&l_1059,&l_1045},{&l_1066[4][6],(void*)0,&l_1219,&l_1046},{&l_1059,&l_1040,&l_1077,&l_1219}},{{&l_1225,&l_1040,&l_1219,&l_1046},{&l_1040,(void*)0,(void*)0,&l_1045},{&l_908,&l_908,&l_1066[4][6],&l_1219},{&l_1219,&l_1219,&l_1077,(void*)0},{(void*)0,&g_199[0],(void*)0,&l_908},{(void*)0,&l_1049,&l_1232,(void*)0},{&l_1077,&l_1225,&l_1060,&l_1049}}};
                    int i, j, k;
                    (*g_130) = l_1224;
                    l_1242++;
                }
                g_1250[1]--;
            }
            else
            { 
                struct S0 l_1258 = {0x01L};
                int16_t *l_1259 = (void*)0;
                int16_t *l_1260 = &g_61[3][0][6].f3;
                union U1 l_1270 = {5L};
                if (((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((&g_1235 != &g_1235), 0x1F6DL)), ((((*g_130) = (l_1258 = l_1257)) , ((*l_1008) | ((((l_1258.f0 , ((g_101 = ((*l_1260) = p_15)) && 0x6954L)) | 0x8B05B8BE01FA10D1LL) , l_1258.f0) >= 0x367D2733FEA71542LL))) , 0xA7AE233D1B073709LL))) == (*l_1008)))
                { 
                    struct S0 **l_1262 = &g_130;
                    struct S0 ***l_1261 = &l_1262;
                    uint32_t *l_1279 = &g_878;
                    uint16_t l_1280 = 65535UL;
                    (*l_1261) = &g_130;
                    (*l_909) = (safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((((*l_1279) = (!((l_1270 , (safe_add_func_uint64_t_u_u((((+(*g_957)) == ((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(p_15, l_1258.f0)), (g_914[0] & 0x5EF7L))) > p_15)) || l_1278), p_15))) || (*l_916)))) > 0xF8708FA2L), l_1280)) | l_1258.f0), 4294967295UL)), l_1042));
                }
                else
                { 
                    uint32_t l_1281 = 4294967295UL;
                    int32_t * const *l_1286[2];
                    int32_t * const **l_1285 = &l_1286[1];
                    int32_t * const ***l_1284 = &l_1285;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1286[i] = &l_1008;
                    (****l_1284) ^= (((l_1281 == (safe_lshift_func_uint8_t_u_u(0x8EL, ((void*)0 != &g_999)))) || ((l_1284 != &g_245) , 6L)) >= 252UL);
                    return l_1184[4][4][0];
                }
                (*g_288) = l_1287[4][0][0];
                (*l_1008) = ((void*)0 != l_967);
                for (g_3 = 0; (g_3 >= (-5)); g_3--)
                { 
                    int32_t *l_1290 = &l_1045;
                    l_1008 = l_1290;
                }
            }
            if ((((safe_div_func_uint8_t_u_u((p_12 == (g_894 = p_12)), (safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((-6L) && (*g_1000)), l_1297[1])), p_15)))) || 0x50DAADDBL) <= 0xD01DA05EDF3DD0DELL))
            { 
                int16_t *l_1313 = &l_1297[1];
                int32_t l_1323[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1323[i] = (-2L);
                for (l_1048 = (-14); (l_1048 != (-21)); --l_1048)
                { 
                    return l_1184[3][3][1];
                }
                for (g_51 = 0; (g_51 <= 9); g_51 = safe_add_func_int8_t_s_s(g_51, 6))
                { 
                    const int32_t *l_1302 = (void*)0;
                    const int32_t **l_1303 = (void*)0;
                    uint8_t ***l_1304 = &l_1003;
                    g_915[1][0][1] = (l_1302 = l_1302);
                    (*l_967) = (((*l_1217) &= ((void*)0 != l_1304)) & ((((p_15 , (((void*)0 != l_1305) | 8UL)) & 0x6414D7ADE45D415DLL) == 1UL) <= (*l_1008)));
                }
                (*l_909) = ((safe_add_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s(((*l_1313) = p_15), (((*l_967) = ((0xF0L != p_15) && 1L)) || (safe_add_func_int64_t_s_s((((safe_unary_minus_func_int64_t_s((((!(*l_967)) != (safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((*g_957), g_72[4])), l_1322))) <= (*l_1008)))) < l_1323[1]) != (-1L)), 0x3D507F2C38A9B397LL))))) == p_15) != (-7L)) , (*g_894)), 0xECL)) && (*g_957)), (*l_909))) >= 2UL);
            }
            else
            { 
                uint32_t l_1329 = 0xBF1E26D8L;
                int32_t *l_1340 = &l_1049;
                const int16_t l_1379 = 0L;
                if ((safe_lshift_func_int16_t_s_s((((+(safe_rshift_func_int8_t_s_u((((((*g_957) < (l_1329 == l_1329)) && (((safe_lshift_func_uint8_t_u_u((*l_967), 2)) != (safe_rshift_func_uint8_t_u_u((18446744073709551615UL || 0x91B8F294D6834DBFLL), 3))) & (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((***g_155) , p_15), p_15)), (*p_12))))) >= (**g_999)) <= p_15), 4))) && (*g_957)) <= 18446744073709551608UL), p_15)))
                { 
                    const struct S0 **l_1339 = &l_1338[3];
                    (*g_130) = l_1034;
                    (*l_1339) = l_1338[0];
                    (*l_1008) = 0x9855BEA3L;
                }
                else
                { 
                    int32_t *l_1341[2];
                    uint16_t *l_1347 = &l_989;
                    uint16_t *l_1350 = &g_61[3][0][6].f4;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1341[i] = &l_1072;
                    (*g_288) = l_1340;
                    l_1341[1] = ((*g_288) = &l_1052);
                    (*l_967) = ((0xBFL || (*l_916)) == (safe_sub_func_int32_t_s_s(((*g_198) = (~(safe_lshift_func_uint16_t_u_u((--(*l_1347)), ((*l_1350) &= 0x5D42L))))), ((*l_1340) |= ((safe_mul_func_int16_t_s_s((*l_967), (+((p_15 < g_46[4].f4) <= (((*l_1008) = (safe_mod_func_uint16_t_u_u((((~(safe_mod_func_uint32_t_u_u(0x09AD8A5BL, 0x4CD84887L))) , l_1359) | (-1L)), (*l_909)))) > p_15))))) || 1L)))));
                }
                for (l_1027 = 0; (l_1027 >= 53); ++l_1027)
                { 
                    int32_t l_1380 = 0x97A3B52DL;
                    int16_t *l_1381 = &l_970;
                    int16_t *l_1382 = (void*)0;
                    int16_t *l_1383 = &l_1297[1];
                    int8_t l_1384[6] = {9L,9L,9L,9L,9L,9L};
                    int i;
                    (*l_1340) |= (safe_rshift_func_int8_t_s_s(((*p_12) &= (*l_1008)), 2));
                    (*l_1340) ^= ((p_15 <= ((((*l_998) &= ((((g_1250[1] & (65535UL | ((((safe_add_func_int32_t_s_s(((-6L) && (safe_div_func_int8_t_s_s((*l_909), (((safe_rshift_func_int16_t_s_u(((*l_1383) = ((*l_1381) = (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((+((safe_rshift_func_int8_t_s_u(0xF4L, 7)) >= (safe_lshift_func_int16_t_s_u(((l_1379 , l_1380) == 0x5FFDL), 2)))), p_15)), 0x3298L)))), 0)) != p_15) || l_1384[1])))), p_15)) | 0x0168L) & p_15) & (-1L)))) & 0xC9L) != (**g_999)) == (*l_967))) > p_15) & 255UL)) || l_1384[1]);
                    (*l_1008) &= 0xE5EC3CA8L;
                }
            }
            for (l_1052 = 17; (l_1052 > (-7)); --l_1052)
            { 
                union U3 **l_1387 = (void*)0;
                struct S0 l_1401 = {250UL};
                const union U2 l_1408 = {1L};
                uint16_t *l_1422 = (void*)0;
                uint16_t *l_1423 = &g_61[3][0][6].f4;
                int32_t l_1425 = 0x53B57D1BL;
                int32_t l_1426 = 0xA2381111L;
                (*l_967) = ((l_1387 != (void*)0) == (*l_1008));
                if ((*l_916))
                    break;
                if ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((-1L) < ((safe_add_func_uint16_t_u_u((((g_139[0][1][0] , ((*g_957) , &l_1123)) == &l_1184[4][3][0]) , ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((safe_mul_func_int8_t_s_s(((*p_16) = (*p_16)), 9L)) != 0UL) & p_15), 1)), (*l_909))) >= 4UL)), g_141)) & l_1400[3][0])), (*l_909))), (*l_1008))))
                { 
                    (*g_288) = &l_1059;
                }
                else
                { 
                    int32_t *l_1402[6] = {&g_199[0],&l_1400[3][0],&l_1400[3][0],&g_199[0],&l_1400[3][0],&l_1400[3][0]};
                    uint8_t **l_1403[7][3][4] = {{{&l_998,&l_998,(void*)0,(void*)0},{&l_998,&l_998,(void*)0,(void*)0},{(void*)0,&l_998,&l_998,(void*)0}},{{&l_998,&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998,(void*)0},{(void*)0,&l_998,&l_998,&l_998}},{{&l_998,&l_998,(void*)0,&l_998},{&l_998,(void*)0,(void*)0,&l_998},{&l_998,&l_998,&l_998,&l_998}},{{(void*)0,&l_998,&l_998,(void*)0},{&l_998,(void*)0,&l_998,&l_998},{&l_998,&l_998,&l_998,&l_998}},{{(void*)0,&l_998,(void*)0,&l_998},{&l_998,&l_998,(void*)0,&l_998},{&l_998,(void*)0,&l_998,(void*)0}},{{&l_998,&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998,&l_998},{&l_998,&l_998,&l_998,(void*)0}},{{&l_998,&l_998,&l_998,(void*)0},{&l_998,(void*)0,&l_998,&l_998},{&l_998,&l_998,&l_998,(void*)0}}};
                    int i, j, k;
                    (**l_1306) = l_1401;
                    (*g_288) = (l_1287[1][1][0] = l_1402[1]);
                    (*l_1008) = ((void*)0 == l_1403[3][1][2]);
                }
                l_1059 &= (l_1076 ^= (safe_mod_func_int64_t_s_s((0x7AL != ((l_1048 = ((*l_967) = (l_1426 &= (((*l_1217) = ((l_1425 &= (safe_sub_func_uint32_t_u_u(g_51, ((l_1408 , ((safe_rshift_func_uint16_t_u_s(p_15, (((((((*l_1008) = ((*l_1423) ^= (safe_rshift_func_uint8_t_u_u((((((safe_rshift_func_uint8_t_u_s(8UL, (*p_12))) | ((((safe_div_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(g_71, (*g_957))), l_1401.f0)) && (*g_957)), l_1421)) | p_15) ^ 0xF8643F32L) , g_175)) > p_15) < (*g_894)) , l_1401.f0), (**g_999))))) , g_1005[1][4].f0) , 0L) || l_1424[0]) ^ 0x9A2E6AB1L) , g_895))) != l_1408.f0)) != 8L)))) >= p_15)) & (*l_916))))) != p_15)), p_15)));
            }
        }
        l_1008 = &l_1045;
        return (**g_156);
    }
    else
    { 
        uint64_t l_1433 = 18446744073709551609UL;
        int32_t l_1456[4][2][2] = {{{0xE0B79B67L,(-1L)},{0xE1802B08L,0xE0B79B67L}},{{7L,7L},{7L,0xE0B79B67L}},{{0xE1802B08L,(-1L)},{0xE0B79B67L,(-1L)}},{{0xE1802B08L,0xE0B79B67L},{7L,7L}}};
        int64_t *l_1467 = &g_158.f0;
        int i, j, k;
        for (l_958 = 0; (l_958 <= 2); l_958 += 1)
        { 
            int32_t *l_1427 = (void*)0;
            int32_t *l_1428 = &l_1065[2][4][0];
            int32_t *l_1429 = (void*)0;
            int32_t *l_1430 = &l_1050;
            int32_t *l_1431 = &l_1050;
            int32_t *l_1432[5];
            int8_t *l_1438 = (void*)0;
            int32_t l_1441 = 0x3B5A7AF3L;
            int i;
            for (i = 0; i < 5; i++)
                l_1432[i] = &g_199[0];
            l_1433++;
            for (l_1433 = 0; (l_1433 <= 5); l_1433 += 1)
            { 
                int8_t *l_1439 = &g_139[3][2][1];
                union U1 l_1440 = {1L};
                int i;
                (*l_1430) &= (((((safe_sub_func_uint64_t_u_u((((*p_14) = g_881[l_958]) <= 1UL), 0L)) != ((l_1440 , ((0UL == l_1441) < (*l_916))) >= 4294967295UL)) < p_15) == 0xAE72E6FCFCDF5642LL) < p_15);
                return (*g_157);
            }
            (*l_1431) = ((*l_967) = ((safe_div_func_int64_t_s_s(((*l_909) &= (0x4CL >= p_15)), (*g_957))) <= (((*l_916) & p_15) != (safe_mul_func_int8_t_s_s((*p_12), (*l_967))))));
        }
        for (l_928.f3 = 0; (l_928.f3 <= 0); l_928.f3 += 1)
        { 
            uint32_t l_1458 = 0x1D16B4C9L;
            struct S0 **l_1463 = &g_130;
            struct S0 ***l_1462 = &l_1463;
            struct S0 **** const l_1461 = &l_1462;
            int i;
            for (g_1235 = 0; (g_1235 <= 1); g_1235 += 1)
            { 
                union U1 l_1450[6] = {{8L},{8L},{8L},{8L},{8L},{8L}};
                int32_t l_1454 = 0x19ED0526L;
                int32_t l_1455 = 0x4B8E8923L;
                int32_t l_1457[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1457[i] = 1L;
                for (l_1044 = 1; (l_1044 >= 0); l_1044 -= 1)
                { 
                    int i, j, k;
                    g_199[l_1044] = (safe_div_func_uint64_t_u_u(l_1065[(l_1044 + 4)][(l_1044 + 2)][l_928.f3], (--(*l_1217))));
                    return l_1450[1];
                }
                for (l_1433 = 0; (l_1433 <= 1); l_1433 += 1)
                { 
                    int32_t *l_1451 = &l_1400[3][0];
                    int32_t *l_1452 = &l_1065[2][4][0];
                    int32_t *l_1453[2][2];
                    struct S0 ****l_1465 = &l_1462;
                    struct S0 *****l_1464 = &l_1465;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1453[i][j] = (void*)0;
                    }
                    --l_1458;
                    (*l_1464) = l_1461;
                }
            }
            g_199[(l_928.f3 + 1)] ^= (safe_unary_minus_func_int64_t_s(((*l_1467) |= ((251UL > (&l_958 == l_1467)) == 5UL))));
            for (l_1052 = 0; (l_1052 >= 0); l_1052 -= 1)
            { 
                int32_t l_1469 = (-8L);
                uint32_t l_1488 = 0xA46EFB4EL;
                if (p_15)
                    break;
                if (l_1468)
                    break;
                if (l_1469)
                    break;
                for (l_1050 = 1; (l_1050 >= 0); l_1050 -= 1)
                { 
                    int32_t **l_1493[5][5][6] = {{{&l_967,(void*)0,&l_967,&l_967,&l_967,(void*)0},{(void*)0,(void*)0,&l_909,(void*)0,(void*)0,(void*)0},{&l_967,&l_967,&l_967,(void*)0,&l_967,&l_967},{(void*)0,&l_967,&l_909,&l_967,(void*)0,&l_967},{&l_967,(void*)0,&l_967,&l_967,&l_967,(void*)0}},{{(void*)0,(void*)0,&l_909,(void*)0,(void*)0,(void*)0},{&l_967,&l_967,&l_967,(void*)0,&l_967,&l_967},{(void*)0,&l_967,&l_909,&l_967,(void*)0,&l_967},{&l_967,(void*)0,&l_967,&l_967,&l_967,(void*)0},{(void*)0,(void*)0,&l_909,(void*)0,(void*)0,(void*)0}},{{&l_967,&l_967,&l_967,(void*)0,&l_967,&l_967},{(void*)0,&l_967,&l_909,&l_967,(void*)0,&l_967},{&l_967,(void*)0,&l_967,&l_967,&l_967,(void*)0},{(void*)0,(void*)0,&l_909,(void*)0,(void*)0,(void*)0},{&l_967,&l_967,&l_967,(void*)0,&l_967,&l_967}},{{(void*)0,&l_967,&l_909,&l_967,(void*)0,&l_967},{&l_967,(void*)0,&l_967,&l_967,&l_967,(void*)0},{(void*)0,(void*)0,&l_909,(void*)0,(void*)0,(void*)0},{&l_967,&l_967,&l_967,(void*)0,&l_967,&l_967},{(void*)0,&l_967,&l_909,&l_967,(void*)0,&l_967}},{{&l_967,(void*)0,&l_967,&l_967,&l_967,(void*)0},{(void*)0,(void*)0,&l_909,(void*)0,(void*)0,(void*)0},{&l_967,&l_967,&l_967,(void*)0,&l_967,&l_967},{(void*)0,&l_967,&l_909,&l_967,(void*)0,&l_967},{&l_967,(void*)0,&l_967,&l_967,&l_967,(void*)0}}};
                    int i, j, k;
                    (*l_967) = (g_199[l_928.f3] = (l_1065[(l_1050 + 4)][(l_1050 + 3)][l_928.f3] ^ (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u(18446744073709551612UL, 0xDF3C24E5CC269816LL)) ^ (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(p_15, (safe_sub_func_int16_t_s_s((((0x23A1L != l_1488) == ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((0x58L >= 4L) == l_1488), 4)), (*p_16))) , (*l_967))) <= 0x8A73L), l_1065[(l_1050 + 4)][(l_1050 + 3)][l_928.f3])))), g_881[1])), 0x0668BF6FL))), p_15)), 0L)) >= (*l_916)), 7)), p_15))));
                    l_909 = ((*g_288) = &l_1469);
                }
                for (g_175 = 0; (g_175 <= 1); g_175 += 1)
                { 
                    int16_t *l_1504 = &g_46[4].f3;
                    int i;
                    (*l_967) |= (g_1250[l_928.f3] , (safe_add_func_int8_t_s_s(0xAAL, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((18446744073709551615UL >= (((*l_1504) = (safe_rshift_func_uint8_t_u_u(g_209[(g_175 + 2)], 7))) >= (safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((void*)0 != &g_1235), 0x12D163512814ECB6LL)), 0xBA47E338L)), 0x61L)))) & (*p_14)), 0UL)), 13)), 5UL)))));
                }
            }
        }
    }
    return (*g_157);
}



static int16_t  func_24(union U1  p_25, int32_t  p_26)
{ 
    p_26 &= 3L;
    return g_881[0];
}



static union U1  func_27(int8_t * p_28, int8_t * p_29)
{ 
    uint32_t l_31[5];
    int8_t *l_672 = (void*)0;
    int32_t ****l_887 = &g_242;
    int32_t *l_890 = &g_199[1];
    union U1 l_891 = {0xF8C68E3034763345LL};
    int i;
    for (i = 0; i < 5; i++)
        l_31[i] = 0xD76DF3E2L;
    g_886 = ((l_31[1] == func_32(l_31[0], (l_31[4] , func_37(((safe_mod_func_int64_t_s_s((!g_3), 0xEBF085FFFF323E62LL)) , func_42(((((l_31[1] , p_28) == (void*)0) > (*p_29)) < 0xE53BL))))), g_10.f0, l_672)) , l_31[1]);
    (*l_890) = ((l_887 != l_887) , (l_31[1] & (((**l_887) == (void*)0) < g_139[0][1][0])));
    return l_891;
}



static int8_t  func_32(int32_t  p_33, int8_t * p_34, uint32_t  p_35, int8_t * p_36)
{ 
    union U2 **l_673 = &g_270;
    int32_t l_674[4][2][1] = {{{0xFA3F4ACDL},{0x658D188DL}},{{0xFA3F4ACDL},{0x658D188DL}},{{0xFA3F4ACDL},{0x658D188DL}},{{0xFA3F4ACDL},{0x658D188DL}}};
    uint16_t l_680 = 0xA144L;
    union U1 **l_704 = &g_157;
    int64_t l_742[3];
    int8_t l_744 = (-1L);
    int16_t l_745 = 1L;
    uint16_t l_748 = 65535UL;
    uint64_t l_775[2];
    int32_t l_797 = (-1L);
    const struct S0 l_819 = {0UL};
    int32_t ***l_820 = (void*)0;
    uint8_t l_824 = 0x1AL;
    uint16_t l_825 = 0xB826L;
    uint8_t l_840 = 0x50L;
    int32_t *l_879 = (void*)0;
    int32_t *l_880[7];
    int16_t l_882 = 1L;
    uint8_t l_883 = 0x52L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_742[i] = 0xAFE4EEB2F5733F91LL;
    for (i = 0; i < 2; i++)
        l_775[i] = 0UL;
    for (i = 0; i < 7; i++)
        l_880[i] = &g_199[1];
    if (((l_673 = (void*)0) == &g_270))
    { 
        int32_t *l_675 = &l_674[0][0][0];
        int32_t *l_676 = &l_674[1][1][0];
        int32_t *l_677 = &l_674[1][1][0];
        int32_t *l_678 = (void*)0;
        int32_t *l_679[7][3] = {{&l_674[1][1][0],&l_674[1][1][0],&l_674[1][1][0]},{&g_199[1],&g_199[1],&g_199[1]},{&l_674[1][1][0],&l_674[1][1][0],&l_674[1][1][0]},{&g_199[1],&g_199[1],&g_199[1]},{&l_674[1][1][0],&l_674[1][1][0],&l_674[1][1][0]},{&g_199[1],&g_199[1],&g_199[1]},{&l_674[1][1][0],&l_674[1][1][0],&l_674[1][1][0]}};
        int i, j;
        l_674[1][1][0] = l_674[1][1][0];
        --l_680;
    }
    else
    { 
        int8_t l_702 = 0xB9L;
        int32_t l_706 = 0xC15B15F5L;
        int32_t l_724 = 0L;
        int32_t l_727 = 0xDB626EDAL;
        int32_t l_728 = 0x46CDC9A5L;
        int32_t l_729 = (-4L);
        int32_t l_730 = 0x64D8888EL;
        int32_t l_731 = 1L;
        int32_t l_733 = 0xADFCC1C3L;
        int32_t l_734 = 0x664BA7E0L;
        int32_t l_735 = 5L;
        int32_t l_737[3][1];
        int32_t *l_751 = &l_729;
        int64_t l_752 = 0L;
        union U2 *l_768 = &g_10;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_737[i][j] = 0x2F852B84L;
        }
        for (g_101 = (-19); (g_101 >= (-22)); --g_101)
        { 
            uint16_t l_701 = 1UL;
            int32_t l_709 = 0x6CF08B31L;
            int32_t l_710 = 0x817D3894L;
            int32_t l_717 = 0x99AA1F23L;
            int32_t l_725 = 0x9C9630B1L;
            int32_t l_726 = 0x737072B1L;
            int32_t l_732 = 0xA800217EL;
            int32_t l_736 = (-4L);
            int32_t l_738 = (-8L);
            int32_t l_739 = 0xE4F82B19L;
            int32_t l_740[3][6][2] = {{{0xC332A265L,0xA31A75BAL},{0xC332A265L,0xC332A265L},{0xC332A265L,0xA31A75BAL},{0xC332A265L,0xC332A265L},{0xC332A265L,0xA31A75BAL},{0xC332A265L,0xC332A265L}},{{0xC332A265L,0xA31A75BAL},{0xC332A265L,0xC332A265L},{0xC332A265L,0xA31A75BAL},{0xC332A265L,0xC332A265L},{0xC332A265L,0xA31A75BAL},{0xC332A265L,0xC332A265L}},{{0xC332A265L,0xA31A75BAL},{0xC332A265L,0xC332A265L},{0xC332A265L,0xA31A75BAL},{0xC332A265L,0xC332A265L},{0xC332A265L,0xA31A75BAL},{0xC332A265L,0xC332A265L}}};
            int16_t l_741 = (-1L);
            int8_t l_743[1][4];
            int64_t l_747 = (-8L);
            union U3 l_780[6][7][6] = {{{{0x8D20DBB2FC4E3FE0LL},{-1L},{0x2FCABCEC12373062LL},{7L},{-1L},{1L}},{{-5L},{1L},{9L},{-7L},{9L},{1L}},{{1L},{0x2B5BB886E45F0CDBLL},{0x2FCABCEC12373062LL},{7L},{9L},{0x2FCABCEC12373062LL}},{{1L},{9L},{9L},{-7L},{0x269E97A347AA6C83LL},{-1L}},{{-5L},{9L},{0x2B5BB886E45F0CDBLL},{7L},{9L},{9L}},{{0x8D20DBB2FC4E3FE0LL},{0x2B5BB886E45F0CDBLL},{0x2B5BB886E45F0CDBLL},{0x8D20DBB2FC4E3FE0LL},{9L},{-1L}},{{-7L},{1L},{9L},{0x8D20DBB2FC4E3FE0LL},{-1L},{0x2FCABCEC12373062LL}}},{{{0x8D20DBB2FC4E3FE0LL},{-1L},{0x2FCABCEC12373062LL},{7L},{-1L},{1L}},{{-5L},{1L},{9L},{-7L},{9L},{1L}},{{1L},{0x2B5BB886E45F0CDBLL},{0x2FCABCEC12373062LL},{7L},{9L},{0x2FCABCEC12373062LL}},{{1L},{9L},{9L},{-7L},{0x269E97A347AA6C83LL},{-1L}},{{-5L},{9L},{0x2B5BB886E45F0CDBLL},{7L},{9L},{9L}},{{0x8D20DBB2FC4E3FE0LL},{0x2B5BB886E45F0CDBLL},{0x2B5BB886E45F0CDBLL},{0x8D20DBB2FC4E3FE0LL},{9L},{-1L}},{{-7L},{1L},{9L},{0x8D20DBB2FC4E3FE0LL},{-1L},{0x2FCABCEC12373062LL}}},{{{0x8D20DBB2FC4E3FE0LL},{-1L},{0x2FCABCEC12373062LL},{7L},{-1L},{1L}},{{-5L},{1L},{9L},{-7L},{9L},{1L}},{{1L},{0x2B5BB886E45F0CDBLL},{0x2FCABCEC12373062LL},{7L},{9L},{0x2FCABCEC12373062LL}},{{1L},{9L},{9L},{-7L},{0x269E97A347AA6C83LL},{-1L}},{{-5L},{9L},{0x2B5BB886E45F0CDBLL},{7L},{9L},{9L}},{{0x8D20DBB2FC4E3FE0LL},{0x2B5BB886E45F0CDBLL},{0x2B5BB886E45F0CDBLL},{0x8D20DBB2FC4E3FE0LL},{9L},{-1L}},{{-7L},{-5L},{-1L},{0x2B5BB886E45F0CDBLL},{3L},{8L}}},{{{0x2B5BB886E45F0CDBLL},{3L},{8L},{9L},{3L},{-5L}},{{-1L},{-5L},{-5L},{0x2FCABCEC12373062LL},{-5L},{-5L}},{{0x269E97A347AA6C83LL},{-1L},{8L},{9L},{-1L},{8L}},{{0x269E97A347AA6C83LL},{-5L},{-1L},{0x2FCABCEC12373062LL},{1L},{3L}},{{-1L},{-5L},{-1L},{9L},{-1L},{-1L}},{{0x2B5BB886E45F0CDBLL},{-1L},{-1L},{0x2B5BB886E45F0CDBLL},{-5L},{3L}},{{0x2FCABCEC12373062LL},{-5L},{-1L},{0x2B5BB886E45F0CDBLL},{3L},{8L}}},{{{0x2B5BB886E45F0CDBLL},{3L},{8L},{9L},{3L},{-5L}},{{-1L},{-5L},{-5L},{0x2FCABCEC12373062LL},{-5L},{-5L}},{{0x269E97A347AA6C83LL},{-1L},{8L},{9L},{-1L},{8L}},{{0x269E97A347AA6C83LL},{-5L},{-1L},{0x2FCABCEC12373062LL},{1L},{3L}},{{-1L},{-5L},{-1L},{9L},{-1L},{-1L}},{{0x2B5BB886E45F0CDBLL},{-1L},{-1L},{0x2B5BB886E45F0CDBLL},{-5L},{3L}},{{0x2FCABCEC12373062LL},{-5L},{-1L},{0x2B5BB886E45F0CDBLL},{3L},{8L}}},{{{0x2B5BB886E45F0CDBLL},{3L},{8L},{9L},{3L},{-5L}},{{-1L},{-5L},{-5L},{0x2FCABCEC12373062LL},{-5L},{-5L}},{{0x269E97A347AA6C83LL},{-1L},{8L},{9L},{-1L},{8L}},{{0x269E97A347AA6C83LL},{-5L},{-1L},{0x2FCABCEC12373062LL},{1L},{3L}},{{-1L},{-5L},{-1L},{9L},{-1L},{-1L}},{{0x2B5BB886E45F0CDBLL},{-1L},{-1L},{0x2B5BB886E45F0CDBLL},{-5L},{3L}},{{0x2FCABCEC12373062LL},{-5L},{-1L},{0x2B5BB886E45F0CDBLL},{3L},{8L}}}};
            uint8_t *l_785[3][3] = {{&g_594,&g_71,&g_71},{&g_594,&g_71,&g_71},{&g_594,&g_71,&g_71}};
            uint16_t *l_796 = (void*)0;
            uint16_t *l_798 = &l_748;
            uint64_t *l_805 = (void*)0;
            uint64_t *l_806 = &g_209[1];
            uint64_t *l_807 = &g_808;
            uint32_t l_809 = 7UL;
            int16_t *l_810[6][2] = {{&g_46[4].f3,&g_61[3][0][6].f3},{&g_10.f0,&g_61[3][0][6].f3},{&g_46[4].f3,&g_10.f0},{&g_46[4].f3,&g_46[4].f3},{&g_46[4].f3,&g_10.f0},{&g_46[4].f3,&g_61[3][0][6].f3}};
            int32_t *l_811 = &l_709;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_743[i][j] = 0x60L;
            }
            for (g_594 = 0; (g_594 <= 34); g_594 = safe_add_func_uint64_t_u_u(g_594, 8))
            { 
                union U1 **l_688 = &g_157;
                union U2 ** const *l_697 = &l_673;
                union U2 ** const **l_698 = &l_697;
                int8_t *l_703 = &l_702;
                uint32_t *l_705 = &g_415;
                int32_t *l_707 = (void*)0;
                int32_t *l_708 = &g_199[1];
                int32_t *l_711 = (void*)0;
                int32_t *l_712 = &g_199[1];
                int32_t *l_713 = &l_709;
                int32_t *l_714 = &l_674[2][1][0];
                int32_t *l_715 = &g_199[1];
                int32_t *l_716 = (void*)0;
                int32_t *l_718 = &g_199[1];
                int32_t *l_719 = &l_710;
                int32_t *l_720 = &l_717;
                int32_t *l_721 = &l_710;
                int32_t *l_722 = &l_710;
                int32_t *l_723[2];
                int32_t l_746 = 0x122F70BEL;
                int i;
                for (i = 0; i < 2; i++)
                    l_723[i] = (void*)0;
                (*l_708) |= (l_706 |= (!((((*l_705) = (((l_688 = l_688) == ((safe_add_func_int8_t_s_s(((*l_703) = (safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((((((*l_698) = l_697) == (void*)0) > 0UL) , ((*p_34) = (g_699 == (l_701 , &g_700[0])))), l_701)) && 0x5CL) || l_702), 1L)), p_35))), 0xE4L)) , l_704)) , l_701)) , l_702) & g_145)));
                if (l_674[1][1][0])
                    break;
                l_748--;
                if (p_33)
                { 
                    int64_t *l_763 = &l_742[1];
                    int32_t l_767 = 0xF39F374FL;
                    (*g_288) = l_751;
                    if (l_752)
                        continue;
                    l_767 = ((*l_751) = (((((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_209[3], ((*l_714) > ((safe_div_func_uint32_t_u_u(((*l_719) < (-9L)), (-1L))) <= ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((*l_763) = l_736), ((safe_mod_func_int16_t_s_s((!l_674[1][1][0]), 0x1575L)) == l_743[0][2]))) ^ l_674[1][1][0]), 4)) , p_35))))), 1)) == g_61[3][0][6].f4) , 0x57828524L) & p_33) < (*l_751)));
                }
                else
                { 
                    l_768 = l_768;
                    if (p_35)
                        continue;
                    if (l_743[0][3])
                        break;
                    if (l_744)
                        continue;
                }
            }
            (*l_811) = ((g_61[3][0][6].f3 ^= ((l_674[3][1][0] = p_33) | ((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint16_t_u_u((((*l_751) |= ((*l_807) |= ((safe_rshift_func_int8_t_s_u(l_775[1], (safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((&l_744 != p_36), (l_780[3][2][4] , ((*l_806) = ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((g_594++), 1)) == (((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_780[3][2][4].f3, (((*l_798)++) >= ((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u(0xA2CFBEF205D4CFC2LL, g_51)), l_775[0])) & l_797)))), p_33)), l_710)) & 0xF9ADC387572F2271LL), 13)) < l_744) == 0xAF0C654AL)), 5)) || 0xB2819CAAL))))), 11)))) > p_33))) && l_809), (-4L))) != p_35) & 0xC5CBL), p_33)) == p_33))) ^ g_51);
            (*g_288) = &l_717;
            if (p_35)
                continue;
        }
    }
    l_797 |= (safe_mul_func_int8_t_s_s((+((((((l_819 , l_820) == (void*)0) == (l_775[1] <= ((((safe_mod_func_uint8_t_u_u(((((+255UL) || 0xAAL) , l_824) != g_126[3][1][3].f0), g_552)) ^ p_35) == l_674[1][1][0]) || p_33))) , p_33) == p_33) || 0L)), l_825));
    for (g_175 = 22; (g_175 == 18); g_175 = safe_sub_func_int8_t_s_s(g_175, 1))
    { 
        int32_t *l_828 = &g_199[1];
        int32_t l_829 = (-7L);
        int32_t *l_830 = &g_199[1];
        int32_t *l_831 = &l_797;
        int32_t *l_832 = &g_199[1];
        int32_t *l_833 = &l_829;
        int32_t *l_834 = &g_199[0];
        int32_t *l_835 = &l_674[1][1][0];
        int32_t *l_836 = (void*)0;
        int32_t *l_837[4] = {&l_674[1][1][0],&l_674[1][1][0],&l_674[1][1][0],&l_674[1][1][0]};
        int32_t l_838 = (-1L);
        int8_t l_839 = 0x9AL;
        int i;
        l_828 = l_828;
        l_829 |= ((*l_828) = p_33);
        --l_840;
        for (g_123 = 0; (g_123 <= 1); g_123 += 1)
        { 
            struct S0 l_843 = {255UL};
            int32_t *l_844 = &l_797;
            union U1 ***l_849 = &l_704;
        }
    }
    --l_883;
    return (*p_34);
}



static int8_t * func_37(int64_t  p_38)
{ 
    union U3 **l_77 = (void*)0;
    int32_t l_96 = 1L;
    struct S0 l_135 = {0x24L};
    union U1 ** const l_160 = &g_157;
    union U1 ** const *l_159 = &l_160;
    int8_t *l_171[2];
    struct S0 *l_173 = &l_135;
    union U2 l_194 = {0x419DL};
    int32_t l_206 = (-10L);
    uint16_t *l_255 = &l_194.f2;
    union U2 **l_272 = &g_270;
    struct S0 l_328 = {0UL};
    union U1 **l_344 = (void*)0;
    int16_t l_357 = 4L;
    int32_t l_361 = 0x4B045EAFL;
    int32_t l_363[2];
    int16_t l_366 = (-3L);
    uint64_t l_371 = 0x4FC91DA725512561LL;
    int32_t l_407 = 0x873C17FEL;
    int32_t *l_418[4];
    int8_t l_445 = 0x47L;
    int16_t *l_455 = &g_46[4].f3;
    int32_t l_466 = 0L;
    int32_t l_531 = 0L;
    union U1 *****l_604 = (void*)0;
    int32_t * const *l_632[5][4];
    int32_t * const **l_631 = &l_632[2][1];
    uint32_t l_656 = 0xE97619B8L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_171[i] = &g_72[3];
    for (i = 0; i < 2; i++)
        l_363[i] = 0L;
    for (i = 0; i < 4; i++)
        l_418[i] = &l_361;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            l_632[i][j] = &l_418[0];
    }
lbl_651:
    for (g_3 = 0; (g_3 <= 2); g_3 += 1)
    { 
        int32_t l_122 = 0xB578CF17L;
        struct S0 *l_129 = (void*)0;
        uint8_t *l_168 = &l_135.f0;
        int32_t l_211 = 2L;
        uint16_t *l_253 = &g_46[4].f4;
        uint32_t *l_266 = &g_124;
        uint32_t l_284 = 5UL;
        union U2 ***l_294 = &g_269[3][0][1];
        int16_t *l_305 = &l_194.f0;
        int32_t l_315 = 0xF5DF2E6AL;
        union U1 l_316 = {-1L};
        int32_t l_367 = 0xE9B5A269L;
        int32_t l_368 = 0L;
        int32_t l_369[1][3][2] = {{{1L,1L},{1L,1L},{1L,1L}}};
        union U3 **l_376 = (void*)0;
        union U3 ** const l_377 = (void*)0;
        union U1 * const *l_386[5][2] = {{&g_157,&g_157},{&g_157,&g_157},{&g_157,&g_157},{&g_157,&g_157},{&g_157,&g_157}};
        union U1 * const **l_385[7][2][6] = {{{&l_386[3][0],&l_386[3][0],&l_386[3][0],&l_386[3][0],(void*)0,&l_386[3][1]},{(void*)0,&l_386[3][0],&l_386[0][1],&l_386[3][0],&l_386[3][0],&l_386[0][1]}},{{(void*)0,(void*)0,&l_386[0][0],&l_386[3][0],&l_386[4][0],&l_386[0][1]},{&l_386[3][0],&l_386[3][0],&l_386[3][0],&l_386[0][0],&l_386[3][0],(void*)0}},{{(void*)0,(void*)0,&l_386[3][0],(void*)0,&l_386[3][0],&l_386[4][0]},{&l_386[3][0],(void*)0,(void*)0,(void*)0,&l_386[3][0],&l_386[3][0]}},{{(void*)0,&l_386[3][0],&l_386[3][0],&l_386[0][0],&l_386[3][0],&l_386[3][0]},{(void*)0,(void*)0,&l_386[4][0],&l_386[3][0],&l_386[3][0],&l_386[3][0]}},{{&l_386[3][0],(void*)0,&l_386[3][0],&l_386[3][0],&l_386[3][0],&l_386[3][0]},{&l_386[3][0],&l_386[3][0],(void*)0,&l_386[3][0],&l_386[4][0],&l_386[4][0]}},{{(void*)0,&l_386[3][0],&l_386[3][0],&l_386[0][0],&l_386[3][0],(void*)0},{(void*)0,(void*)0,&l_386[3][0],(void*)0,&l_386[3][0],&l_386[4][0]}},{{&l_386[3][0],(void*)0,(void*)0,(void*)0,&l_386[3][0],&l_386[3][0]},{(void*)0,&l_386[3][0],&l_386[3][0],&l_386[0][0],&l_386[3][0],&l_386[3][0]}}};
        uint32_t l_395 = 6UL;
        int32_t l_405 = 0x88E547E5L;
        uint32_t l_446 = 0xB0D1B0B1L;
        int i, j, k;
    }
    if ((((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((p_38 <= g_61[3][0][6].f0), ((safe_add_func_uint16_t_u_u(p_38, g_61[3][0][6].f4)) != ((*l_455) = p_38)))), p_38)) != 0x3792C8E8L) | 0UL))
    { 
        int8_t *l_456[2][6] = {{&g_139[0][1][0],&g_139[0][1][0],&l_445,&g_139[0][2][1],&l_445,&g_139[0][1][0]},{&l_445,&g_175,&g_139[0][2][1],&g_139[0][2][1],&g_175,&l_445}};
        int i, j;
        return &g_139[0][1][0];
    }
    else
    { 
        int32_t l_457 = (-1L);
        int32_t l_458[4][2][3] = {{{0x88E46E98L,0L,0xE2897764L},{0xC252F9A1L,0xC252F9A1L,0x9B50F9AFL}},{{0x88E46E98L,0L,0xE2897764L},{0xC252F9A1L,0xC252F9A1L,0x9B50F9AFL}},{{0x88E46E98L,0L,0xE2897764L},{0xC252F9A1L,0xC252F9A1L,0x9B50F9AFL}},{{0x88E46E98L,0L,0xE2897764L},{0xC252F9A1L,0xC252F9A1L,0x9B50F9AFL}}};
        union U2 ***l_480 = &g_269[0][1][4];
        uint16_t l_487 = 65535UL;
        int32_t *l_512 = &l_206;
        union U3 l_521 = {0x33EDAF9AFD831B3BLL};
        int64_t l_566 = 0L;
        union U1 ** const *l_596 = &l_344;
        int32_t l_597 = 9L;
        int8_t *l_616 = (void*)0;
        union U1 *****l_638 = &g_603;
        uint16_t l_646 = 65534UL;
        uint16_t l_652 = 0x29C6L;
        uint32_t l_669[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_669[i] = 9UL;
lbl_488:
        g_459++;
        for (l_407 = 0; (l_407 != 5); l_407 = safe_add_func_int8_t_s_s(l_407, 5))
        { 
            uint8_t *l_467[3][6] = {{(void*)0,&g_141,(void*)0,&g_141,(void*)0,&g_141},{&g_126[3][1][3].f0,&g_141,&g_126[3][1][3].f0,&g_141,&g_126[3][1][3].f0,&g_141},{(void*)0,&g_141,(void*)0,&g_141,(void*)0,&g_141}};
            const int32_t l_485 = 0x3BE6C951L;
            uint32_t l_486 = 4294967287UL;
            uint32_t l_511 = 1UL;
            int32_t *l_513[3][3] = {{&g_199[1],&g_199[1],&g_199[1]},{&l_206,&l_206,&l_206},{&g_199[1],&g_199[1],&g_199[1]}};
            int32_t l_529 = (-9L);
            struct S0 l_553 = {2UL};
            union U2 l_563 = {0xD423L};
            int i, j;
        }
        if ((safe_rshift_func_uint8_t_u_s((p_38 || ((void*)0 == &g_139[0][1][0])), 0)))
        { 
            uint32_t l_571[5] = {6UL,6UL,6UL,6UL,6UL};
            int i;
            (*l_512) &= 1L;
            (*g_130) = (*g_130);
            ++l_571[1];
            for (g_124 = 9; (g_124 == 60); ++g_124)
            { 
                uint64_t *l_578 = &g_209[0];
                (*g_198) ^= (l_571[1] | (safe_div_func_int64_t_s_s(0x6B535024448292A6LL, ((*l_578)--))));
            }
        }
        else
        { 
            int32_t l_595 = (-1L);
            int8_t *l_621 = &g_72[2];
            if (p_38)
                goto lbl_488;
            (*g_198) = (safe_lshift_func_int16_t_s_u(((((safe_div_func_int64_t_s_s(p_38, (*l_512))) , (((safe_mul_func_int16_t_s_s(((*l_455) &= (((safe_unary_minus_func_uint8_t_u(247UL)) && ((safe_rshift_func_uint16_t_u_s((g_61[3][0][6].f4 > ((((safe_sub_func_int8_t_s_s(p_38, ((safe_mul_func_int8_t_s_s(p_38, ((0xF3L != g_594) ^ p_38))) || 1UL))) < g_61[3][0][6].f3) | g_3) <= l_595)), g_175)) >= 0xA66D3905CBC936BALL)) & p_38)), 0x600FL)) , (-8L)) >= p_38)) , (void*)0) != l_596), l_597));
            for (p_38 = 0; (p_38 > 23); p_38 = safe_add_func_int8_t_s_s(p_38, 2))
            { 
                union U2 l_607 = {0xB317L};
                int8_t *l_618[1][7] = {{&g_72[6],(void*)0,&g_72[6],&g_72[6],(void*)0,&g_72[6],&g_72[6]}};
                int8_t **l_622 = &l_618[0][6];
                uint32_t *l_629 = &g_123;
                uint16_t l_630 = 0xDA74L;
                int32_t * const ***l_633 = &l_631;
                int i, j;
                for (g_123 = 0; (g_123 == 18); ++g_123)
                { 
                    const union U1 ****l_609 = (void*)0;
                    const union U1 **** const *l_608 = &l_609;
                    int8_t **l_617[7][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,&l_616,(void*)0},{&l_616,(void*)0,(void*)0,(void*)0,(void*)0,&l_616},{&l_616,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_616,&l_616},{(void*)0,(void*)0,(void*)0,(void*)0,&l_616,(void*)0},{&l_616,(void*)0,(void*)0,(void*)0,(void*)0,&l_616},{&l_616,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int64_t *l_619 = &g_46[4].f0;
                    int i, j;
                    l_604 = g_602;
                    (**g_288) &= (((safe_add_func_int64_t_s_s((((l_607 , l_608) == l_604) , ((safe_div_func_uint32_t_u_u((+(safe_add_func_int64_t_s_s(p_38, (safe_unary_minus_func_int64_t_s(((*l_619) = (p_38 & ((l_618[0][0] = l_616) == &g_139[0][1][0])))))))), l_595)) && 4L)), l_607.f0)) & 0x6CL) > 0x748FL);
                    (*g_198) ^= (&g_101 == ((**l_272) , &g_101));
                }
                (*l_633) = (((+((l_616 = ((*l_622) = l_621)) == &g_3)) && (g_3 , (safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((*l_629) = (p_38 , (safe_lshift_func_int16_t_s_u((p_38 | (0xB4L ^ 1L)), 14)))), g_46[4].f4)), l_630)))) , l_631);
                return l_621;
            }
        }
        (*g_130) = (*l_173);
        for (g_101 = 17; (g_101 >= 8); g_101 = safe_sub_func_uint64_t_u_u(g_101, 2))
        { 
            union U1 *l_636 = &g_158;
            struct S0 **l_637 = &l_173;
            int32_t ****l_648 = &g_242;
            int32_t l_653 = 7L;
            int32_t l_654 = 0x9B8C49B2L;
            (*l_160) = (**g_155);
            g_103 = ((**g_155) = l_636);
            (*l_637) = &g_126[0][2][4];
            if (((l_604 = l_638) != &g_603))
            { 
                uint64_t l_640 = 0x99CAD95F73A6249ELL;
                int32_t *** const *l_641[5] = {&g_245,&g_245,&g_245,&g_245,&g_245};
                uint64_t *l_642 = &l_371;
                uint64_t *l_643 = &g_209[0];
                int64_t *l_647 = &g_61[3][0][6].f0;
                int i;
                if ((**g_288))
                    break;
                (*g_198) ^= (p_38 < (!p_38));
                (**g_288) = ((p_38 == ((l_640 ^ (((*l_512) = (((((*l_643) &= ((*l_642) = ((&g_242 != l_641[4]) , (*l_512)))) || ((((((safe_sub_func_uint8_t_u_u((((((((*l_647) ^= l_646) , l_648) != l_648) != 6UL) > p_38) < p_38), 0x58L)) ^ 1L) , p_38) == g_71) ^ 0x29C4DC5D2359900FLL) < p_38)) == p_38) < g_126[3][1][3].f0)) | 0xE4E7L)) ^ p_38)) <= p_38);
                for (g_175 = 0; (g_175 <= 17); g_175 = safe_add_func_uint64_t_u_u(g_175, 2))
                { 
                    if (g_594)
                        goto lbl_651;
                }
                l_652 &= p_38;
            }
            else
            { 
                int64_t l_655 = 0x7E83C21C5AC1E048LL;
                uint32_t *l_668 = &g_124;
                (*l_173) = (*g_130);
                l_656--;
                l_458[3][1][2] &= ((((safe_mul_func_int8_t_s_s((((*l_512) = ((***l_631) = ((&g_145 != (void*)0) && (safe_sub_func_int32_t_s_s(p_38, ((*l_668) = ((1L | (((l_655 <= (!(p_38 > ((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(p_38, p_38)), 5)) < 6L)))) && p_38) > 247UL)) , p_38))))))) == l_669[0]), p_38)) && 0x0854L) < 0xF7L) , (**g_288));
                if ((*l_512))
                    break;
            }
            for (p_38 = 0; (p_38 <= 2); p_38 += 1)
            { 
                int32_t *l_670 = &l_96;
                for (g_552 = 0; (g_552 <= 1); g_552 += 1)
                { 
                    union U3 **l_671 = &g_60[(g_552 + 1)];
                    int i;
                    if ((*l_512))
                        break;
                    (*g_288) = l_670;
                    (*l_671) = g_60[(g_552 + 1)];
                }
                (*l_272) = (*l_272);
            }
        }
    }
    return &g_102;
}



static int64_t  func_42(int32_t  p_43)
{ 
    int32_t l_44[5];
    union U3 **l_47 = &g_45;
    int32_t *l_48 = &l_44[2];
    int32_t *l_49 = (void*)0;
    int32_t *l_50 = &l_44[4];
    int i;
    for (i = 0; i < 5; i++)
        l_44[i] = (-7L);
lbl_75:
    for (g_3 = 0; (g_3 <= 4); g_3 += 1)
    { 
        int i;
        return l_44[g_3];
    }
lbl_76:
    (*l_47) = g_45;
    g_51++;
    for (g_3 = 0; (g_3 < 19); g_3 = safe_add_func_uint8_t_u_u(g_3, 7))
    { 
        int16_t *l_73 = &g_46[4].f3;
        int32_t l_74 = 0x7312B8DCL;
        (*l_47) = ((((safe_sub_func_int32_t_s_s((((p_43 <= (safe_add_func_int16_t_s_s((5L < ((*l_47) != (g_60[1] = &g_46[3]))), (!(safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(p_43, 5)) >= g_61[3][0][6].f1), (((*l_73) ^= (((g_72[6] = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((p_43 ^ 0x8AFAL) || (-1L)), 0x5809L)), g_71))) & p_43) ^ 5UL)) > g_10.f0))))))) != (*l_50)) >= l_74), p_43)) , 18446744073709551614UL) , (-1L)) , (*l_47));
        for (l_74 = 0; (l_74 <= 2); l_74 += 1)
        { 
            int i;
            if (l_44[(l_74 + 1)])
                break;
            for (g_51 = 0; (g_51 <= 4); g_51 += 1)
            { 
                for (g_71 = 0; (g_71 <= 4); g_71 += 1)
                { 
                    if (g_51)
                        goto lbl_75;
                    if (g_3)
                        goto lbl_76;
                }
            }
        }
    }
    return g_61[3][0][6].f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_46[i].f3, "g_46[i].f3", print_hash_value);
        transparent_crc(g_46[i].f4, "g_46[i].f4", print_hash_value);

    }
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_61[i][j][k].f3, "g_61[i][j][k].f3", print_hash_value);
                transparent_crc(g_61[i][j][k].f4, "g_61[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);

    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_126[i][j][k].f0, "g_126[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_139[i][j][k], "g_139[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_199[i], "g_199[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_209[i], "g_209[i]", print_hash_value);

    }
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_881[i], "g_881[i]", print_hash_value);

    }
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_914[i], "g_914[i]", print_hash_value);

    }
    transparent_crc(g_1001, "g_1001", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1005[i][j].f0, "g_1005[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_1073, "g_1073", print_hash_value);
    transparent_crc(g_1165, "g_1165", print_hash_value);
    transparent_crc(g_1235, "g_1235", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1250[i], "g_1250[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1617[i], "g_1617[i]", print_hash_value);

    }
    transparent_crc(g_1775, "g_1775", print_hash_value);
    transparent_crc(g_1788, "g_1788", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1843[i], "g_1843[i]", print_hash_value);

    }
    transparent_crc(g_1851, "g_1851", print_hash_value);
    transparent_crc(g_1896, "g_1896", print_hash_value);
    transparent_crc(g_1927, "g_1927", print_hash_value);
    transparent_crc(g_1943, "g_1943", print_hash_value);
    transparent_crc(g_2026, "g_2026", print_hash_value);
    transparent_crc(g_2133, "g_2133", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
