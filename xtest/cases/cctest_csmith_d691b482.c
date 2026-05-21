// SPDX-License-Identifier: MIT
// cctest_csmith_d691b482.c --- cctest case csmith_d691b482 (csmith seed 3599873154)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x70e67f74 */

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

// Options:   -s 3599873154 -o /tmp/csmith_gen_ygw27z6k/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int8_t  f1;
};

union U1 {
   struct S0  f0;
   uint32_t  f1;
   uint8_t  f2;
   int64_t  f3;
};

union U2 {
   const uint64_t  f0;
   uint64_t  f1;
};

union U3 {
   const int64_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   uint16_t  f3;
};

union U4 {
   const int64_t  f0;
};

union U5 {
   uint16_t  f0;
   const int32_t  f1;
   const struct S0  f2;
};


static int32_t g_2 = 0L;
static int32_t g_5 = 1L;
static union U1 g_18 = {{1UL,0x64L}};
static union U3 g_43 = {0x47D17017A68FAB8DLL};
static int16_t g_68 = 1L;
static union U1 *g_74 = &g_18;
static int32_t g_76 = 0x80555F25L;
static union U1 * const *g_83 = &g_74;
static union U1 * const **g_82 = &g_83;
static int32_t *g_92 = &g_76;
static union U1 g_96 = {{0xCEF36AA1L,2L}};
static union U1 *g_95 = &g_96;
static int32_t g_101 = 0xA85F8785L;
static int16_t g_102 = 3L;
static uint32_t g_103 = 4UL;
static int16_t g_106 = (-1L);
static uint16_t g_107 = 0x9622L;
static union U5 g_111 = {1UL};
static union U5 *g_110[2] = {&g_111,&g_111};
static union U2 g_112 = {0x313CF365AED0E349LL};
static struct S0 *g_116 = (void*)0;
static int32_t g_163 = 1L;
static uint32_t g_164 = 0UL;
static const int8_t g_210 = 9L;
static const int8_t *g_209 = &g_210;
static const int8_t g_212 = 0xC5L;
static int8_t g_214 = 0xFAL;
static int8_t *g_213 = &g_214;
static int64_t g_246 = 0L;
static union U4 g_249 = {0x18BE0E5867A26E71LL};
static uint32_t g_251 = 1UL;
static int64_t g_308 = 0x72FFF60D3EB170D8LL;
static union U5 g_328 = {0x4CA9L};
static uint32_t g_368[2][2][7] = {{{0x95139A6BL,0x95139A6BL,0UL,18446744073709551609UL,0x1F53D3AFL,18446744073709551609UL,0UL},{0x95139A6BL,0x95139A6BL,0UL,18446744073709551609UL,0x1F53D3AFL,18446744073709551609UL,0UL}},{{0x95139A6BL,0x95139A6BL,0UL,18446744073709551609UL,0x1F53D3AFL,18446744073709551609UL,0UL},{0x95139A6BL,0x95139A6BL,0UL,18446744073709551609UL,0x1F53D3AFL,18446744073709551609UL,0UL}}};
static int16_t g_398 = (-1L);
static uint32_t g_405[4] = {6UL,6UL,6UL,6UL};
static int32_t g_410 = 0x9EE8935BL;
static int8_t g_413 = 0xE7L;
static int8_t g_414 = (-8L);
static uint32_t g_415 = 0x01850DD7L;
static uint64_t g_482[1][4][2] = {{{0x9FD41D7B592718C4LL,0x9FD41D7B592718C4LL},{0x9FD41D7B592718C4LL,0x9FD41D7B592718C4LL},{0x9FD41D7B592718C4LL,0x9FD41D7B592718C4LL},{0x9FD41D7B592718C4LL,0x9FD41D7B592718C4LL}}};
static uint8_t *g_508 = &g_18.f2;
static uint8_t **g_507 = &g_508;
static int8_t g_512[4][5][1] = {{{0x18L},{0x73L},{0x73L},{0x18L},{0x18L}},{{0x18L},{0x73L},{0x18L},{0x18L},{0x73L}},{{0x18L},{0x18L},{0x73L},{0x18L},{0x18L}},{{0x73L},{0x18L},{0x18L},{0x73L},{0x18L}}};
static int32_t g_513 = 7L;
static uint32_t g_515 = 0UL;
static union U4 g_525 = {0xB8BD5CAA2F1588C4LL};
static union U4 *g_524 = &g_525;
static int16_t g_552 = 0x6A4BL;
static uint16_t g_556[4] = {65535UL,65535UL,65535UL,65535UL};
static int16_t g_560 = 0x57FDL;
static int64_t g_562 = 0x6170AA0C3C4F43DCLL;
static int16_t g_563 = 6L;
static int8_t g_564 = (-8L);
static uint32_t g_565 = 1UL;
static uint32_t *g_608 = &g_515;
static uint32_t **g_607 = &g_608;
static uint8_t g_616 = 0UL;
static uint32_t g_626 = 18446744073709551615UL;
static int16_t g_644 = 0xE5E8L;
static int32_t g_645 = (-6L);
static int8_t g_646 = 0xCFL;
static uint16_t g_647 = 0x113DL;
static union U5 **g_662[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static union U5 ***g_661 = &g_662[2];
static struct S0 g_667[1][6] = {{{4294967291UL,0x0BL},{4294967291UL,0x0BL},{4294967291UL,0x0BL},{4294967291UL,0x0BL},{4294967291UL,0x0BL},{4294967291UL,0x0BL}}};
static union U1 *g_668 = (void*)0;
static uint8_t g_692 = 1UL;
static uint64_t g_718 = 0UL;
static uint32_t *g_726 = (void*)0;
static int16_t g_744 = 0L;
static uint32_t g_746 = 0x7A5E2C74L;
static union U5 g_764[3] = {{0x1407L},{0x1407L},{0x1407L}};
static uint64_t **g_770 = (void*)0;
static uint64_t *g_801 = &g_482[0][0][1];
static uint64_t g_812 = 18446744073709551609UL;
static union U3 g_835 = {0xE41BBC828B80C29BLL};
static int32_t g_850 = 0x3252EB74L;
static uint8_t g_852 = 1UL;
static int32_t g_889[2][3][4] = {{{0x0532AC92L,1L,0x2F7C9578L,1L},{0x0532AC92L,1L,0x9A6C4772L,1L},{0x9A6C4772L,1L,0x9A6C4772L,1L}},{{0x0532AC92L,1L,0x2F7C9578L,1L},{0x0532AC92L,1L,0x9A6C4772L,1L},{0x9A6C4772L,1L,0x9A6C4772L,1L}}};
static int32_t g_906 = 0xB9FCCD86L;
static uint16_t g_907 = 65535UL;
static uint64_t g_912 = 18446744073709551608UL;
static const struct S0 g_931[7][2][2] = {{{{0xD030CE1EL,0L},{0UL,0xF5L}},{{0xD030CE1EL,0L},{0xA33E6616L,0xD3L}}},{{{0xF06201F8L,0xF4L},{0xF06201F8L,0xF4L}},{{0xA33E6616L,0xD3L},{0xD030CE1EL,0L}}},{{{0UL,0xF5L},{0xD030CE1EL,0L}},{{0xA33E6616L,0xD3L},{0xF06201F8L,0xF4L}}},{{{0xF06201F8L,0xF4L},{0xA33E6616L,0xD3L}},{{0xD030CE1EL,0L},{0UL,0xF5L}}},{{{0xD030CE1EL,0L},{0xA33E6616L,0xD3L}},{{0xF06201F8L,0xF4L},{0xF06201F8L,0xF4L}}},{{{0xA33E6616L,0xD3L},{0xD030CE1EL,0L}},{{0UL,0xF5L},{0xD030CE1EL,0L}}},{{{0xA33E6616L,0xD3L},{0xF06201F8L,0xF4L}},{{0xF06201F8L,0xF4L},{0xA33E6616L,0xD3L}}}};
static const struct S0 *g_930[7] = {&g_931[0][1][1],&g_931[0][1][1],&g_931[0][1][1],&g_931[0][1][1],&g_931[0][1][1],&g_931[0][1][1],&g_931[0][1][1]};
static struct S0 * const *g_952 = &g_116;
static struct S0 * const * const *g_951 = &g_952;
static int32_t g_978[2][5][6] = {{{0x7BA3B969L,1L,0xDD9AC16DL,0x2C846A09L,0x0F3A9B31L,0x21E03AD7L},{5L,0x9E52EE5CL,1L,0x9E52EE5CL,5L,0x2C846A09L},{0xDD9AC16DL,0x178404F6L,0x948D5FF7L,0x8EF63040L,1L,0x7BA3B969L},{0x948D5FF7L,0L,5L,0x178404F6L,7L,0x7BA3B969L},{0x2C846A09L,0x21E03AD7L,0x948D5FF7L,0x948D5FF7L,0x21E03AD7L,0x2C846A09L}},{{7L,0x32765A56L,1L,0x0F3A9B31L,0xDD9AC16DL,0x21E03AD7L},{0x32765A56L,5L,0xDD9AC16DL,(-10L),1L,0xDCA43DAEL},{0x32765A56L,0x8EF63040L,(-10L),0x0F3A9B31L,(-10L),0x8EF63040L},{7L,0xDD9AC16DL,0x178404F6L,0x948D5FF7L,0x8EF63040L,1L},{0x2C846A09L,0xDD836228L,0x0F3A9B31L,0x178404F6L,0x7BA3B969L,(-10L)}}};
static int32_t g_979 = 0x48606EB6L;
static uint16_t g_980 = 0x038BL;
static const union U4 g_996[4][6] = {{{1L},{0x8A870C12C9E947ABLL},{1L},{1L},{0x8A870C12C9E947ABLL},{1L}},{{1L},{0x8A870C12C9E947ABLL},{1L},{1L},{0x8A870C12C9E947ABLL},{1L}},{{1L},{0x8A870C12C9E947ABLL},{1L},{1L},{0x8A870C12C9E947ABLL},{1L}},{{1L},{0x8A870C12C9E947ABLL},{1L},{1L},{0x8A870C12C9E947ABLL},{1L}}};
static const union U4 g_998 = {3L};
static int32_t g_1012 = (-1L);
static uint8_t g_1044 = 0UL;
static uint64_t g_1064 = 18446744073709551614UL;
static int8_t g_1085 = (-1L);
static int32_t g_1086 = 0xBC5EDBF1L;
static int32_t g_1087 = 0x202CD381L;
static uint8_t g_1088 = 0x8BL;
static uint16_t g_1112 = 0xB4B0L;
static const int32_t g_1135[4] = {0xCCBE6861L,0xCCBE6861L,0xCCBE6861L,0xCCBE6861L};



static int64_t  func_1(void);
static union U1 * func_8(union U1 * p_9, union U1 * p_10, struct S0  p_11, union U1 * p_12);
static union U1  func_13(union U1 * p_14, const union U1 * p_15, const uint16_t  p_16);
static const int8_t  func_19(int8_t  p_20, int16_t  p_21, union U1  p_22);
static uint16_t  func_24(union U1 * p_25, const int16_t  p_26);
static union U1 * func_27(int32_t  p_28, int64_t  p_29, union U1 * p_30);
static int32_t  func_31(union U1 * p_32, int16_t  p_33, struct S0  p_34, union U1 * p_35);
static const struct S0  func_38(union U3  p_39, union U4  p_40, union U1 * p_41, int32_t  p_42);




static int64_t  func_1(void)
{ 
    uint32_t l_45[5];
    union U1 l_633 = {{1UL,0xE1L}};
    union U1 *l_666 = &l_633;
    const union U5 l_922[5][5][5] = {{{{65535UL},{3UL},{0x6474L},{1UL},{3UL}},{{0xD49BL},{0xC707L},{8UL},{65528UL},{9UL}},{{65532UL},{1UL},{65532UL},{0x6F0FL},{65532UL}},{{0x758DL},{0x758DL},{0x0AE8L},{0xC707L},{1UL}},{{65532UL},{0xF9C1L},{0x6474L},{0x2F54L},{0x2EC5L}}},{{{0x025EL},{0x3890L},{5UL},{0UL},{65528UL}},{{0xDC8CL},{0xF9C1L},{0xF9C1L},{0xDC8CL},{65527UL}},{{0UL},{0x758DL},{9UL},{1UL},{0UL}},{{0x6474L},{1UL},{0x68EAL},{3UL},{0xF9C1L}},{{0x3890L},{0UL},{1UL},{1UL},{0UL}}},{{{0x2EC5L},{0x6F0FL},{65535UL},{0xDC8CL},{65526UL}},{{7UL},{65528UL},{0x758DL},{0UL},{9UL}},{{0x6F0FL},{0xE3E0L},{65535UL},{0x2F54L},{0x2F54L}},{{7UL},{0x0AE8L},{7UL},{0xC707L},{0x177FL}},{{0x2EC5L},{65535UL},{3UL},{0x6F0FL},{3UL}}},{{{0x3890L},{0UL},{0UL},{0x758DL},{8UL}},{{0x6474L},{3UL},{3UL},{3UL},{0x6474L}},{{0UL},{0xD49BL},{7UL},{65528UL},{0x758DL}},{{0xDC8CL},{65526UL},{65535UL},{65532UL},{0x68EAL}},{{0x025EL},{7UL},{0x758DL},{0xD49BL},{0x758DL}}},{{{65532UL},{65532UL},{65535UL},{65535UL},{0x6474L}},{{0x758DL},{9UL},{1UL},{0UL},{8UL}},{{3UL},{1UL},{0x68EAL},{0xE3E0L},{3UL}},{{0x47FDL},{9UL},{9UL},{0x47FDL},{0x177FL}},{{65526UL},{65532UL},{0xF9C1L},{0x6474L},{0x2F54L}}}};
    struct S0 * const l_927[1] = {&l_633.f0};
    const struct S0 *l_928 = &l_633.f0;
    const union U4 *l_995 = &g_996[1][5];
    const union U4 *l_997 = &g_998;
    union U2 **l_1031 = (void*)0;
    uint8_t **l_1051 = &g_508;
    uint16_t l_1092 = 4UL;
    int8_t l_1111[1];
    int32_t l_1115 = (-8L);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_45[i] = 0xF874ACC0L;
    for (i = 0; i < 1; i++)
        l_1111[i] = (-1L);
    for (g_2 = 21; (g_2 == (-10)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 5))
    { 
        union U1 *l_17 = &g_18;
        const int8_t l_23 = (-7L);
        union U4 l_44 = {6L};
        struct S0 l_94 = {4294967295UL,0x20L};
        int32_t *l_946 = &g_850;
        struct S0 l_961 = {6UL,0xB7L};
        int64_t l_977 = (-1L);
        const union U4 *l_994 = (void*)0;
        const union U4 **l_993[7] = {&l_994,&l_994,&l_994,&l_994,&l_994,&l_994,&l_994};
        uint16_t *l_1001 = &g_556[0];
        uint16_t *l_1008 = &g_835.f3;
        int64_t *l_1009 = &g_96.f3;
        uint16_t l_1010 = 0UL;
        int32_t *l_1011 = &g_1012;
        uint16_t l_1021 = 0x9A6DL;
        union U2 *l_1030 = &g_112;
        union U2 **l_1029 = &l_1030;
        int32_t l_1063[2];
        uint32_t l_1116[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1063[i] = 0x734FE19AL;
        for (i = 0; i < 2; i++)
            l_1116[i] = 0xEDFFB88FL;
        for (g_5 = 0; (g_5 >= 8); g_5 = safe_add_func_uint64_t_u_u(g_5, 1))
        { 
            union U1 *l_36 = (void*)0;
            int32_t l_37 = 7L;
            union U1 **l_115 = &g_95;
        }
        if ((*g_92))
            continue;
        for (g_111.f0 = 14; (g_111.f0 == 2); --g_111.f0)
        { 
            const struct S0 **l_929 = &l_928;
            int32_t l_932 = 0x1DE384B0L;
            int32_t l_945[5][7] = {{(-2L),(-2L),0x34C97EDBL,0x11047FFAL,0L,0x11047FFAL,0x34C97EDBL},{(-2L),(-2L),0x34C97EDBL,0x11047FFAL,0L,0x11047FFAL,0x34C97EDBL},{(-2L),(-2L),0x34C97EDBL,0x11047FFAL,0L,0x11047FFAL,0x34C97EDBL},{(-2L),(-2L),0x34C97EDBL,0x11047FFAL,0L,0x11047FFAL,0x34C97EDBL},{(-2L),(-2L),0x34C97EDBL,0x11047FFAL,0L,0x11047FFAL,0x34C97EDBL}};
            int32_t **l_947 = &g_92;
            uint16_t *l_948[1];
            union U5 *l_949 = &g_111;
            uint8_t *** const l_963 = &g_507;
            int i, j;
            for (i = 0; i < 1; i++)
                l_948[i] = &g_907;
            (*g_92) |= ((l_633.f0.f1 || (safe_mod_func_int8_t_s_s(l_94.f1, (((g_68 ^= (0xF109L ^ (l_922[2][4][4] , (l_94 , ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((((l_927[0] == (g_930[6] = ((*l_929) = l_928))) != l_45[3]) == 0xC8L) , g_912), g_96.f0.f0)), 15)) <= l_932))))) < (-5L)) || 0x94L)))) ^ 0UL);
            if ((*g_92))
                break;
            if (((((g_43.f3 = ((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s(l_94.f1, (safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((((((safe_rshift_func_uint16_t_u_u(l_932, 9)) != ((((*g_801) = l_932) || ((l_945[1][2] ^= (-4L)) , (&g_76 != ((*l_947) = (g_68 , l_946))))) == (*l_946))) && (*g_608)) <= g_764[0].f0) != (*l_946)), 15)) >= 0UL) >= (*l_946)), l_45[0])))) && (*l_946)), g_812)), (*g_608))) != (*l_946))) | (*l_946)) && (**l_947)) ^ g_163))
            { 
                union U5 **l_950 = &l_949;
                (*l_950) = l_949;
                (**l_947) &= (g_951 == (void*)0);
            }
            else
            { 
                union U1 *l_959 = (void*)0;
                int32_t l_960 = 0x72845129L;
                int64_t *l_968 = &g_562;
                union U5 ****l_983 = &g_661;
                g_667[0][0] = (**l_929);
                if ((*g_92))
                    break;
                for (g_645 = 0; (g_645 == (-25)); --g_645)
                { 
                    int16_t *l_962 = &g_644;
                    (*l_946) = (g_564 ^ (safe_add_func_uint8_t_u_u((((void*)0 != &g_507) > (&g_507 == ((safe_div_func_int16_t_s_s(((*l_962) ^= ((g_18.f0 = l_961) , g_112.f1)), (*l_946))) , l_963))), 0xC7L)));
                }
                g_92 = &g_5;
                if ((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((g_43.f3 = (((((*l_968) = ((0L == 0L) || ((*g_801) >= l_960))) >= g_405[1]) < (*l_946)) == (((**g_607) <= (*g_92)) <= (*g_801)))), 65535UL)), g_112.f1)))
                { 
                    int16_t l_969 = 5L;
                    if (l_969)
                        break;
                }
                else
                { 
                    struct S0 **l_970 = &g_116;
                    struct S0 ***l_971 = &l_970;
                    struct S0 **l_973 = (void*)0;
                    struct S0 ***l_972[7] = {&l_973,&l_973,&l_973,&l_973,&l_973,&l_973,&l_973};
                    int32_t *l_975 = (void*)0;
                    int32_t *l_976[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_976[i] = &l_945[1][6];
                    g_952 = ((*l_971) = l_970);
                    (*g_92) = ((*g_524) , (safe_unary_minus_func_int64_t_s(g_645)));
                    ++g_980;
                    l_983 = &g_661;
                }
            }
        }
        (*l_1011) |= ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_add_func_uint64_t_u_u((1UL | (g_405[1] && (((**g_607) = 0xD4E361C6L) < ((((l_1010 &= ((((((*l_1008) = (((l_997 = (l_995 = &g_249)) == (void*)0) == (safe_sub_func_uint16_t_u_u((--(*l_1001)), (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_112 , g_18.f0.f0), l_633.f0.f0)), 0x7BD3L)))))) > g_889[0][2][2]) >= 4294967288UL) > (*g_92)) > (-2L))) && (*g_801)) <= 1UL) == g_996[1][5].f0)))), g_616)))), 2)) & (*g_92));
        if (l_633.f0.f0)
        { 
            union U2 l_1015 = {0xBBA0112864FB8A70LL};
            struct S0 **l_1035 = (void*)0;
            struct S0 ***l_1034 = &l_1035;
            int32_t l_1038 = (-3L);
            int32_t l_1039 = (-5L);
            int16_t l_1053 = 0xA682L;
            int64_t l_1056 = (-1L);
            int64_t l_1081[5] = {0xC619168E9B057ED0LL,0xC619168E9B057ED0LL,0xC619168E9B057ED0LL,0xC619168E9B057ED0LL,0xC619168E9B057ED0LL};
            uint8_t l_1084 = 0x54L;
            uint32_t l_1095[1][7][6] = {{{0xD90F308BL,4294967291UL,0x7291038AL,0xD90F308BL,1UL,0xFFAE5F63L},{0UL,0xD90F308BL,0UL,0xD90F308BL,0UL,1UL},{0xD90F308BL,0UL,1UL,0x0C1A493EL,0UL,0UL},{4294967291UL,0xD90F308BL,0UL,0x807679D7L,4294967287UL,4294967291UL},{4294967287UL,1UL,0x50446248L,0x587A81DDL,0x587A81DDL,0x50446248L},{4294967287UL,4294967287UL,1UL,0x807679D7L,1UL,0x0C1A493EL},{1UL,4294967287UL,0UL,0UL,0x587A81DDL,1UL}}};
            uint32_t *l_1109 = (void*)0;
            int i, j, k;
            if ((safe_add_func_int32_t_s_s(0xDD339770L, (((l_1015 , ((*g_213) = ((*g_213) & ((l_922[2][4][4] , (safe_unary_minus_func_uint64_t_u((l_1015.f0 & (safe_add_func_uint32_t_u_u((0UL > ((*g_801) |= ((safe_mul_func_uint16_t_u_u(g_249.f0, 0xF488L)) == l_1015.f0))), 4294967295UL)))))) , l_45[0])))) & 1L) & l_1021))))
            { 
                int32_t * const l_1024 = &g_850;
                int32_t *l_1040 = (void*)0;
                int32_t *l_1041 = &g_850;
                int32_t *l_1042 = &g_850;
                int32_t *l_1043[2];
                uint8_t ***l_1049 = (void*)0;
                uint8_t ***l_1050 = &g_507;
                uint8_t ***l_1052 = &l_1051;
                int i;
                for (i = 0; i < 2; i++)
                    l_1043[i] = (void*)0;
                for (g_214 = 8; (g_214 <= (-5)); g_214--)
                { 
                    int32_t **l_1025[7] = {&l_946,&l_946,&l_946,&l_946,&l_946,&l_946,&l_946};
                    int32_t **l_1026 = &g_92;
                    int16_t *l_1033 = &g_106;
                    int16_t *l_1036 = (void*)0;
                    int16_t *l_1037[6][2] = {{&g_102,&g_398},{&g_744,&g_102},{(void*)0,(void*)0},{(void*)0,&g_102},{&g_744,&g_398},{&g_102,&g_398}};
                    int i, j;
                    if ((*g_92))
                        break;
                    (*l_1026) = l_1024;
                    if ((*l_946))
                        continue;
                    (*l_1011) = (((safe_div_func_uint16_t_u_u(((l_1031 = l_1029) == (void*)0), (*l_946))) & 0xEECCL) && (((*g_801) = (((+(g_718 || ((*l_1033) |= g_96.f0.f1))) & ((l_1038 = ((&g_952 == l_1034) && (*l_1011))) != g_413)) , l_1039)) && g_564));
                    g_667[0][0] = l_961;
                }
                g_1044--;
                l_1056 ^= (((*g_92) >= (g_1012 ^= (safe_lshift_func_uint8_t_u_s((((*l_1050) = &g_508) != ((*l_1052) = l_1051)), 4)))) < (((l_1053 , (safe_div_func_uint8_t_u_u(((g_368[1][0][3] >= l_1015.f0) , g_18.f0.f1), (*g_213)))) != 251UL) == (*g_209)));
            }
            else
            { 
                int32_t *l_1057 = &g_850;
                int32_t *l_1058 = &l_1038;
                int32_t *l_1059 = &g_5;
                int32_t l_1060 = 5L;
                int32_t *l_1061 = (void*)0;
                int32_t *l_1062[7][5][3] = {{{(void*)0,&l_1038,&g_2},{&l_1060,&l_1038,&l_1038},{&l_1038,&l_1038,&g_850},{&g_850,(void*)0,&l_1060},{&g_76,&g_2,(void*)0}},{{&g_5,&l_1060,&g_5},{&g_1012,&g_76,(void*)0},{&l_1038,&l_1060,&l_1060},{&g_5,&g_850,&g_850},{&g_5,&g_1012,&l_1038}},{{(void*)0,&l_1038,&g_2},{(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_850},{&g_5,(void*)0,(void*)0},{&l_1038,&g_1012,(void*)0}},{{&g_1012,&g_850,&l_1038},{&g_5,&g_1012,&g_1012},{&g_76,(void*)0,&g_850},{&g_850,&g_5,(void*)0},{&l_1038,&g_5,&l_1060}},{{&l_1060,&l_1038,&l_1060},{(void*)0,&g_1012,(void*)0},{&g_850,&g_850,&g_850},{(void*)0,&l_1060,&g_1012},{&g_850,&g_76,&l_1038}},{{&g_76,&l_1060,(void*)0},{&g_850,&g_2,(void*)0},{(void*)0,(void*)0,&g_850},{&g_850,&l_1038,&g_5},{(void*)0,&l_1038,&g_2}},{{&l_1060,&l_1038,&l_1038},{&l_1038,&l_1038,&g_850},{&g_850,(void*)0,&l_1060},{&g_76,&g_2,(void*)0},{&g_5,&l_1060,&g_5}}};
                int32_t *l_1082 = &g_889[1][0][3];
                uint64_t *l_1083[3][3] = {{&g_812,(void*)0,(void*)0},{&g_812,(void*)0,(void*)0},{&g_812,(void*)0,(void*)0}};
                int64_t *l_1101 = (void*)0;
                int64_t *l_1102 = &g_308;
                struct S0 l_1110 = {0x194F056BL,0xA4L};
                int i, j, k;
                ++g_1064;
                if (((safe_div_func_uint16_t_u_u(((l_1038 |= ((*g_801) = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((l_1015.f0 , (((*l_1082) = (((safe_rshift_func_uint8_t_u_s((((((*l_946) > (((0xB99567F8L >= (**g_607)) < l_633.f0.f0) , (safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((*g_209), (((--(*l_1008)) > g_212) || l_1081[3]))) && l_45[1]), l_1039)))) || (*l_1011)) > 3UL) & (*g_213)), (*g_213))) != (*g_801)) && g_931[0][1][1].f0)) , l_633.f0.f1)), 0xE8L)), g_43.f3)))) > l_1084), g_101)) ^ 0x82L))
                { 
                    const int64_t l_1091 = (-4L);
                    uint8_t *l_1098 = &g_1088;
                    g_1088++;
                    (*l_1058) = ((l_1091 | (l_1092 != l_633.f0.f1)) <= (safe_mod_func_int32_t_s_s(0x2D1A95E5L, l_1095[0][0][0])));
                    (*l_1058) ^= (0x10L < (((*g_209) || ((*l_1098)--)) == ((void*)0 == &g_998)));
                }
                else
                { 
                    return g_112.f1;
                }
                if (((0L < l_1056) < (((((*l_1102) |= (g_112 , (*l_1011))) | (((0x09B2C480L && l_922[2][4][4].f0) > (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((l_1109 != l_1011), 0xFA05C099L)), (*g_213))), (*l_1011)))) == (*g_801))) , 0x6DEBE2181F546413LL) != 0x55AE4B9F8F33E884LL)))
                { 
                    l_94 = l_1110;
                    --g_1112;
                    l_1011 = &l_1038;
                    (*g_92) &= 0x372D476BL;
                }
                else
                { 
                    return g_251;
                }
                ++l_1116[0];
            }
        }
        else
        { 
            int16_t *l_1123 = &g_552;
            struct S0 l_1124[1] = {{0xB131C470L,-1L}};
            union U3 l_1126 = {0x9F7A80E5D2BE6128LL};
            uint16_t *l_1128 = &g_980;
            struct S0 l_1129[7][3][7] = {{{{4294967294UL,4L},{0xB6095228L,9L},{4294967295UL,0x6AL},{0x06D568FDL,4L},{0x06D568FDL,4L},{4294967295UL,0x6AL},{0xB6095228L,9L}},{{1UL,0L},{4294967295UL,0x3DL},{0x9AE01948L,0xFBL},{1UL,0L},{4294967295UL,1L},{0xD4A61569L,0x60L},{0xD4A61569L,0x60L}},{{0UL,0x33L},{4294967294UL,4L},{0x06D568FDL,4L},{4294967294UL,4L},{0UL,0x33L},{6UL,0x82L},{0xD7884624L,5L}}},{{{0xF00157DCL,9L},{9UL,-1L},{4294967295UL,0x3DL},{1UL,0L},{0x3549DB6CL,-3L},{1UL,0L},{4294967295UL,0x3DL}},{{0xD7884624L,5L},{0xD7884624L,5L},{4294967295UL,0x45L},{0x06D568FDL,4L},{0xB6095228L,9L},{4294967291UL,-1L},{4294967295UL,0x6AL}},{{0xF00157DCL,9L},{4294967295UL,0x12L},{4294967295UL,1L},{4294967295UL,1L},{4294967295UL,0x12L},{1UL,0L},{9UL,-1L}}},{{{4294967295UL,0x6AL},{0xD7884624L,5L},{0xACA57658L,0L},{0xB6095228L,9L},{0UL,0x33L},{0UL,0x33L},{0xB6095228L,9L}},{{1UL,0L},{0x3549DB6CL,-3L},{1UL,0L},{4294967295UL,0x3DL},{9UL,-1L},{0xF00157DCL,9L},{1UL,0L}},{{0xACA57658L,0L},{0xD7884624L,5L},{4294967295UL,0x6AL},{4294967294UL,4L},{4294967295UL,0x6AL},{0xD7884624L,5L},{0xACA57658L,0L}}},{{{4294967295UL,1L},{4294967295UL,0x12L},{1UL,0L},{9UL,-1L},{0xD4A61569L,0x60L},{0xF00157DCL,9L},{0xD4A61569L,0x60L}},{{0xD7884624L,5L},{4294967291UL,-1L},{4294967291UL,-1L},{0xD7884624L,5L},{6UL,0x82L},{0UL,0x33L},{4294967294UL,4L}},{{4294967288UL,0xC7L},{0x9AE01948L,0xFBL},{1UL,0L},{1UL,0L},{1UL,0L},{1UL,0L},{0x9AE01948L,0xFBL}}},{{{6UL,0x82L},{0xACA57658L,0L},{4294967295UL,0x6AL},{4294967295UL,0x45L},{4294967291UL,-1L},{4294967294UL,4L},{4294967294UL,4L}},{{0xF00157DCL,9L},{4294967288UL,0xC7L},{1UL,0L},{4294967288UL,0xC7L},{0xF00157DCL,9L},{4294967295UL,0x12L},{0xD4A61569L,0x60L}},{{0x06D568FDL,4L},{0UL,0x33L},{0xACA57658L,0L},{4294967295UL,0x45L},{0xB6095228L,9L},{4294967295UL,0x45L},{0xACA57658L,0L}}},{{{0xD4A61569L,0x60L},{0xD4A61569L,0x60L},{4294967295UL,1L},{1UL,0L},{0x9AE01948L,0xFBL},{4294967295UL,0x3DL},{1UL,0L}},{{0x06D568FDL,4L},{4294967295UL,0x45L},{0xD7884624L,5L},{0xD7884624L,5L},{4294967295UL,0x45L},{0x06D568FDL,4L},{0xB6095228L,9L}},{{0xF00157DCL,9L},{4294967295UL,1L},{4294967288UL,0xC7L},{9UL,-1L},{0x9AE01948L,0xFBL},{0x9AE01948L,0xFBL},{9UL,-1L}}},{{{6UL,0x82L},{0x969FC333L,0L},{6UL,0x82L},{4294967294UL,4L},{0xB6095228L,9L},{4294967295UL,0x6AL},{0x06D568FDL,4L}},{{4294967288UL,0xC7L},{4294967295UL,1L},{0xF00157DCL,9L},{4294967295UL,0x3DL},{0xF00157DCL,9L},{4294967295UL,1L},{4294967288UL,0xC7L}},{{0xD7884624L,5L},{4294967295UL,0x45L},{0x06D568FDL,4L},{0xB6095228L,9L},{4294967291UL,-1L},{4294967295UL,0x6AL},{4294967291UL,-1L}}}};
            const int32_t *l_1134 = &g_1135[2];
            int i, j, k;
            if ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*l_1123) = 0x28CCL), (((l_1124[0] , g_564) | ((!(0x1435L | ((*l_1128) = ((*l_1008) = ((0UL || (((l_1126 , ((+(((*l_1001) = g_308) >= 0x6541L)) | g_164)) , 65531UL) | l_1126.f1)) | l_1126.f1))))) != l_1126.f3)) < 0x2A853CAEEE7A8C3FLL))), 3)))
            { 
                union U4 *l_1130 = &l_44;
                const int32_t *l_1131 = &g_850;
                const int32_t **l_1132 = (void*)0;
                const int32_t **l_1133[5][1][7] = {{{&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131}},{{&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131}},{{&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131}},{{&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131}},{{&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131,&l_1131}}};
                const int32_t *l_1136 = &g_850;
                int i, j, k;
                l_1129[0][0][4] = (g_68 , l_94);
                l_995 = l_1130;
                (*l_946) &= l_1115;
                l_1136 = (l_1134 = l_1131);
                (*l_1011) = (((safe_mod_func_uint64_t_u_u((0xF9344D06L > ((safe_unary_minus_func_int8_t_s((((safe_add_func_uint64_t_u_u((((**g_607) = (safe_mod_func_uint16_t_u_u(((*l_1008) = (((*g_213) &= (safe_div_func_int32_t_s_s(l_45[0], ((safe_mod_func_uint32_t_u_u(0xF1D18A53L, ((**g_607) ^ ((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((g_482[0][0][1] ^ (safe_unary_minus_func_uint16_t_u(((&g_1112 != (void*)0) >= 1L)))), (*l_1011))), (*l_1134))) , (*g_608))))) , 0x0627C325L)))) >= (-2L))), (*l_946)))) > (*l_1136)), g_996[1][5].f0)) < 0xE715L) >= g_562))) & l_1111[0])), 2UL)) > (*g_92)) | g_413);
            }
            else
            { 
                if (l_45[0])
                    break;
            }
        }
    }
    return l_45[0];
}



