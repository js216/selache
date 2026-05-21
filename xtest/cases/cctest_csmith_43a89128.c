// SPDX-License-Identifier: MIT
// cctest_csmith_43a89128.c --- cctest case csmith_43a89128 (csmith seed 1135120680)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8dc9a0d2 */

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

// Options:   -s 1135120680 -o /tmp/csmith_gen_3jdtni4g/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int64_t  f0;
};

union U1 {
   int32_t  f0;
};


static int32_t g_19 = 0x7858F9C2L;
static uint32_t g_26 = 0UL;
static uint32_t g_48[1][4][1] = {{{0xC1B2D863L},{0xC1B2D863L},{0xC1B2D863L},{0xC1B2D863L}}};
static uint32_t g_60 = 0xACA85E45L;
static uint32_t g_69 = 0xB9A650DEL;
static uint32_t g_92 = 0x577CD183L;
static uint32_t g_94[3] = {1UL,1UL,1UL};
static uint8_t g_96 = 255UL;
static uint32_t g_109 = 0UL;
static uint8_t g_137 = 0xF1L;
static uint64_t g_143 = 18446744073709551611UL;
static int8_t g_144 = 4L;
static int8_t g_151 = 0xD3L;
static int8_t g_159[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
static union U1 g_164[5] = {{1L},{1L},{1L},{1L},{1L}};
static uint16_t g_165 = 7UL;



static const int8_t  func_1(void);
static int16_t  func_6(const int32_t  p_7);
static const uint16_t  func_10(uint16_t  p_11, uint32_t  p_12);
static int32_t  func_13(int32_t  p_14, int16_t  p_15, int32_t  p_16, int32_t  p_17, uint32_t  p_18);




static const int8_t  func_1(void)
{ 
    const uint8_t l_8 = 0xFDL;
    int32_t l_158 = 0xBBAD3B4EL;
    g_165 ^= ((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_158 = func_6(l_8)), g_159[0])), (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((g_164[2] , 0x6BL), l_8)), l_8)))) || 0UL);
    return l_8;
}



