// SPDX-License-Identifier: MIT
// cctest_csmith_57142eb4.c --- cctest case csmith_57142eb4 (csmith seed 1460940468)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x292aeeac */

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

// Options:   -s 1460940468 -o /tmp/csmith_gen_rvbc59x1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
};

union U1 {
   uint16_t  f0;
};


static int32_t g_2 = 0xC7CE53D8L;
static struct S0 g_51 = {-1L};
static struct S0 g_54 = {-5L};
static uint32_t g_65 = 0x09EDB9CCL;
static int32_t g_66 = 0xDA7D8E2DL;
static int64_t g_73[3] = {0xED1E22517922C1E9LL,0xED1E22517922C1E9LL,0xED1E22517922C1E9LL};
static uint32_t g_74 = 0UL;
static uint16_t g_97 = 0x0013L;
static uint64_t g_125 = 18446744073709551614UL;
static uint32_t g_135 = 0xF1F5868DL;
static int64_t g_159 = 0x08BCBAD6A7F728D9LL;
static uint16_t g_174 = 0x364BL;
static uint8_t g_176 = 0xF3L;
static uint8_t g_244 = 255UL;
static uint16_t g_248 = 4UL;
static union U1 g_262 = {65535UL};
static int32_t g_263[2][2] = {{(-6L),(-6L)},{(-6L),(-6L)}};
static uint8_t g_271 = 0x3CL;



static const union U1  func_1(void);
static uint64_t  func_7(uint8_t  p_8, uint64_t  p_9, int32_t  p_10, uint8_t  p_11, int32_t  p_12);
static struct S0  func_15(int16_t  p_16, const union U1  p_17);
static int32_t  func_33(int32_t  p_34);




static const union U1  func_1(void)
{ 
    union U1 l_20 = {0xD6B6L};
    int32_t l_276 = 0L;
    for (g_2 = 0; (g_2 > 10); g_2++)
    { 
        int32_t l_21 = 0xB1943C6FL;
        const union U1 l_22 = {5UL};
        int32_t l_229[3];
        uint64_t l_291 = 0UL;
        const uint16_t l_292[1][5][1] = {{{9UL},{7UL},{9UL},{7UL},{9UL}}};
        int32_t l_294 = (-1L);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_229[i] = 0x592D3BF7L;
        g_263[0][1] ^= (safe_add_func_uint8_t_u_u((g_2 , (func_7(g_2, (safe_div_func_int64_t_s_s((func_15((safe_add_func_int16_t_s_s((l_20 , (l_21 = l_21)), l_20.f0)), l_22) , 0x65FCBFF38EDED3E8LL), l_229[1])), l_229[1], g_2, l_229[1]) != l_229[0])), l_20.f0));
        if ((!(l_229[0] = (safe_mul_func_uint8_t_u_u((+(((g_51 , (safe_sub_func_int16_t_s_s(l_20.f0, 7L))) || (l_20.f0 && 255UL)) <= l_229[1])), 9L)))))
        { 
            int32_t l_270 = 0xBD958CC1L;
            l_270 ^= g_248;
            ++g_271;
            l_276 = (safe_add_func_int32_t_s_s((g_263[0][1] != g_271), g_2));
        }
        else
        { 
            for (l_20.f0 = (-7); (l_20.f0 != 36); ++l_20.f0)
            { 
                return g_262;
            }
        }
        for (g_51.f0 = 0; (g_51.f0 != 24); g_51.f0 = safe_add_func_uint32_t_u_u(g_51.f0, 3))
        { 
            uint64_t l_293 = 0x422F2D61EB487174LL;
            const union U1 l_295 = {0xECF4L};
            l_294 &= (((((g_73[1] <= ((g_159 , (((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_51.f0, ((l_291 != (-1L)) | g_262.f0))), l_292[0][2][0])), 0xA8L)) | l_293) == l_292[0][2][0]) | g_262.f0), 0xB9L)) == l_276), 12)) >= l_292[0][2][0]) , 0x8403L)) , 18446744073709551615UL)) & 0x6CL) | g_66) > 0x87L) > l_276);
            if (l_293)
            { 
                return l_20;
            }
            else
            { 
                return l_295;
            }
        }
    }
    return g_262;
}