static union U1 * func_8(union U1 * p_9, union U1 * p_10, struct S0  p_11, union U1 * p_12)
{ 
    union U5 *l_671 = &g_328;
    uint16_t *l_683[6][4] = {{&g_111.f0,&g_43.f1,&g_111.f0,&g_111.f0},{&g_556[2],&g_43.f3,&g_111.f0,&g_111.f0},{&g_43.f1,&g_43.f1,&g_43.f1,&g_43.f3},{&g_43.f3,&g_556[2],&g_43.f1,&g_556[2]},{&g_43.f1,&g_111.f0,&g_111.f0,&g_43.f1},{&g_556[2],&g_111.f0,&g_111.f0,&g_556[2]}};
    int32_t l_684 = 1L;
    int32_t l_685[4] = {0L,0L,0L,0L};
    union U3 l_758[6] = {{0x90D207BFAE4F381ALL},{-8L},{0x90D207BFAE4F381ALL},{0x90D207BFAE4F381ALL},{-8L},{0x90D207BFAE4F381ALL}};
    union U4 l_836[5][5][7] = {{{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}}},{{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}}},{{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}}},{{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}}},{{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}},{{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL},{0x6B37B06EB37B8B3FLL}}}};
    struct S0 l_867 = {0UL,0x16L};
    union U1 *l_869 = &g_18;
    uint64_t *l_882[5][5] = {{&g_812,(void*)0,&g_812,(void*)0,&g_812},{&g_718,&g_482[0][0][1],&g_718,&g_718,&g_482[0][0][1]},{&g_812,&g_812,&g_112.f1,(void*)0,&g_112.f1},{&g_482[0][0][1],&g_482[0][0][1],&g_718,&g_482[0][0][1],&g_482[0][0][1]},{&g_112.f1,(void*)0,&g_112.f1,&g_812,&g_812}};
    union U2 *l_896[6][3][4] = {{{&g_112,&g_112,(void*)0,&g_112},{(void*)0,&g_112,(void*)0,(void*)0},{&g_112,&g_112,&g_112,&g_112}},{{&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,(void*)0,&g_112},{&g_112,&g_112,(void*)0,&g_112}},{{&g_112,(void*)0,(void*)0,&g_112},{&g_112,&g_112,&g_112,(void*)0},{&g_112,&g_112,&g_112,&g_112}},{{&g_112,&g_112,(void*)0,&g_112},{(void*)0,&g_112,(void*)0,(void*)0},{&g_112,&g_112,&g_112,&g_112}},{{&g_112,(void*)0,&g_112,&g_112},{(void*)0,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112}},{{&g_112,&g_112,(void*)0,&g_112},{(void*)0,&g_112,(void*)0,(void*)0},{&g_112,&g_112,&g_112,&g_112}}};
    int i, j, k;
    if ((((**g_607) ^= (safe_mod_func_uint64_t_u_u(((l_671 = l_671) == ((safe_mod_func_uint16_t_u_u(p_11.f1, (safe_add_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((0x4FF8A131L || (safe_mul_func_int16_t_s_s(g_565, p_11.f1))), (0xD6E5L | (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((((l_684 = p_11.f1) , l_684) ^ l_685[3]))), l_685[2]))))) < l_685[3]), (*g_209))))) , (void*)0)), p_11.f1))) == l_685[1]))
    { 
        int32_t *l_686 = &g_76;
        int32_t *l_687 = &l_684;
        int32_t *l_688 = &l_684;
        int32_t *l_689 = &l_685[2];
        int32_t *l_690 = &l_684;
        int32_t *l_691[1][1];
        union U4 l_717 = {0x896CBD5ED9EEBB5DLL};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_691[i][j] = &l_685[0];
        }
        g_692--;
        (*l_688) = (safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_11.f1, (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((*g_508) = (p_11.f0 && (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((0x9DFDL ^ (g_563 & (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u(g_513, 0x56AECD74C835DAADLL)), (l_717 , p_11.f0))))), g_560)), l_684)))), p_11.f0)), p_11.f1)))), 0x23L)) != (*g_92)), l_685[3])) > l_685[0]), 0x65C150FFL)) && (*l_688)), 0L));
        g_718++;
    }
    else
    { 
        uint32_t *l_723[4];
        uint32_t *l_725[1][6] = {{&g_405[1],&g_405[1],&g_405[1],&g_405[1],&g_405[1],&g_405[1]}};
        uint32_t **l_724[4][6][7] = {{{&l_723[2],&l_723[3],&l_723[2],&l_723[2],&l_723[3],&l_723[2],&l_723[3]},{(void*)0,&l_725[0][2],&l_723[2],&l_723[2],&l_725[0][2],(void*)0,&l_725[0][2]},{&l_723[2],&l_723[3],&l_723[2],&l_723[2],&l_723[3],&l_723[2],&l_723[3]},{(void*)0,&l_725[0][2],&l_723[2],&l_723[2],&l_725[0][2],(void*)0,&l_725[0][2]},{&l_723[2],&l_723[3],&l_723[2],&l_723[2],&l_723[3],&l_723[2],&l_723[3]},{(void*)0,&l_725[0][2],&l_723[2],&l_723[2],&l_725[0][2],(void*)0,&l_725[0][2]}},{{&l_723[2],&l_723[3],&l_723[2],&l_723[2],&l_723[3],&l_723[2],&l_723[3]},{(void*)0,&l_725[0][2],&l_723[2],&l_723[2],&l_725[0][2],(void*)0,&l_725[0][2]},{&l_723[2],&l_723[3],&l_723[2],&l_723[2],&l_723[3],&l_723[2],&l_723[3]},{(void*)0,&l_725[0][2],&l_723[2],&l_723[2],&l_725[0][2],(void*)0,&l_725[0][2]},{&l_723[2],&l_723[3],&l_723[2],&l_723[2],&l_723[3],&l_723[2],&l_723[3]},{(void*)0,&l_725[0][2],&l_723[2],&l_723[2],&l_725[0][2],(void*)0,&l_725[0][2]}},{{&l_723[2],&l_723[3],&l_723[2],&l_723[2],&l_723[3],&l_723[2],&l_723[3]},{(void*)0,&l_725[0][2],&l_723[2],&l_723[2],&l_725[0][2],(void*)0,&l_725[0][2]},{&l_723[2],&l_723[3],&l_723[2],&l_723[2],&l_723[3],&l_723[2],&l_723[3]},{(void*)0,&l_725[0][2],&l_723[2],&l_723[2],&l_725[0][2],(void*)0,&l_725[0][2]},{&l_723[2],&l_723[3],&l_723[3],&l_723[3],&l_723[2],&l_725[0][2],&l_723[2]},{&l_725[0][2],&l_723[2],&l_725[0][2],&l_725[0][2],&l_723[2],&l_725[0][2],&l_725[0][2]}},{{&l_725[0][2],&l_723[2],&l_723[3],&l_723[3],&l_723[2],&l_725[0][2],&l_723[2]},{&l_725[0][2],&l_723[2],&l_725[0][2],&l_725[0][2],&l_723[2],&l_725[0][2],&l_725[0][2]},{&l_725[0][2],&l_723[2],&l_723[3],&l_723[3],&l_723[2],&l_725[0][2],&l_723[2]},{&l_725[0][2],&l_723[2],&l_725[0][2],&l_725[0][2],&l_723[2],&l_725[0][2],&l_725[0][2]},{&l_725[0][2],&l_723[2],&l_723[3],&l_723[3],&l_723[2],&l_725[0][2],&l_723[2]},{&l_725[0][2],&l_723[2],&l_725[0][2],&l_725[0][2],&l_723[2],&l_725[0][2],&l_725[0][2]}}};
        int32_t *l_727 = &g_76;
        struct S0 ***l_736 = (void*)0;
        int32_t l_737 = (-6L);
        union U4 *l_740[4][5] = {{&g_249,&g_249,&g_249,&g_249,&g_249},{&g_525,&g_249,&g_525,&g_249,&g_525},{&g_249,&g_249,&g_249,&g_249,&g_249},{&g_525,&g_249,&g_525,&g_249,&g_525}};
        uint64_t *l_768 = &g_482[0][0][1];
        uint64_t **l_767[2][1];
        uint64_t **l_769 = (void*)0;
        int64_t l_866 = 0xEE75DF0839000D07LL;
        union U2 *l_895 = &g_112;
        int32_t l_904 = 0x35078128L;
        int32_t l_905 = 9L;
        int32_t **l_915 = &l_727;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_723[i] = (void*)0;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_767[i][j] = &l_768;
        }
        (*l_727) ^= (0x49E6516FL ^ (p_11.f1 < (safe_rshift_func_int16_t_s_s((l_723[2] != (g_726 = &g_405[1])), 8))));
        for (g_563 = 0; (g_563 <= 1); g_563 += 1)
        { 
            uint64_t *l_730 = &g_482[0][0][1];
            union U3 l_735 = {0xAC6B3478938AF954LL};
            int32_t l_738 = 7L;
            int32_t *l_739 = &l_684;
            int32_t l_745 = 0x090B9589L;
            (*l_727) = (*l_727);
            (*l_739) = ((((*l_727) = (safe_mod_func_uint8_t_u_u((p_11.f1 && ((*l_730) = p_11.f1)), (*l_727)))) > (8UL != (l_738 |= (safe_add_func_int64_t_s_s(((((safe_mul_func_uint16_t_u_u(((l_735 , (void*)0) == l_736), l_737)) ^ 0xF87A1B26B88D088BLL) < l_735.f1) >= 0x01L), g_513))))) && 0x8DE718F5762D8920LL);
            for (g_43.f1 = 0; (g_43.f1 <= 1); g_43.f1 += 1)
            { 
                int16_t l_742 = 0L;
                for (g_101 = 1; (g_101 >= 0); g_101 -= 1)
                { 
                    union U4 **l_741 = &l_740[0][2];
                    int32_t *l_743[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_743[i] = &l_685[3];
                    if ((*g_92))
                        break;
                    if ((*g_92))
                        continue;
                    (*l_741) = l_740[0][2];
                    g_746--;
                }
                for (g_647 = 0; (g_647 <= 3); g_647 += 1)
                { 
                    const uint32_t *l_762 = (void*)0;
                    const uint32_t **l_761 = &l_762;
                    union U5 *l_763[5];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_763[i] = &g_764[0];
                    (*l_727) ^= (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((*g_213) = (safe_sub_func_uint32_t_u_u((!(0xAE55358FL || (*g_608))), (((**g_607) ^ p_11.f0) && (l_758[2] , (safe_mul_func_uint16_t_u_u((((l_761 == (l_724[(g_563 + 1)][(g_43.f1 + 4)][(g_563 + 3)] = &g_726)) != (*g_608)) != (**g_607)), p_11.f1))))))), l_742)) || (*l_739)), p_11.f0)), 0x75CDL));
                    l_763[0] = (void*)0;
                }
            }
        }
        if ((safe_mul_func_int16_t_s_s((l_767[0][0] == (g_770 = l_769)), ((*g_213) ^ (safe_sub_func_uint16_t_u_u(p_11.f1, (safe_mod_func_uint64_t_u_u(((*l_768) = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(1UL, (safe_add_func_int16_t_s_s(l_758[2].f2, ((safe_mul_func_int16_t_s_s((0xF5L > (*g_209)), g_556[0])) ^ 1UL))))), 0xB6406A77L)) || p_11.f0), l_684)), p_11.f0))), 0x68A1B60CDC748B95LL))))))))
        { 
            uint8_t ***l_787 = &g_507;
            int32_t l_790 = 0x362EA13EL;
            int32_t l_799 = 0x1655F412L;
            int32_t *l_800[5][7] = {{&g_5,&l_684,&l_684,&g_5,&g_5,&l_684,&l_684},{(void*)0,&l_684,(void*)0,&l_684,(void*)0,&l_684,(void*)0},{&g_5,&g_5,&l_684,&l_684,&g_5,&g_5,&l_684},{&l_684,&l_684,&l_684,&l_684,&l_684,&l_684,&l_684},{&g_5,&l_684,&l_684,&g_5,&g_5,&l_684,&l_684}};
            int i, j;
            (*l_787) = &g_508;
            l_737 &= (safe_sub_func_int32_t_s_s(((l_790 ^= 0x44L) , (safe_rshift_func_uint16_t_u_s((p_11.f1 != (safe_add_func_uint8_t_u_u(6UL, (((*g_608) = (((g_556[0] = ((safe_sub_func_uint32_t_u_u((**g_607), (safe_rshift_func_int16_t_s_u((((void*)0 != &g_667[0][0]) != 0xC1E5L), 4)))) < g_111.f0)) ^ 0UL) ^ (*l_727))) | 0xB96FD2C1L)))), 10))), l_799));
        }
        else
        { 
            const uint64_t *l_802 = &g_482[0][0][1];
            const int32_t l_805 = (-10L);
            int32_t l_808 = 0x22F00C54L;
            int32_t l_811 = 0x4AEC5556L;
            union U4 l_837 = {0L};
            int32_t l_851 = 1L;
            union U1 *l_860 = &g_96;
            int32_t *l_898 = &l_684;
            int32_t *l_899 = &l_808;
            int32_t *l_900 = &l_685[3];
            int32_t *l_901 = &g_850;
            int32_t *l_902 = &l_811;
            int32_t *l_903[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_903[i][j] = &l_737;
            }
        }
        for (g_96.f0.f0 = 0; (g_96.f0.f0 <= 0); g_96.f0.f0 += 1)
        { 
            int32_t *l_910 = &g_76;
            int32_t *l_911[1][6][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_911[i][j][k] = &l_684;
                }
            }
            g_912--;
            return p_9;
        }
        (*l_915) = (void*)0;
    }
    return l_869;
}