static int16_t  func_6(const int32_t  p_7)
{ 
    const uint16_t l_9[2] = {65531UL,65531UL};
    struct S0 l_66 = {0xBA47412260987955LL};
    int32_t l_131 = 0xDE9004F7L;
    uint16_t l_156 = 0x4448L;
    uint64_t l_157 = 0x5008D736B76923BBLL;
    int i;
    if ((l_9[0] >= func_10((func_13(g_19, (p_7 >= g_19), p_7, g_19, g_19) , 65535UL), l_9[0])))
    { 
        uint64_t l_63 = 18446744073709551615UL;
        int8_t l_102[3][1][1];
        int32_t l_128 = 1L;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_102[i][j][k] = (-7L);
            }
        }
        if (((l_63 = (0x56D7CB4F9107178DLL && g_48[0][2][0])) & ((safe_div_func_int16_t_s_s(((l_66 , ((safe_rshift_func_uint16_t_u_s((g_69 = ((0UL <= 0xF133L) > p_7)), 7)) , p_7)) & g_48[0][2][0]), p_7)) >= l_9[0])))
        { 
            uint32_t l_74 = 1UL;
            int16_t l_91 = 5L;
            int32_t l_93 = 0x67C2D953L;
            int32_t l_95 = 0xD347FA91L;
            l_74 = (g_60 , (p_7 >= ((safe_add_func_int8_t_s_s(((l_63 , (safe_lshift_func_int16_t_s_u(g_48[0][2][0], g_19))) ^ 0x34DBBD83L), 0xADL)) & 1UL)));
            for (g_19 = 0; (g_19 <= 22); g_19 = safe_add_func_uint64_t_u_u(g_19, 1))
            { 
                int32_t l_85 = 0x30E3E679L;
                int32_t l_97 = 0x1AC0D59BL;
                g_96 &= (safe_div_func_int64_t_s_s((((safe_div_func_int32_t_s_s((l_95 = (g_94[2] &= ((((safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((l_85 | ((((l_93 ^= (g_92 = (p_7 == (+(safe_add_func_uint64_t_u_u(p_7, (safe_add_func_uint8_t_u_u(((-9L) || l_91), 3UL)))))))) , (-2L)) != p_7) != 1L)) || 0xB816L), l_85)), g_19)) && g_92) ^ 0x2F80E56630802EBDLL) >= l_85))), 0xE3F5A7A7L)) >= 4294967295UL) & 0x49298730L), 0x223BFC9F35A7B369LL));
                l_97 = 1L;
                l_93 &= (((((safe_unary_minus_func_int32_t_s((+(safe_sub_func_int16_t_s_s(l_102[2][0][0], (255UL & (((safe_rshift_func_int16_t_s_u(((l_95 = l_102[2][0][0]) && (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((g_109 &= (g_92 <= p_7)), p_7)), 6))), 8)) > 6L) > p_7))))))) < p_7) > 0xE435L) != 0x5FE46E9995DD1021LL) == p_7);
            }
        }
        else
        { 
            uint32_t l_127 = 6UL;
            int32_t l_130 = 1L;
            int32_t l_142 = 0x658A4148L;
            for (g_60 = 0; (g_60 <= 2); g_60 += 1)
            { 
                struct S0 l_121 = {-1L};
                int32_t l_129[2][4][4] = {{{1L,0x6553B860L,0x61D7ECA5L,0x61D7ECA5L},{0xD186C8CCL,0xD186C8CCL,(-5L),0x6553B860L},{0x6553B860L,1L,(-5L),1L},{0xD186C8CCL,0xF12706A3L,0x61D7ECA5L,(-5L)}},{{1L,0xF12706A3L,0xF12706A3L,1L},{0xF12706A3L,1L,0xD186C8CCL,0x6553B860L},{0xF12706A3L,0xD186C8CCL,0xF12706A3L,(-5L)},{0xF12706A3L,0x61D7ECA5L,(-5L),(-5L)}}};
                int i, j, k;
                l_131 = (!(((~(safe_lshift_func_uint16_t_u_u((0x2E2C57367104891CLL ^ ((+((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((((l_128 ^= (safe_rshift_func_int8_t_s_u(((((l_121 , (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(g_94[g_60], 2)), ((+(1UL > 0xE64EF7B2E3071259LL)) < l_127)))) <= g_69) != 0x3CEAL) , p_7), p_7))) , l_102[2][0][0]) <= 0UL) , l_129[1][2][3]), 14)) < l_127), p_7)) <= 0L)) || 0xBA979D12DC1848BCLL)), g_48[0][2][0]))) , l_130) , p_7));
                l_131 = ((((safe_mod_func_int64_t_s_s(((((g_94[g_60] >= l_9[0]) >= ((g_143 = (safe_rshift_func_int16_t_s_u(1L, ((((l_128 = (+(g_137++))) > (l_142 = (((g_92 &= (safe_mul_func_int16_t_s_s(l_9[0], l_102[2][0][0]))) , p_7) , 1L))) < p_7) ^ l_127)))) || 0L)) & l_127) <= p_7), g_19)) && l_9[0]) ^ 1UL) , l_129[1][2][3]);
                g_144 = g_96;
            }
        }
    }
    else
    { 
        uint16_t l_149 = 5UL;
        int32_t l_150 = 0x21752400L;
        g_151 = (g_94[0] && (safe_div_func_uint16_t_u_u(0x1489L, (l_150 = (safe_add_func_int32_t_s_s(0x00010583L, ((4L || l_66.f0) && l_149)))))));
        return p_7;
    }
    l_156 |= (safe_div_func_uint16_t_u_u((l_9[0] != (safe_mod_func_int32_t_s_s(1L, (-5L)))), ((l_9[0] && 0xD2L) | p_7)));
    return l_157;
}