static uint64_t  func_7(uint8_t  p_8, uint64_t  p_9, int32_t  p_10, uint8_t  p_11, int32_t  p_12)
{ 
    uint8_t l_246[1];
    int i;
    for (i = 0; i < 1; i++)
        l_246[i] = 3UL;
    for (g_174 = 23; (g_174 == 41); g_174++)
    { 
        uint32_t l_240 = 18446744073709551606UL;
        int32_t l_245 = 0L;
        int32_t l_247 = 0xC98A1C93L;
        g_248 = (((p_8--) == (g_2 == (g_66 |= (0x294016B02DDAE1D8LL <= ((safe_mul_func_int8_t_s_s((((safe_div_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((l_240 = g_65) < (l_245 = ((g_244 &= ((safe_lshift_func_uint8_t_u_s((!(-1L)), 1)) || p_9)) <= 2L))), p_11)), l_246[0])) != 0x6FL) < 0xE9202AD850D4A36DLL), g_51.f0)) == l_247))))) & 6L);
        g_66 = l_245;
    }
    for (p_12 = 21; (p_12 < (-8)); p_12 = safe_sub_func_int8_t_s_s(p_12, 3))
    { 
        uint64_t l_252 = 18446744073709551609UL;
        const uint32_t l_259 = 5UL;
        int32_t l_260 = 7L;
        if ((~(l_252 == (g_176 = ((g_244 & (!((((g_135 != l_246[0]) < l_252) < g_244) != 8L))) & g_54.f0)))))
        { 
            int8_t l_261[3][3] = {{(-5L),0x2FL,(-5L)},{(-5L),0x2FL,(-5L)},{(-5L),0x2FL,(-5L)}};
            int i, j;
            l_261[1][2] ^= (!(safe_lshift_func_uint16_t_u_u((p_11 == ((l_260 ^= (safe_sub_func_uint64_t_u_u(p_8, l_259))) , (p_9 == g_97))), 0)));
        }
        else
        { 
            l_260 &= ((g_262 = g_262) , (p_9 != l_246[0]));
        }
    }
    return g_174;
}



static struct S0  func_15(int16_t  p_16, const union U1  p_17)
{ 
    uint8_t l_41[3][2];
    int32_t l_42 = 0xDFD99643L;
    int32_t l_228 = (-1L);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_41[i][j] = 0x72L;
    }
    l_228 ^= (safe_lshift_func_uint16_t_u_s((g_2 >= ((0xFAD5BEFAL <= (safe_sub_func_int16_t_s_s(((((safe_add_func_int64_t_s_s((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((func_33(((((safe_unary_minus_func_uint64_t_u((((((safe_lshift_func_uint8_t_u_u(g_2, 5)) & ((safe_div_func_uint32_t_u_u((l_42 |= (((!p_17.f0) || l_41[0][0]) ^ g_2)), l_41[2][1])) , 0x550E352601C8D535LL)) > p_17.f0) ^ 0x020F620AL) != p_17.f0))) == g_2) & 0x39L) == l_41[0][0])) , 8UL) , l_41[0][0]), p_16)), p_16)), l_41[2][1])) <= p_16) || 0xCB93B745A2F1ED59LL) == g_73[2]), l_41[0][0]))) < p_16)), p_17.f0));
    return g_51;
}