static union U1  func_13(union U1 * p_14, const union U1 * p_15, const uint16_t  p_16)
{ 
    int32_t *l_635 = (void*)0;
    int32_t l_636 = 3L;
    int32_t *l_637 = &g_76;
    int32_t *l_638 = (void*)0;
    int32_t *l_639 = &l_636;
    int32_t *l_640 = &l_636;
    int32_t *l_641 = &l_636;
    int32_t *l_642[1];
    int64_t l_643[6][5] = {{0x691C61AAD270FFD1LL,(-6L),0x8B7E4ED3411EFA3ELL,(-1L),0x8B7E4ED3411EFA3ELL},{(-1L),(-1L),(-3L),7L,0x899956FAE800AF2DLL},{(-6L),0x691C61AAD270FFD1LL,0x691C61AAD270FFD1LL,(-6L),0x8B7E4ED3411EFA3ELL},{0x05F9BC5C2E189DCDLL,7L,0x8BDB360130F02845LL,0x8BDB360130F02845LL,7L},{0x8B7E4ED3411EFA3ELL,0x691C61AAD270FFD1LL,(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),0x8BDB360130F02845LL,(-3L)}};
    union U3 l_659 = {0xF31FDDB663367640LL};
    union U5 ** const *l_660 = (void*)0;
    union U2 *l_665 = &g_112;
    union U2 **l_664 = &l_665;
    int i, j;
    for (i = 0; i < 1; i++)
        l_642[i] = &g_76;
lbl_663:
    g_647++;
    (*l_637) |= (safe_unary_minus_func_uint16_t_u(((safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((safe_add_func_int8_t_s_s(((((((l_659 , l_660) != g_661) , (*l_641)) && p_16) , (void*)0) != (p_16 , &g_482[0][0][1])), (*g_209))) ^ p_16), g_18.f0.f1)), (-3L))) > (-1L)), 1L)) ^ g_525.f0)));
    if (l_659.f3)
        goto lbl_663;
    (*l_664) = &g_112;
    for (g_515 = 0; (g_515 <= 0); g_515 += 1)
    { 
        int i;
        (*l_641) = 0xAF7C65D6L;
    }
    return (*g_95);
}