static const uint16_t  func_10(uint16_t  p_11, uint32_t  p_12)
{ 
    int8_t l_38 = 1L;
    int32_t l_51[5] = {0x0AC77ACAL,0x0AC77ACAL,0x0AC77ACAL,0x0AC77ACAL,0x0AC77ACAL};
    const int32_t l_52 = 1L;
    int32_t l_53[5][4][4] = {{{0xFBB05D09L,0x24235991L,0x08233887L,0xA5C54CD8L},{0x24235991L,0x9AD701FBL,0xE1D86E6AL,0x078C3FCEL},{0x2577C8A6L,0L,0x21A0E57CL,0x9AD701FBL},{0L,0x3C53D173L,0x3C53D173L,0L}},{{0x078C3FCEL,0xA5C54CD8L,0xE1D86E6AL,0x08233887L},{0x0C2888A0L,(-6L),0L,0xBC4A6B1FL},{0xFBB05D09L,5L,0xB33DF123L,0xBC4A6B1FL},{0x3C53D173L,(-6L),0xF20CF680L,0x08233887L}},{{0x5756627FL,0xA5C54CD8L,0xF5B60AA0L,0L},{0L,0x3C53D173L,0xE879CFD2L,0x9AD701FBL},{0xF20CF680L,0L,5L,0x078C3FCEL},{0x5756627FL,0x9AD701FBL,0x5E7732C3L,0xA5C54CD8L}},{{0x981C3107L,0x24235991L,0xB33DF123L,0L},{0x08233887L,0x0C2888A0L,0x08233887L,(-8L)},{0x0C2888A0L,0x9AD701FBL,0x27FD735AL,0x2577C8A6L},{0x2577C8A6L,0xF20CF680L,0x3C53D173L,0x9AD701FBL}},{{0x13988832L,0x981C3107L,0x3C53D173L,0x13988832L},{0x2577C8A6L,0xA5C54CD8L,0x27FD735AL,0xFBB05D09L},{0x0C2888A0L,(-1L),0x08233887L,0xBC4A6B1FL},{0x08233887L,0xBC4A6B1FL,0xB33DF123L,5L}}};
    int i, j, k;
    l_53[2][3][1] = (+(safe_mul_func_int8_t_s_s(((l_38 , ((safe_sub_func_int64_t_s_s(g_19, ((safe_add_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u(((((g_48[0][2][0]++) , g_26) , (l_51[3] = ((((-5L) && g_48[0][0][0]) , p_12) || 0x1911659018101BC6LL))) & p_12))), 1L)) || (-1L)) != l_38), l_52)) | 0L), g_19)) != g_19))) , 0UL)) >= g_19), l_38)));
    l_53[2][3][1] &= ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((g_48[0][2][0] != 0x00L) , ((((l_51[3] & (g_48[0][3][0] = ((p_12 <= l_51[0]) < 1L))) && g_48[0][0][0]) ^ l_51[3]) , g_26)) , g_26), 18446744073709551615UL)), 5)), 18446744073709551615UL)) | p_12);
    --g_60;
    return g_48[0][2][0];
}



static int32_t  func_13(int32_t  p_14, int16_t  p_15, int32_t  p_16, int32_t  p_17, uint32_t  p_18)
{ 
    uint16_t l_24[4] = {65535UL,65535UL,65535UL,65535UL};
    int32_t l_25 = 0x09B4AF7BL;
    int32_t l_27 = (-6L);
    uint64_t l_28 = 0xB38E5161E33ECDC0LL;
    int i;
    l_28 = ((safe_add_func_int32_t_s_s(((0x4C924B541145714FLL >= (((((((g_26 = ((p_16 = (safe_lshift_func_uint8_t_u_s(((l_25 ^= (l_24[2] < g_19)) , 0x48L), 0))) == (-1L))) || g_19) , l_24[1]) == l_27) >= l_27) <= 0x4752L) | p_17)) >= 7UL), g_19)) != 1UL);
    l_27 ^= (safe_lshift_func_uint16_t_u_u(l_24[2], (safe_mod_func_int64_t_s_s(0xA36A77D77FC7DF39LL, ((((safe_sub_func_int64_t_s_s((0xD73CL || g_26), l_28)) >= g_19) || 0L) ^ 4294967295UL)))));
    return p_16;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_48[i][j][k], "g_48[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);

    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_159[i], "g_159[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_164[i].f0, "g_164[i].f0", print_hash_value);

    }
    transparent_crc(g_165, "g_165", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