static int32_t  func_33(int32_t  p_34)
{ 
    uint32_t l_43 = 0UL;
    struct S0 l_52 = {0x4C01F903L};
    struct S0 l_53 = {0x46153B72L};
    uint16_t l_57[1];
    int32_t l_108 = 3L;
    int32_t l_126[2][2][1];
    int32_t l_136 = 0xD30C446BL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_57[i] = 1UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_126[i][j][k] = 0x29F52E16L;
        }
    }
    if (l_43)
    { 
        int32_t l_44 = (-5L);
        p_34 = (l_44 >= ((safe_add_func_int64_t_s_s(g_2, ((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((0xF40BF68DL ^ 0x0C1731D4L), 0x597EEDF6L)), 7)) > 0x9AL))) , g_2));
    }
    else
    { 
        int16_t l_68 = (-9L);
        int32_t l_70 = (-8L);
        int32_t l_71 = 1L;
        struct S0 l_96 = {0xD2C8CC2AL};
        g_54 = (l_53 = (l_52 = (g_51 = g_51)));
        for (l_43 = (-9); (l_43 < 24); l_43++)
        { 
            uint32_t l_62 = 0xD864B91BL;
            int32_t l_67 = 0x45104F36L;
            const int32_t l_95 = (-8L);
            for (g_51.f0 = 0; (g_51.f0 <= 0); g_51.f0 += 1)
            { 
                int32_t l_69 = 1L;
                int32_t l_72[2][5][1] = {{{0x59721CB4L},{8L},{0x59721CB4L},{8L},{0x59721CB4L}},{{8L},{0x59721CB4L},{8L},{0x59721CB4L},{8L}}};
                int i, j, k;
                l_67 ^= (safe_add_func_uint64_t_u_u((g_66 = ((l_57[g_51.f0] ^ (((g_65 = (((++l_62) | (0xCBABA27FL <= l_57[g_51.f0])) > (p_34 & (-7L)))) || g_65) == g_54.f0)) , g_2)), 18446744073709551606UL));
                --g_74;
                g_66 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0xE6L, g_54.f0)), 7)), 1));
            }
            l_96 = ((safe_div_func_uint8_t_u_u(g_54.f0, (safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(0xD1B8L, (l_70 = ((((((((safe_rshift_func_int8_t_s_u(0x30L, 0)) | (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_34, g_51.f0)), p_34))) | p_34) | 0x2958L) >= 1UL) <= l_52.f0) ^ g_51.f0) | l_95)))), p_34)))) , l_96);
        }
        g_97 = (g_66 = p_34);
    }
    if (((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((l_108 = ((((safe_rshift_func_uint16_t_u_s((((((l_43 , (safe_div_func_int64_t_s_s((p_34 , 0L), g_73[0]))) < l_43) && l_43) , p_34) > p_34), 15)) || g_66) >= 0xA5B3E5B6057BAD64LL) != 0xC7F1499195F91B20LL)) , l_108), 1UL)), 5)), p_34)) | p_34))
    { 
        l_53 = g_51;
    }
    else
    { 
        uint32_t l_115 = 18446744073709551615UL;
        union U1 l_171 = {65535UL};
        int32_t l_188 = (-1L);
        int8_t l_212 = 1L;
        l_126[0][0][0] ^= (safe_div_func_uint32_t_u_u((g_125 = ((g_65 &= p_34) , (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_115 >= ((((((((safe_mul_func_uint16_t_u_u(p_34, (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((!l_108), 4)) , 1UL), g_51.f0)), g_73[0])))) >= g_73[0]) > 0x6FL) == 0x2479L) <= g_66) , l_115) && g_66) , 0x26BCB33D27CF1A45LL)), p_34)), 0xAE8CL)))), (-1L)));
        if (((l_115 == ((g_135 &= (safe_mod_func_uint8_t_u_u((g_51 , (safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s(((1UL && (p_34 < 0UL)) | l_115), 0x16L)) , p_34), p_34))), (-9L)))) >= l_52.f0)) != l_136))
        { 
            int32_t l_141 = 0x139C9446L;
            uint16_t l_173 = 65535UL;
            uint16_t l_183 = 0UL;
            l_108 = (((safe_mul_func_uint8_t_u_u(0xCBL, (l_141 = ((((safe_lshift_func_uint8_t_u_s(((((l_126[1][1][0] ^= (g_74 <= (((0xF7132E5439C88BF8LL ^ 0xABBE4CD0C3B02FF5LL) | 0x672C646EL) >= 0x5AEA95DD02E5D801LL))) || 0L) , l_141) , g_66), l_115)) == p_34) == g_65) && 0x7D168D339D48ECECLL)))) >= p_34) ^ 0x44792810L);
            if ((g_159 &= ((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_s(((g_66 != (safe_mul_func_int8_t_s_s(l_136, 0x74L))) & ((safe_lshift_func_uint8_t_u_s((!g_73[0]), 5)) == 1L)), l_126[0][0][0])) < l_126[0][0][0]) , g_135), g_66)), 6L)), 18446744073709551614UL)), 0x975085CEL)), g_2)) & g_65)))
            { 
                uint32_t l_172 = 0xB066B76CL;
                int32_t l_175 = 0xA52D84E8L;
                l_175 &= ((g_135 , ((((((l_108 &= (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((safe_unary_minus_func_int8_t_s((g_174 = (safe_add_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(p_34, ((safe_unary_minus_func_uint32_t_u(0xB0DB9FFAL)) >= (l_171 , l_141)))) && 0x71L) ^ l_172), l_173))))))) & p_34), 4)) >= 0x5F85640113493370LL), p_34))) , p_34) != g_65) ^ g_73[0]) , p_34) >= g_74)) == p_34);
            }
            else
            { 
                --g_176;
                p_34 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((p_34 || ((p_34 > ((l_171.f0 , (l_57[0] < g_66)) , (-2L))) || 0x5F29L)) , g_159) | l_141), 9)), g_135));
                return l_183;
            }
        }
        else
        { 
            uint32_t l_191[1];
            int i;
            for (i = 0; i < 1; i++)
                l_191[i] = 0x102788A4L;
            for (l_53.f0 = 0; (l_53.f0 <= (-17)); l_53.f0 = safe_sub_func_uint8_t_u_u(l_53.f0, 3))
            { 
                uint8_t l_202 = 0x07L;
                g_66 = (g_51 , (l_188 ^= ((safe_div_func_uint8_t_u_u(0xAFL, 0x78L)) > (0x02L & p_34))));
                g_66 = ((l_202 = (l_126[0][0][0] ^= (safe_sub_func_uint8_t_u_u(((g_97 >= (g_176 != ((((l_191[0] = p_34) < (safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((g_174 &= ((((safe_lshift_func_uint8_t_u_s((((((((((safe_mod_func_int64_t_s_s(0xC1044AB526F66C24LL, 1UL)) , 8L) | 0x7FD1B8A4L) || g_135) < g_73[0]) , 0xB9D5BE66L) ^ g_73[0]) ^ 0x78L) && g_54.f0), g_74)) || (-5L)) >= 0x5CB3DCC7L) != 0xCDD84AA6036CB78ALL)), 3)), g_176)), 1UL))) , l_108) >= 0xDE3425DD3928CDBBLL))) && 249UL), g_66)))) & p_34);
                g_66 &= (safe_mod_func_int16_t_s_s((((((!0xC0L) ^ 0x97L) && (safe_lshift_func_int16_t_s_s(((0x8A50C05B529F704ELL <= (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((l_126[1][1][0] = (((((4UL < l_212) != 8L) > 0L) , (-1L)) && 0x6D4882EDL)) != p_34), 15)), p_34))) == p_34), 14))) & 4UL) >= 0x6299L), l_191[0]));
            }
        }
    }
    for (g_159 = 0; (g_159 > 8); ++g_159)
    { 
        int8_t l_215 = (-10L);
        int32_t l_227 = 0x3535E136L;
        l_215 &= (g_66 = 0xCD386D91L);
        for (g_51.f0 = 0; (g_51.f0 <= 0); g_51.f0 += 1)
        { 
            g_66 ^= l_215;
            for (g_54.f0 = 0; (g_54.f0 >= 0); g_54.f0 -= 1)
            { 
                int i, j, k;
                l_126[g_51.f0][g_51.f0][g_51.f0] = l_126[g_54.f0][(g_51.f0 + 1)][g_54.f0];
            }
            return g_65;
        }
        l_227 = (safe_rshift_func_int16_t_s_s(0xEF98L, ((safe_mod_func_uint8_t_u_u((g_176 >= (safe_div_func_int64_t_s_s(((!p_34) & (safe_div_func_int32_t_s_s((((safe_add_func_int32_t_s_s(0xC7B1A2CDL, l_215)) ^ g_159) > p_34), 4294967295UL))), g_174))), p_34)) && 0x341315DEL)));
    }
    return g_51.f0;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_51.f0, "g_51.f0", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_263[i][j], "g_263[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_271, "g_271", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