static const int8_t  func_19(int8_t  p_20, int16_t  p_21, union U1  p_22)
{ 
    int32_t **l_634[3];
    int i;
    for (i = 0; i < 3; i++)
        l_634[i] = &g_92;
    g_92 = &g_2;
    return (*g_209);
}



static uint16_t  func_24(union U1 * p_25, const int16_t  p_26)
{ 
    struct S0 **l_117 = &g_116;
    int32_t l_149[7] = {(-4L),0x55E7CE46L,(-4L),(-4L),0x55E7CE46L,(-4L),(-4L)};
    const int8_t *l_211 = &g_212;
    struct S0 l_278 = {0x57D1AC81L,-1L};
    union U3 l_289 = {0L};
    uint8_t l_290 = 1UL;
    union U2 l_302 = {0UL};
    uint32_t l_324 = 0x28B5B6B9L;
    union U5 *l_327 = &g_328;
    union U1 l_345 = {{4294967290UL,-5L}};
    union U1 **l_366 = &g_74;
    union U1 ***l_365 = &l_366;
    int8_t *l_442 = (void*)0;
    const union U5 *l_453 = &g_328;
    const union U5 * const *l_452 = &l_453;
    uint64_t *l_501 = &g_482[0][0][1];
    union U4 l_549 = {0xE8506630CC2137D3LL};
    uint32_t l_553[3];
    uint32_t *l_606 = &g_565;
    uint32_t **l_605 = &l_606;
    union U1 *l_619 = &l_345;
    int i;
    for (i = 0; i < 3; i++)
        l_553[i] = 1UL;
    (*l_117) = g_116;
    if ((*g_92))
    { 
        int32_t *l_118 = &g_5;
        int32_t **l_119 = &g_92;
        struct S0 l_142 = {1UL,5L};
        int16_t * const l_146[7][5] = {{(void*)0,(void*)0,&g_68,(void*)0,(void*)0},{&g_102,(void*)0,&g_68,(void*)0,&g_102},{(void*)0,(void*)0,&g_68,(void*)0,(void*)0},{&g_102,(void*)0,&g_68,(void*)0,&g_102},{(void*)0,(void*)0,&g_68,(void*)0,(void*)0},{&g_102,(void*)0,&g_68,(void*)0,&g_102},{(void*)0,(void*)0,&g_68,(void*)0,(void*)0}};
        union U2 l_150 = {0UL};
        int32_t l_218 = 7L;
        union U4 *l_248 = &g_249;
        int i, j;
        (*l_119) = l_118;
        for (g_103 = 23; (g_103 == 53); ++g_103)
        { 
            uint32_t l_122 = 0x1CC8E035L;
            int32_t l_148 = 0L;
            union U1 *l_154[4];
            struct S0 l_159 = {0x6BC1F71CL,0x8AL};
            uint16_t l_216[5][4][5] = {{{0x6485L,0x69D1L,0x04E8L,65535UL,3UL},{0x1173L,1UL,65535UL,65528UL,3UL},{9UL,0x5342L,65527UL,8UL,0xC38CL},{1UL,0xD6BDL,5UL,0xD6BDL,1UL}},{{0x0878L,1UL,1UL,65535UL,0xC38CL},{6UL,0x9D96L,0xF7CEL,0x72E0L,1UL},{0x69D1L,8UL,8UL,1UL,0xC38CL},{0x255AL,0x72E0L,0x7D72L,0xB599L,1UL}},{{0xC38CL,1UL,0xEA8BL,1UL,0xC38CL},{65528UL,65532UL,0x5070L,0x9D96L,1UL},{65535UL,65535UL,0UL,0x5342L,0xC38CL},{0x8D34L,0xB599L,65526UL,65532UL,1UL}},{{9UL,0x5342L,65527UL,8UL,0xC38CL},{1UL,0xD6BDL,5UL,0xD6BDL,1UL},{0x0878L,1UL,1UL,65535UL,0xC38CL},{6UL,0x9D96L,0xF7CEL,0x72E0L,1UL}},{{0x69D1L,8UL,8UL,1UL,0xC38CL},{0x255AL,0x72E0L,0x7D72L,0xB599L,1UL},{0xC38CL,1UL,0xEA8BL,1UL,0xC38CL},{65528UL,65532UL,0x5070L,0x9D96L,1UL}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_154[i] = &g_96;
            l_122 = 0x7AC4CB54L;
            for (g_96.f1 = 0; (g_96.f1 < 16); g_96.f1++)
            { 
                uint64_t l_130 = 0xC381FEC7F1FF5BAELL;
                int8_t *l_147[3][2][1] = {{{&g_18.f0.f1},{&g_18.f0.f1}},{{&g_18.f0.f1},{&g_18.f0.f1}},{{&g_18.f0.f1},{&g_18.f0.f1}}};
                int32_t l_161 = 0x53139573L;
                union U5 l_174 = {0UL};
                int16_t l_177[4][5][2] = {{{(-1L),0x6C3DL},{0xF185L,0x6C3DL},{(-1L),1L},{(-1L),0x6C3DL},{0xF185L,0x6C3DL}},{{(-1L),1L},{(-1L),0x6C3DL},{0xF185L,0x6C3DL},{(-1L),1L},{(-1L),0x6C3DL}},{{0xF185L,0x6C3DL},{(-1L),1L},{(-1L),0x6C3DL},{0xF185L,0x6C3DL},{(-1L),1L}},{{(-1L),0x6C3DL},{0xF185L,0x6C3DL},{(-1L),1L},{(-1L),0x6C3DL},{0xF185L,0x6C3DL}}};
                int32_t l_180 = (-3L);
                union U4 l_206 = {7L};
                int i, j, k;
                for (g_68 = 0; (g_68 <= (-19)); g_68 = safe_sub_func_uint64_t_u_u(g_68, 1))
                { 
                    int32_t *l_127 = &g_76;
                    int32_t *l_128 = &g_76;
                    int32_t *l_129[6][1][2] = {{{(void*)0,&g_5}},{{(void*)0,(void*)0}},{{&g_5,(void*)0}},{{(void*)0,&g_5}},{{(void*)0,(void*)0}},{{&g_5,(void*)0}}};
                    int i, j, k;
                    --l_130;
                }
            }
            for (g_96.f1 = 0; (g_96.f1 <= 6); g_96.f1 += 1)
            { 
                for (l_142.f0 = 0; (l_142.f0 <= 6); l_142.f0 += 1)
                { 
                    int i;
                    l_149[l_142.f0] = (-4L);
                    if (l_149[l_142.f0])
                        break;
                    if ((*g_92))
                        break;
                }
            }
            (*l_119) = &l_149[0];
        }
    }
    else
    { 
        int16_t l_265 = (-1L);
        int32_t l_293 = (-3L);
        union U4 *l_303[3];
        int32_t l_351 = 0L;
        union U3 l_357 = {9L};
        union U5 l_364 = {1UL};
        int32_t l_393[6] = {0x7583D3E0L,0x1B61A870L,0x1B61A870L,0x7583D3E0L,0x1B61A870L,0x1B61A870L};
        int32_t l_400 = 0xDEB38E52L;
        uint16_t l_402 = 0xFB0AL;
        union U2 l_441 = {0UL};
        int8_t *l_455 = &g_214;
        uint8_t l_459 = 0UL;
        uint32_t l_578 = 4294967290UL;
        uint8_t **l_594 = &g_508;
        uint32_t l_595 = 6UL;
        int32_t *l_596 = &l_293;
        int i;
        for (i = 0; i < 3; i++)
            l_303[i] = &g_249;
    }
    return l_289.f2;
}



static union U1 * func_27(int32_t  p_28, int64_t  p_29, union U1 * p_30)
{ 
    int32_t * const l_113[6] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
    int32_t **l_114 = &g_92;
    int i;
    g_110[0] = g_110[0];
    (*l_114) = (g_112 , l_113[1]);
    return &g_18;
}



static int32_t  func_31(union U1 * p_32, int16_t  p_33, struct S0  p_34, union U1 * p_35)
{ 
    int32_t *l_97 = &g_76;
    int32_t *l_98 = (void*)0;
    int32_t *l_99 = &g_76;
    int32_t *l_100[2];
    int i;
    for (i = 0; i < 2; i++)
        l_100[i] = &g_76;
    g_103--;
    --g_107;
    return (*l_97);
}



static const struct S0  func_38(union U3  p_39, union U4  p_40, union U1 * p_41, int32_t  p_42)
{ 
    uint64_t l_60 = 0x7E7C0CE695EF2B5DLL;
    int32_t l_64 = 0x92FF8224L;
    int8_t l_87 = 3L;
    int32_t *l_89 = &g_76;
    int32_t **l_88 = &l_89;
    int32_t **l_90 = (void*)0;
    int32_t **l_91[3];
    const struct S0 l_93 = {4294967295UL,-1L};
    int i;
    for (i = 0; i < 3; i++)
        l_91[i] = (void*)0;
    for (p_39.f1 = 0; (p_39.f1 <= 57); p_39.f1++)
    { 
        uint64_t *l_61 = &l_60;
        int64_t l_65 = 0xF5B04CE9D0615A03LL;
        int16_t *l_66 = (void*)0;
        int16_t *l_67[2][3][6] = {{{&g_68,(void*)0,&g_68,&g_68,&g_68,(void*)0},{&g_68,(void*)0,&g_68,&g_68,&g_68,(void*)0},{&g_68,(void*)0,&g_68,&g_68,&g_68,(void*)0}},{{&g_68,(void*)0,&g_68,&g_68,&g_68,(void*)0},{&g_68,(void*)0,&g_68,&g_68,&g_68,(void*)0},{&g_68,&g_68,(void*)0,(void*)0,(void*)0,&g_68}}};
        int32_t *l_71 = &l_64;
        union U1 *l_73 = &g_18;
        union U1 **l_72[6] = {&l_73,&l_73,&l_73,&l_73,&l_73,&l_73};
        int32_t *l_75 = &g_76;
        union U2 l_86 = {0x2CBEB03C758019D4LL};
        int i, j, k;
        l_64 = ((safe_mod_func_int64_t_s_s((1UL | (((safe_rshift_func_int16_t_s_s((g_68 ^= (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0xC4L, ((safe_div_func_uint8_t_u_u(g_43.f2, (safe_mul_func_uint8_t_u_u(((((*l_61) = l_60) > (safe_mod_func_uint16_t_u_u(p_39.f3, l_64))) < l_64), l_65)))) || l_64))), p_40.f0))), 10)) <= 0xE6A83B1DL) <= p_39.f1)), p_39.f1)) , g_5);
        (*l_71) = (safe_div_func_uint32_t_u_u(l_65, p_40.f0));
        g_74 = &g_18;
        (*l_75) = ((*l_71) = p_42);
        for (g_18.f0.f1 = 0; (g_18.f0.f1 < (-8)); g_18.f0.f1--)
        { 
            union U1 ***l_79 = &l_72[2];
            const uint64_t *l_80[2][2] = {{&l_60,&l_60},{&l_60,&l_60}};
            const uint64_t **l_81 = &l_80[0][0];
            int i, j;
            (*l_79) = &p_41;
            (*l_71) ^= (((((((*l_81) = l_80[0][0]) == l_61) >= (((void*)0 == g_82) , (((((safe_mul_func_uint8_t_u_u((l_86 , p_42), l_87)) == p_42) == 8UL) <= l_60) , 2UL))) && (*l_75)) && g_76) != 0xEDL);
        }
    }
    g_92 = ((*l_88) = &p_42);
    return l_93;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_18.f0.f0, "g_18.f0.f0", print_hash_value);
    transparent_crc(g_18.f0.f1, "g_18.f0.f1", print_hash_value);
    transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
    transparent_crc(g_43.f3, "g_43.f3", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_96.f0.f0, "g_96.f0.f0", print_hash_value);
    transparent_crc(g_96.f0.f1, "g_96.f0.f1", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_249.f0, "g_249.f0", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_328.f0, "g_328.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_368[i][j][k], "g_368[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_398, "g_398", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_405[i], "g_405[i]", print_hash_value);

    }
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_482[i][j][k], "g_482[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_512[i][j][k], "g_512[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_525.f0, "g_525.f0", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_556[i], "g_556[i]", print_hash_value);

    }
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_667[i][j].f0, "g_667[i][j].f0", print_hash_value);
            transparent_crc(g_667[i][j].f1, "g_667[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_764[i].f0, "g_764[i].f0", print_hash_value);

    }
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_835.f1, "g_835.f1", print_hash_value);
    transparent_crc(g_835.f3, "g_835.f3", print_hash_value);
    transparent_crc(g_850, "g_850", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_889[i][j][k], "g_889[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_907, "g_907", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_931[i][j][k].f0, "g_931[i][j][k].f0", print_hash_value);
                transparent_crc(g_931[i][j][k].f1, "g_931[i][j][k].f1", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_978[i][j][k], "g_978[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_979, "g_979", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_996[i][j].f0, "g_996[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_998.f0, "g_998.f0", print_hash_value);
    transparent_crc(g_1012, "g_1012", print_hash_value);
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1064, "g_1064", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    transparent_crc(g_1087, "g_1087", print_hash_value);
    transparent_crc(g_1088, "g_1088", print_hash_value);
    transparent_crc(g_1112, "g_1112", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1135[i], "g_1135[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
