// SPDX-License-Identifier: MIT
// cctest_csmith_9fcf36b9.c --- cctest case csmith_9fcf36b9 (csmith seed 2681157305)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x10a44af0 */

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

// Options:   -s 2681157305 -o /tmp/csmith_gen_597ww5c3/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 28;
};
#pragma pack(pop)

struct S2 {
   uint32_t  f0;
   const struct S0  f1;
   const int64_t  f2;
};

union U3 {
   struct S2  f0;
   int64_t  f1;
};


static uint16_t g_14 = 0x9310L;
static int64_t g_16[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
static struct S1 g_29[1] = {{3555}};
static int64_t *g_30 = &g_16[1];
static int32_t g_43 = (-10L);
static int32_t *g_44 = (void*)0;
static int32_t g_45[3][7][7] = {{{0L,0L,0xC160EC25L,1L,0x04DBC0BAL,6L,1L},{0L,0xF65CE17CL,2L,0x04DBC0BAL,0xE376A952L,0L,0x437E1032L},{0x4FEF5379L,0x42D94904L,1L,0xF4FC6A3FL,1L,1L,1L},{0L,0L,4L,0x42D94904L,5L,4L,1L},{1L,3L,5L,0x7520C256L,5L,0xE40C8830L,0x58D83F7CL},{0xF65CE17CL,0x05F67326L,0x167D3D8EL,(-7L),1L,(-1L),0x167D3D8EL},{0x1D127A4EL,1L,0xE40C8830L,0xE40C8830L,1L,0x1D127A4EL,0L}},{{(-9L),0x167D3D8EL,0x04DBC0BAL,0xA4860C01L,1L,0xD5AB883EL,1L},{3L,(-10L),1L,0xC160EC25L,0xC50D5D74L,3L,0L},{2L,0x167D3D8EL,0x7F2F1E73L,2L,0L,0x668F781BL,(-1L)},{1L,1L,0xF4FC6A3FL,1L,0x42D94904L,0x4FEF5379L,6L},{3L,1L,(-1L),4L,1L,0L,0xBC46D767L},{1L,(-9L),0xD8169B41L,5L,0x05F67326L,0L,0xC50D5D74L},{0xC160EC25L,4L,0x7520C256L,0x167D3D8EL,3L,0x4FEF5379L,1L}},{{4L,0x668F781BL,0L,0L,0L,0x668F781BL,4L},{0x999C826FL,4L,2L,0xC50D5D74L,(-9L),3L,0x7F2F1E73L},{6L,0x2FC3C737L,0xAF09D89CL,0x167D3D8EL,0x42D94904L,0xD5AB883EL,3L},{0L,5L,2L,0L,1L,0x1D127A4EL,4L},{0xD8169B41L,0L,0L,0L,0L,(-1L),0x999C826FL},{0L,0x2FC3C737L,0x7520C256L,1L,1L,0L,1L},{4L,0L,0xD8169B41L,1L,3L,4L,1L}}};
static int16_t g_69 = (-1L);
static struct S0 g_73 = {0x5BL,0L};
static struct S0 *g_72[7][1][4] = {{{&g_73,(void*)0,&g_73,&g_73}},{{&g_73,(void*)0,&g_73,&g_73}},{{(void*)0,&g_73,&g_73,(void*)0}},{{&g_73,&g_73,&g_73,&g_73}},{{(void*)0,&g_73,&g_73,&g_73}},{{&g_73,&g_73,&g_73,&g_73}},{{&g_73,&g_73,&g_73,&g_73}}};
static uint16_t g_136 = 0x2B0EL;
static struct S2 g_143 = {0x514C4754L,{255UL,1L},0x6BC8FAAC2A5FD6FELL};
static int8_t g_148 = 0x87L;
static union U3 g_242 = {{0UL,{1UL,0xA3A90006L},0x7EB821A7CDE2C682LL}};
static uint64_t g_312 = 0x08F56A5EF3537DCCLL;
static struct S0 *g_404[2][4][5] = {{{&g_73,&g_73,&g_73,&g_73,(void*)0},{&g_73,(void*)0,(void*)0,&g_73,&g_73},{&g_73,(void*)0,&g_73,&g_73,&g_73},{(void*)0,(void*)0,&g_73,(void*)0,&g_73}},{{&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,&g_73,&g_73,(void*)0},{&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,(void*)0,(void*)0,&g_73,&g_73}}};
static union U3 g_421 = {{0UL,{3UL,0x65CFEA65L},5L}};
static struct S0 g_446 = {1UL,0x081D7FDCL};
static struct S0 * const g_445 = &g_446;
static struct S0 * const *g_444 = &g_445;
static struct S0 * const **g_443[4][6] = {{&g_444,(void*)0,&g_444,&g_444,&g_444,(void*)0},{&g_444,(void*)0,&g_444,&g_444,&g_444,&g_444},{&g_444,(void*)0,(void*)0,&g_444,&g_444,&g_444},{&g_444,&g_444,&g_444,&g_444,&g_444,&g_444}};
static uint32_t g_449 = 0x163F761DL;
static int64_t g_450 = (-2L);
static int32_t *** const g_451[3] = {(void*)0,(void*)0,(void*)0};
static struct S2 g_509 = {18446744073709551615UL,{0x59L,-1L},0xBB05BCBF61D661E4LL};
static struct S2 g_577 = {5UL,{254UL,0x9F53F0A1L},-5L};
static struct S2 *g_576 = &g_577;
static int16_t g_588 = 0x895DL;
static union U3 g_595 = {{18446744073709551615UL,{0x14L,0xBEBD128BL},0xB986D1A170114457LL}};
static union U3 *g_594 = &g_595;
static struct S0 **g_600[7] = {&g_72[3][0][1],&g_404[1][3][2],&g_404[1][3][2],&g_72[3][0][1],&g_404[1][3][2],&g_404[1][3][2],&g_72[3][0][1]};
static int64_t g_634 = 8L;
static int8_t g_749 = 0x64L;
static int8_t g_753 = 0x1AL;
static int32_t g_756 = 0x4E7501F1L;
static int64_t *g_820 = &g_16[3];
static struct S1 g_855 = {15546};
static int64_t g_898 = 0x42270179743AE6CDLL;
static uint64_t g_991[1] = {18446744073709551614UL};
static struct S2 g_1092 = {0x7EFD23E0L,{247UL,-10L},0x9E020A92F80B5F54LL};
static struct S2 g_1191 = {1UL,{0xC3L,6L},0xCF34DC8C02C748CFLL};
static uint32_t g_1197 = 0xEC5E1057L;
static struct S1 g_1236 = {3444};
static uint32_t *g_1245[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t * const *g_1281 = &g_1245[3];
static uint32_t * const * const *g_1280[4][5] = {{&g_1281,&g_1281,&g_1281,&g_1281,&g_1281},{(void*)0,(void*)0,&g_1281,(void*)0,&g_1281},{(void*)0,(void*)0,&g_1281,&g_1281,&g_1281},{&g_1281,&g_1281,&g_1281,&g_1281,&g_1281}};
static uint32_t g_1340[6][3] = {{18446744073709551611UL,18446744073709551608UL,18446744073709551611UL},{0xEE4BC614L,0xDCF5A86FL,0xDCF5A86FL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{0xEE4BC614L,0xEE4BC614L,0xDCF5A86FL},{18446744073709551611UL,18446744073709551608UL,18446744073709551611UL},{0xEE4BC614L,0xDCF5A86FL,0xDCF5A86FL}};
static const uint8_t g_1356 = 1UL;
static struct S1 *g_1363 = &g_29[0];
static struct S1 **g_1362 = &g_1363;
static uint32_t g_1406 = 18446744073709551615UL;
static int16_t g_1430 = (-7L);
static int32_t *****g_1439 = (void*)0;
static const int8_t g_1476 = 0xEDL;
static struct S0 *g_1502[1] = {(void*)0};
static uint32_t ** const g_1594 = (void*)0;
static uint32_t ** const *g_1593 = &g_1594;
static uint32_t g_1761 = 4294967290UL;
static const uint32_t g_1835 = 4294967295UL;
static int32_t g_1865 = 0x791CC5CAL;
static int16_t g_1869 = 0xEADFL;
static struct S2 **g_1903 = &g_576;
static struct S2 ***g_1902 = &g_1903;
static union U3 *** const *g_1910 = (void*)0;
static union U3 ***g_1912 = (void*)0;
static union U3 ****g_1911[7][3][1] = {{{&g_1912},{&g_1912},{&g_1912}},{{&g_1912},{&g_1912},{&g_1912}},{{&g_1912},{&g_1912},{&g_1912}},{{&g_1912},{&g_1912},{&g_1912}},{{&g_1912},{&g_1912},{&g_1912}},{{&g_1912},{&g_1912},{&g_1912}},{{&g_1912},{&g_1912},{&g_1912}}};
static union U3 g_2040 = {{0xF58A89B0L,{6UL,0x81540636L},0xE6ECA0ADB7E7919DLL}};
static struct S1 ***g_2080 = &g_1362;
static struct S1 ****g_2079 = &g_2080;
static struct S1 *****g_2078 = &g_2079;
static int32_t **g_2265 = (void*)0;
static int32_t ***g_2264 = &g_2265;
static int32_t ****g_2263[2][1] = {{&g_2264},{&g_2264}};
static int8_t g_2271 = 0x6FL;
static uint32_t g_2325 = 0xCF630E15L;
static uint16_t **g_2378 = (void*)0;
static uint8_t g_2412[6] = {0xA1L,0xA1L,0xA1L,0xA1L,0xA1L,0xA1L};
static uint32_t *g_2415[3] = {&g_509.f0,&g_509.f0,&g_509.f0};
static uint32_t **g_2414 = &g_2415[1];
static int32_t g_2489[3][3][3] = {{{9L,0x252C1483L,0x252C1483L},{9L,0x252C1483L,0x252C1483L},{9L,0x252C1483L,0x252C1483L}},{{9L,0x252C1483L,0x252C1483L},{9L,0x252C1483L,0x252C1483L},{9L,0x252C1483L,0x252C1483L}},{{9L,0x252C1483L,0x252C1483L},{9L,0x252C1483L,0x252C1483L},{9L,0x252C1483L,0x252C1483L}}};
static uint32_t *g_2563 = &g_1761;
static uint8_t g_2583 = 0UL;
static uint8_t g_2585 = 0xE0L;
static union U3 g_2591 = {{3UL,{1UL,0x2C9A9850L},8L}};



static int16_t  func_1(void);
static int32_t  func_2(uint32_t  p_3);
static uint32_t  func_4(int32_t  p_5, struct S0  p_6, struct S0  p_7, int32_t  p_8, uint8_t  p_9);
static uint8_t  func_18(const int64_t * p_19, int64_t  p_20, int64_t * p_21, int16_t  p_22);
static int8_t  func_23(struct S1  p_24, int64_t * p_25, const struct S1  p_26, const int64_t * p_27, struct S2  p_28);
static uint32_t  func_31(int64_t * const  p_32);
static int64_t * const  func_33(int64_t * p_34, struct S0  p_35, int64_t * p_36);
static int64_t * func_37(uint32_t  p_38, int64_t * p_39);




static int16_t  func_1(void)
{ 
    int64_t *l_15[6] = {&g_16[2],&g_16[2],&g_16[2],&g_16[2],&g_16[2],&g_16[2]};
    int32_t l_17 = 0xF5B1B6FDL;
    struct S0 l_821 = {0x79L,0x8D3B4B5DL};
    struct S2 l_1552[1][7] = {{{18446744073709551613UL,{255UL,0x2F3684B1L},0L},{18446744073709551615UL,{253UL,0L},0x8847D12211C3B9DALL},{18446744073709551615UL,{253UL,0L},0x8847D12211C3B9DALL},{18446744073709551613UL,{255UL,0x2F3684B1L},0L},{18446744073709551615UL,{253UL,0L},0x8847D12211C3B9DALL},{18446744073709551615UL,{253UL,0L},0x8847D12211C3B9DALL},{18446744073709551613UL,{255UL,0x2F3684B1L},0L}}};
    const int64_t *l_1935 = (void*)0;
    const int64_t **l_1934 = &l_1935;
    uint8_t *l_1937 = &g_73.f0;
    int32_t l_2116 = (-1L);
    const union U3 **l_2125 = (void*)0;
    const union U3 ***l_2124 = &l_2125;
    const union U3 *** const *l_2123 = &l_2124;
    const union U3 *** const **l_2126 = (void*)0;
    const union U3 *** const **l_2127 = &l_2123;
    const uint32_t * const l_2134 = (void*)0;
    uint16_t *l_2137 = &g_14;
    int16_t l_2138 = 0x9BBDL;
    int8_t *l_2139[2][4];
    uint8_t l_2169 = 0xAEL;
    int32_t l_2194[6] = {0x6D31851BL,0x6D31851BL,0x6D31851BL,0x6D31851BL,0x6D31851BL,0x6D31851BL};
    int32_t l_2200 = 0L;
    int8_t l_2216[1];
    int16_t l_2242 = 0x1614L;
    const uint64_t l_2290 = 1UL;
    int32_t *l_2308 = &l_2116;
    uint64_t **l_2310 = (void*)0;
    uint64_t ***l_2309 = &l_2310;
    uint32_t l_2312 = 4294967288UL;
    int32_t ****l_2350 = (void*)0;
    uint32_t l_2355 = 0UL;
    int16_t *l_2409 = &l_2242;
    uint64_t l_2436 = 0x8DC4868384449448LL;
    int16_t l_2438 = 0x2DB7L;
    uint32_t l_2440 = 0UL;
    uint64_t l_2480 = 1UL;
    int16_t l_2567 = 4L;
    uint16_t l_2579 = 0UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_2139[i][j] = &g_749;
    }
    for (i = 0; i < 1; i++)
        l_2216[i] = 1L;
    return g_242.f0.f2;
}



static int32_t  func_2(uint32_t  p_3)
{ 
    uint64_t *l_1940 = &g_991[0];
    uint64_t **l_1941 = &l_1940;
    struct S1 * const **l_1943 = (void*)0;
    struct S1 * const ***l_1942[5][5][2] = {{{&l_1943,&l_1943},{(void*)0,&l_1943},{&l_1943,&l_1943},{&l_1943,&l_1943},{&l_1943,&l_1943}},{{&l_1943,&l_1943},{&l_1943,&l_1943},{&l_1943,(void*)0},{&l_1943,&l_1943},{&l_1943,&l_1943}},{{&l_1943,&l_1943},{&l_1943,&l_1943},{&l_1943,&l_1943},{&l_1943,&l_1943},{(void*)0,&l_1943}},{{&l_1943,&l_1943},{&l_1943,&l_1943},{&l_1943,&l_1943},{&l_1943,&l_1943},{&l_1943,&l_1943}},{{&l_1943,(void*)0},{&l_1943,&l_1943},{&l_1943,&l_1943},{&l_1943,&l_1943},{&l_1943,&l_1943}}};
    uint64_t *l_1945[4][7] = {{&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0],&g_991[0],&g_312},{&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0],&g_991[0],&g_312},{&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0],&g_991[0],&g_312},{&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0],&g_991[0],&g_312}};
    uint64_t **l_1944 = &l_1945[0][2];
    int32_t *l_1946 = (void*)0;
    uint32_t **l_1959 = (void*)0;
    uint32_t ***l_1958 = &l_1959;
    uint32_t ****l_1957 = &l_1958;
    struct S2 l_1960 = {18446744073709551615UL,{0x55L,-1L},0xC4E49CAF053B50BCLL};
    union U3 ****l_1971 = &g_1912;
    int32_t l_1985 = 0x3A523A5BL;
    int32_t l_1986 = 1L;
    int32_t l_1988 = 0x92668A2AL;
    int32_t l_1989 = (-1L);
    int32_t l_1990 = 0L;
    int32_t l_1991 = 0xB4ECD82EL;
    int32_t l_1992[1];
    struct S0 **l_2021 = &g_1502[0];
    union U3 *l_2039 = &g_2040;
    uint8_t l_2061 = 0x6BL;
    uint64_t l_2110 = 0xC83944E22DBB2E2CLL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1992[i] = 0x182C662BL;
lbl_2065:
    l_1946 = ((((*l_1941) = l_1940) == ((*l_1944) = (((void*)0 != l_1942[1][0][1]) , &g_991[0]))) , l_1946);
    if ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(p_3, ((safe_lshift_func_int8_t_s_s(((void*)0 != l_1957), 6)) || (g_753 != p_3)))), ((*g_30) |= 0x7B1AC98C3E2E3E2ALL))), 6)), 3)))
    { 
        uint16_t l_1970 = 65526UL;
        union U3 **** const l_1972 = &g_1912;
        int32_t l_1974[6][7][3] = {{{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L},{0x6F5F88D2L,6L,0L},{0x919FD844L,0xBC7DB13CL,0x919FD844L},{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L},{0x6F5F88D2L,6L,0L}},{{0x919FD844L,0xBC7DB13CL,0x919FD844L},{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L},{0x6F5F88D2L,6L,0L},{0x919FD844L,0xBC7DB13CL,0x919FD844L},{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L}},{{0x6F5F88D2L,6L,0L},{0x919FD844L,0xBC7DB13CL,0x919FD844L},{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L},{0x6F5F88D2L,6L,0L},{0x919FD844L,0xBC7DB13CL,0x919FD844L},{0x6F5F88D2L,0xBE070EAEL,0L}},{{0L,0xBC7DB13CL,0L},{0x6F5F88D2L,6L,0L},{0x919FD844L,0xBC7DB13CL,0x919FD844L},{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L},{0x6F5F88D2L,6L,0L},{0x919FD844L,0xBC7DB13CL,0x919FD844L}},{{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L},{0x6F5F88D2L,6L,0L},{0x919FD844L,0xBC7DB13CL,0x919FD844L},{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L},{0x6F5F88D2L,6L,0L}},{{0x919FD844L,0xBC7DB13CL,0x919FD844L},{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L},{0x6F5F88D2L,6L,0L},{0x919FD844L,0xBC7DB13CL,0x919FD844L},{0x6F5F88D2L,0xBE070EAEL,0L},{0L,0xBC7DB13CL,0L}}};
        int32_t *l_2011 = &g_45[0][3][0];
        int i, j, k;
        for (g_898 = 0; (g_898 >= 0); g_898 -= 1)
        { 
            int32_t **l_1963 = &l_1946;
            int32_t ***l_1962 = &l_1963;
            int32_t ****l_1961 = &l_1962;
            int32_t *l_1973[6][3][1] = {{{&g_45[1][6][2]},{(void*)0},{&g_45[1][6][2]}},{{&g_45[1][6][2]},{&g_45[1][6][2]},{(void*)0}},{{&g_45[1][6][2]},{&g_45[1][6][2]},{&g_45[1][6][2]}},{{(void*)0},{&g_45[1][6][2]},{&g_45[1][6][2]}},{{&g_45[1][6][2]},{(void*)0},{&g_45[1][6][2]}},{{&g_45[1][6][2]},{&g_45[1][6][2]},{(void*)0}}};
            int i, j, k;
            l_1974[2][2][1] |= (g_588 | (((l_1960 , (g_509.f1.f1 , l_1961)) != ((((safe_mul_func_int8_t_s_s(((p_3 && (g_991[g_898] &= (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_1970, (l_1971 == l_1972))), 0xC8L)))) == p_3), 255UL)) , g_1191.f0) , l_1960.f1.f0) , &l_1962)) & p_3));
        }
        for (g_143.f0 = 0; (g_143.f0 <= 2); g_143.f0 = safe_add_func_uint32_t_u_u(g_143.f0, 2))
        { 
            int32_t *l_1977 = &g_45[1][6][2];
            int32_t *l_1978 = &l_1974[1][4][1];
            int32_t l_1979[7] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
            int32_t *l_1980 = &l_1974[2][2][1];
            int32_t *l_1981 = &l_1979[2];
            int32_t *l_1982 = &g_45[2][2][1];
            int32_t *l_1983 = (void*)0;
            int32_t *l_1984[7][7][2] = {{{&g_43,&l_1974[2][2][1]},{(void*)0,&g_45[1][6][2]},{(void*)0,&l_1974[2][2][1]},{&g_43,&l_1979[3]},{&l_1974[2][2][1],(void*)0},{&l_1979[3],&l_1979[3]},{&g_45[1][6][2],&g_45[0][3][3]}},{{&g_45[0][3][3],&g_45[0][3][3]},{&g_45[1][6][2],&l_1979[3]},{(void*)0,&g_43},{&g_45[1][6][2],&g_45[1][6][2]},{&l_1979[3],&g_45[1][6][2]},{&l_1979[2],&l_1979[3]},{&l_1979[2],&g_45[1][6][2]}},{{&l_1979[3],&g_45[1][6][2]},{&g_45[1][6][2],&g_43},{(void*)0,&l_1979[3]},{&g_45[1][6][2],&g_45[0][3][3]},{&g_45[0][3][3],&g_45[0][3][3]},{&g_45[1][6][2],&l_1979[3]},{(void*)0,&g_43}},{{&g_45[1][6][2],&g_45[1][6][2]},{&l_1979[3],&g_45[1][6][2]},{&l_1979[2],&l_1979[3]},{&l_1979[2],&g_45[1][6][2]},{&l_1979[3],&g_45[1][6][2]},{&g_45[1][6][2],&g_43},{(void*)0,&l_1979[3]}},{{&g_45[1][6][2],&g_45[0][3][3]},{&g_45[0][3][3],&g_45[0][3][3]},{&g_45[1][6][2],&l_1979[3]},{(void*)0,&g_43},{&g_45[1][6][2],&g_45[1][6][2]},{&l_1979[3],&g_45[1][6][2]},{&l_1979[2],&l_1979[3]}},{{&l_1979[2],&g_45[1][6][2]},{&l_1979[3],&g_45[1][6][2]},{&g_45[1][6][2],&g_43},{(void*)0,&l_1979[3]},{&g_45[1][6][2],&g_45[0][3][3]},{&g_45[0][3][3],&g_45[0][3][3]},{&g_45[1][6][2],&l_1979[3]}},{{(void*)0,&g_43},{&g_45[1][6][2],&g_45[1][6][2]},{&l_1979[3],&g_45[1][6][2]},{&l_1979[2],&l_1979[3]},{&l_1979[2],&g_45[1][6][2]},{&l_1979[3],&g_45[1][6][2]},{&g_45[1][6][2],&g_43}}};
            int8_t l_1987 = (-1L);
            uint8_t l_1993 = 252UL;
            struct S1 l_1996 = {2555};
            uint16_t l_1997[1][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1997[i][j] = 0x1AE9L;
            }
            ++l_1993;
            l_1996 = (**g_1362);
            --l_1997[0][0];
            for (g_312 = 0; (g_312 == 59); g_312 = safe_add_func_uint16_t_u_u(g_312, 8))
            { 
                return p_3;
            }
        }
        if (l_1974[0][4][1])
        { 
            return p_3;
        }
        else
        { 
            union U3 l_2002 = {{0xD221595FL,{0xC9L,-1L},0x22A44B1EA3EF8ABBLL}};
            uint32_t *l_2005 = &g_1406;
            int32_t **l_2008 = &l_1946;
            int32_t ***l_2007 = &l_2008;
            int32_t ****l_2006 = &l_2007;
            int32_t *l_2009 = &l_1992[0];
            int32_t *l_2010 = &l_1989;
            (*l_2010) |= ((*l_2009) = (l_2002 , (safe_rshift_func_uint16_t_u_u(((void*)0 != l_2005), ((void*)0 != l_2006)))));
        }
        if (((*l_2011) = l_1970))
        { 
            return (*l_2011);
        }
        else
        { 
            int32_t l_2012[2];
            int i;
            for (i = 0; i < 2; i++)
                l_2012[i] = 1L;
            l_2012[1] = p_3;
        }
        (*l_2011) ^= p_3;
    }
    else
    { 
        uint32_t l_2030[2][4][5] = {{{18446744073709551615UL,0x9ACE85C9L,18446744073709551615UL,0x0FBE669CL,18446744073709551615UL},{0x22F7D754L,0x22F7D754L,1UL,0xCB3132CCL,0xDC9C167BL},{0x6ACF6593L,0x0FBE669CL,18446744073709551615UL,0x0FBE669CL,0x6ACF6593L},{0xDC9C167BL,0xCB3132CCL,1UL,0x22F7D754L,0x22F7D754L}},{{18446744073709551615UL,0x0FBE669CL,18446744073709551615UL,0x9ACE85C9L,18446744073709551615UL},{0xDC9C167BL,0x22F7D754L,0xCB3132CCL,0xCB3132CCL,0x22F7D754L},{0x6ACF6593L,0x9ACE85C9L,18446744073709551615UL,0x9ACE85C9L,0x6ACF6593L},{0x22F7D754L,0xCB3132CCL,0xCB3132CCL,0x22F7D754L,0xDC9C167BL}}};
        uint32_t l_2032 = 2UL;
        int32_t l_2036 = 0xBAF8E387L;
        union U3 * const *l_2086 = &g_594;
        union U3 * const **l_2085[1];
        int32_t *l_2102 = &l_2036;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2085[i] = &l_2086;
        for (l_1985 = 0; (l_1985 >= (-14)); l_1985 = safe_sub_func_int8_t_s_s(l_1985, 1))
        { 
            const int16_t l_2033 = 0x9452L;
            union U3 *l_2038 = &g_242;
            int32_t l_2062 = 3L;
            struct S0 l_2072 = {253UL,0x820AE596L};
            union U3 **l_2088[5][7] = {{&l_2039,&l_2039,&l_2038,&l_2039,&l_2039,&l_2038,&l_2039},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2039,&l_2039,&l_2039,&l_2039,&l_2039,&l_2039,&l_2039},{(void*)0,(void*)0,&g_594,(void*)0,(void*)0,&g_594,(void*)0},{&l_2039,&l_2039,&l_2039,&l_2039,&l_2039,&l_2039,&l_2039}};
            union U3 ***l_2087 = &l_2088[2][5];
            int64_t l_2100 = 0xA516F9BB1D7BB205LL;
            int8_t *l_2101 = &g_749;
            int i, j;
            for (p_3 = 0; (p_3 >= 37); p_3 = safe_add_func_int32_t_s_s(p_3, 7))
            { 
                int32_t *l_2031[7][6] = {{(void*)0,&g_45[1][6][2],&l_1992[0],&g_45[2][4][3],&g_45[2][4][3],&l_1992[0]},{(void*)0,(void*)0,&g_45[2][4][3],&g_43,(void*)0,&g_43},{&g_45[1][6][2],(void*)0,&g_45[1][6][2],&l_1992[0],&g_45[2][4][3],&g_45[2][4][3]},{&l_1986,&g_45[1][6][2],&g_45[1][6][2],&l_1986,(void*)0,&g_43},{&g_43,&l_1986,&g_45[2][4][3],&l_1986,&g_43,&g_45[2][4][3]},{&g_45[1][6][2],&l_1992[0],&g_45[2][4][3],&g_45[2][4][3],&l_1992[0],&g_45[1][6][2]},{&g_43,&g_45[1][6][2],(void*)0,&l_1992[0],(void*)0,&g_45[1][6][2]}};
                uint16_t *l_2034 = &g_136;
                int64_t *l_2035 = &g_450;
                int i, j;
                if (((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_u(((void*)0 == l_2021), p_3)) , (((**l_1941) = ((safe_lshift_func_uint8_t_u_s(g_312, g_1476)) || ((*l_2035) |= (safe_lshift_func_uint16_t_u_u(((*l_2034) = ((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((*g_820) = ((l_2032 ^= l_2030[1][1][3]) && (((((3L ^ p_3) > p_3) | 2L) > p_3) != l_2033))), l_2033)), p_3)) != p_3)), 15))))) || p_3)) | l_2036) < p_3), g_421.f0.f1.f0)) || p_3))
                { 
                    int64_t l_2037 = 0x1ACEA78EDF1D7F75LL;
                    return l_2037;
                }
                else
                { 
                    (**g_444) = (*g_445);
                    l_2039 = l_2038;
                }
                for (g_43 = 0; (g_43 < 21); g_43++)
                { 
                    uint64_t *l_2049[4][6][7] = {{{(void*)0,&g_312,&g_312,(void*)0,&g_312,&g_991[0],&g_991[0]},{(void*)0,&g_312,&g_991[0],&g_991[0],&g_312,&g_991[0],(void*)0},{&g_312,&g_991[0],&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0]},{&g_991[0],(void*)0,&g_991[0],&g_991[0],&g_991[0],&g_312,&g_312},{&g_991[0],&g_991[0],&g_991[0],&g_312,&g_312,&g_991[0],&g_991[0]},{&g_312,&g_991[0],&g_312,(void*)0,&g_991[0],&g_991[0],&g_991[0]}},{{&g_991[0],(void*)0,&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0]},{&g_991[0],&g_991[0],(void*)0,&g_991[0],&g_991[0],&g_991[0],&g_312},{&g_312,(void*)0,(void*)0,&g_991[0],&g_991[0],(void*)0,&g_991[0]},{&g_991[0],&g_991[0],(void*)0,(void*)0,&g_991[0],&g_991[0],&g_991[0]},{&g_991[0],&g_991[0],&g_991[0],&g_312,&g_312,&g_312,&g_991[0]},{&g_312,&g_991[0],&g_991[0],&g_991[0],&g_991[0],(void*)0,&g_991[0]}},{{(void*)0,&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0],&g_991[0]},{(void*)0,&g_991[0],&g_991[0],&g_991[0],&g_991[0],&g_991[0],&g_991[0]},{&g_991[0],(void*)0,&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0]},{&g_991[0],&g_991[0],&g_991[0],&g_991[0],&g_991[0],(void*)0,&g_991[0]},{&g_991[0],(void*)0,&g_991[0],&g_991[0],&g_991[0],&g_991[0],&g_312},{&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0],&g_312,&g_991[0]}},{{&g_312,&g_991[0],&g_991[0],&g_991[0],&g_991[0],&g_991[0],&g_991[0]},{&g_312,(void*)0,&g_991[0],&g_991[0],&g_312,&g_991[0],&g_991[0]},{&g_991[0],&g_991[0],&g_991[0],&g_312,&g_991[0],&g_991[0],&g_312},{&g_991[0],&g_312,&g_991[0],&g_991[0],&g_991[0],(void*)0,&g_991[0]},{&g_991[0],&g_312,(void*)0,&g_991[0],&g_991[0],&g_991[0],&g_312},{&g_991[0],&g_991[0],(void*)0,&g_312,&g_991[0],&g_312,&g_991[0]}}};
                    int32_t l_2060 = 0L;
                    int i, j, k;
                    l_2062 |= (safe_sub_func_uint16_t_u_u(g_148, (((safe_sub_func_uint16_t_u_u((((void*)0 != l_2049[0][5][1]) ^ ((g_312 &= (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(l_2030[1][1][3], (1L || (safe_mod_func_uint32_t_u_u(p_3, (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(g_1191.f2, 0x55L)), p_3))))))) | p_3), 0L)) | g_991[0]) , p_3)) > l_2060)), 0x1D7FL)) & l_2033) && l_2061)));
                    l_2060 |= p_3;
                }
            }
            for (g_446.f0 = 0; (g_446.f0 != 37); g_446.f0 = safe_add_func_int8_t_s_s(g_446.f0, 1))
            { 
                int32_t **l_2075 = (void*)0;
                int32_t *l_2093 = &l_1988;
                if (l_1985)
                    goto lbl_2065;
                if ((safe_mod_func_uint16_t_u_u((g_446.f0 && (safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(0x849FEBDCL, p_3)), (&g_1362 != &g_1362)))), g_45[2][4][0])))
                { 
                    struct S0 *l_2073 = &g_73;
                    (*l_2073) = l_2072;
                    return p_3;
                }
                else
                { 
                    int32_t *l_2076[2];
                    int32_t **l_2077 = &l_1946;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2076[i] = &l_1986;
                    (*l_2077) = ((!((void*)0 == l_2075)) , l_2076[1]);
                    (**g_1362) = (*g_1363);
                    l_2062 ^= (0x07765BBCL ^ ((void*)0 == g_2078));
                    l_2062 |= (g_16[2] >= l_2032);
                }
                (*l_2093) |= ((safe_lshift_func_uint8_t_u_u((g_509.f1.f0 && (safe_mul_func_int8_t_s_s((p_3 , (l_2085[0] == l_2087)), ((**g_1362) , p_3)))), (((((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((p_3 | l_2033), (*l_1946))) ^ 0x3768L) != l_2036), (*l_1946))) >= 0x2B36C4D2F7874170LL) != 0L) != p_3) | p_3))) > p_3);
            }
            l_1989 &= ((((l_1946 != &g_1340[5][2]) || p_3) < p_3) <= (safe_rshift_func_int16_t_s_s((((safe_add_func_int8_t_s_s(((*l_2101) ^= (safe_lshift_func_uint8_t_u_s((l_2100 , (((0UL && (p_3 == l_2100)) & 1L) > l_2030[1][1][3])), g_312))), l_2033)) || 0xA4L) ^ 0x07L), 5)));
        }
        (*l_2102) |= l_2030[1][0][0];
        return p_3;
    }
    l_1946 = &l_1989;
    for (g_242.f0.f0 = (-29); (g_242.f0.f0 <= 40); ++g_242.f0.f0)
    { 
        int32_t *l_2105 = &l_1986;
        int32_t *l_2106 = &l_1992[0];
        int32_t *l_2107 = (void*)0;
        int32_t *l_2108 = &l_1992[0];
        int32_t *l_2109[1];
        int i;
        for (i = 0; i < 1; i++)
            l_2109[i] = &l_1991;
        ++l_2110;
        l_1946 = &l_1990;
    }
    for (g_14 = (-9); (g_14 != 60); ++g_14)
    { 
        (*l_1946) = ((!p_3) ^ p_3);
    }
    return p_3;
}



static uint32_t  func_4(int32_t  p_5, struct S0  p_6, struct S0  p_7, int32_t  p_8, uint8_t  p_9)
{ 
    uint16_t l_1938 = 0UL;
    if (l_1938)
    { 
        int8_t l_1939[4][4][3] = {{{(-8L),0x39L,0x69L},{0xFFL,0x5AL,0xC4L},{1L,0x39L,(-1L)},{(-1L),0xC6L,0x39L}},{{0xFFL,0xFFL,0xE9L},{0xFFL,0xC4L,2L},{(-7L),(-1L),0x20L},{2L,(-8L),(-7L)}},{{0x62L,(-7L),0x20L},{0x69L,0x5AL,2L},{0xE9L,(-1L),0xE9L},{1L,(-1L),0x39L}},{{0x39L,0x5AL,(-8L)},{(-1L),(-7L),0xFFL},{0xC6L,(-8L),1L},{(-1L),(-1L),(-1L)}}};
        int i, j, k;
        return l_1939[2][2][1];
    }
    else
    { 
        return p_7.f0;
    }
}



static uint8_t  func_18(const int64_t * p_19, int64_t  p_20, int64_t * p_21, int16_t  p_22)
{ 
    struct S0 l_1936 = {0x15L,-1L};
    for (g_1869 = 0; (g_1869 <= 0); g_1869 += 1)
    { 
        return p_20;
    }
    (**g_444) = l_1936;
    return g_1476;
}



static int8_t  func_23(struct S1  p_24, int64_t * p_25, const struct S1  p_26, const int64_t * p_27, struct S2  p_28)
{ 
    int32_t *l_1553[1];
    struct S0 *l_1578[5][7][3] = {{{&g_73,(void*)0,&g_446},{(void*)0,&g_446,&g_446},{&g_446,&g_73,&g_446},{&g_73,&g_446,&g_446},{&g_73,&g_446,&g_446},{&g_446,&g_73,&g_446},{(void*)0,&g_446,&g_446}},{{&g_446,(void*)0,(void*)0},{&g_73,&g_446,(void*)0},{&g_73,(void*)0,&g_446},{&g_446,&g_446,&g_446},{(void*)0,(void*)0,&g_446},{&g_73,&g_446,&g_446},{&g_73,(void*)0,&g_446}},{{(void*)0,&g_446,&g_446},{&g_446,&g_73,&g_446},{&g_73,&g_446,&g_446},{&g_73,&g_446,&g_446},{&g_446,&g_73,&g_446},{(void*)0,&g_446,&g_446},{&g_446,(void*)0,(void*)0}},{{&g_73,&g_446,(void*)0},{&g_73,(void*)0,&g_446},{&g_446,&g_446,&g_446},{(void*)0,(void*)0,&g_446},{&g_73,&g_446,&g_446},{&g_73,(void*)0,&g_446},{(void*)0,&g_446,&g_446}},{{&g_446,&g_73,&g_446},{&g_73,&g_446,&g_446},{&g_73,&g_446,&g_446},{&g_446,&g_73,&g_446},{(void*)0,&g_446,&g_446},{&g_446,(void*)0,(void*)0},{&g_73,&g_446,(void*)0}}};
    const uint64_t l_1582 = 18446744073709551615UL;
    uint32_t **l_1591 = &g_1245[2];
    uint32_t ***l_1590 = &l_1591;
    uint32_t ****l_1589 = &l_1590;
    uint8_t l_1649 = 0x0CL;
    int32_t * const **l_1655 = (void*)0;
    int32_t * const ** const *l_1654 = &l_1655;
    uint16_t *l_1660 = &g_14;
    struct S2 l_1669 = {0x1D722DA1L,{0xAEL,-7L},0x65337039D7AD92A8LL};
    const uint64_t l_1679 = 0x96DF02940E3D5EDELL;
    union U3 l_1701[4] = {{{0UL,{246UL,0L},-8L}},{{0UL,{246UL,0L},-8L}},{{0UL,{246UL,0L},-8L}},{{0UL,{246UL,0L},-8L}}};
    int32_t * const l_1756 = &g_45[1][6][5];
    int8_t *l_1778 = &g_148;
    struct S1 ***l_1790[4][4][5] = {{{(void*)0,&g_1362,&g_1362,(void*)0,&g_1362},{&g_1362,&g_1362,(void*)0,&g_1362,&g_1362},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1362},{(void*)0,&g_1362,&g_1362,(void*)0,&g_1362}},{{&g_1362,&g_1362,(void*)0,&g_1362,&g_1362},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1362},{(void*)0,&g_1362,&g_1362,(void*)0,&g_1362},{&g_1362,&g_1362,(void*)0,&g_1362,&g_1362}},{{(void*)0,(void*)0,(void*)0,&g_1362,&g_1362},{&g_1362,&g_1362,(void*)0,&g_1362,&g_1362},{&g_1362,&g_1362,&g_1362,&g_1362,&g_1362},{&g_1362,&g_1362,&g_1362,&g_1362,&g_1362}},{{&g_1362,&g_1362,(void*)0,&g_1362,&g_1362},{&g_1362,&g_1362,&g_1362,&g_1362,&g_1362},{&g_1362,&g_1362,&g_1362,&g_1362,&g_1362},{&g_1362,&g_1362,(void*)0,&g_1362,&g_1362}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1553[i] = &g_45[1][6][2];
    return p_28.f1.f0;
}



static uint32_t  func_31(int64_t * const  p_32)
{ 
    int32_t l_1025 = (-1L);
    int32_t l_1048 = 1L;
    int32_t l_1049 = 0L;
    int32_t l_1050 = (-1L);
    int32_t l_1052 = 1L;
    int32_t l_1053 = 0x924AFE15L;
    int32_t l_1054 = 0xCF24F5EEL;
    int32_t l_1055 = 0x84F8C7BFL;
    int32_t l_1057 = 4L;
    int32_t l_1061[3][2] = {{(-1L),0x13CFEB1BL},{0x13CFEB1BL,(-1L)},{0x13CFEB1BL,0x13CFEB1BL}};
    union U3 *l_1069 = (void*)0;
    struct S0 **l_1073[5];
    int32_t *l_1082 = &l_1050;
    struct S2 **l_1162 = &g_576;
    int32_t **l_1185 = &g_44;
    struct S0 *l_1189 = &g_73;
    int32_t l_1196 = 0xC686F832L;
    struct S1 l_1237 = {9051};
    uint64_t l_1256 = 2UL;
    struct S2 * const *l_1325 = (void*)0;
    struct S2 * const **l_1324 = &l_1325;
    struct S1 ***l_1366[2];
    struct S1 *** const *l_1365 = &l_1366[0];
    int16_t l_1373 = (-6L);
    uint64_t l_1378 = 0x708C4163AA7A0E41LL;
    int8_t l_1519 = 0x0EL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_1073[i] = &g_404[0][3][2];
    for (i = 0; i < 2; i++)
        l_1366[i] = &g_1362;
    for (g_449 = 0; (g_449 > 30); g_449 = safe_add_func_int64_t_s_s(g_449, 3))
    { 
        union U3 *l_1020 = &g_595;
        int32_t l_1021 = 0x959D3FC6L;
        int32_t l_1056 = 0x0F1029C5L;
        int32_t l_1058 = (-2L);
        int32_t l_1059 = 0x0F899CE3L;
        int32_t l_1060[6] = {5L,5L,5L,5L,5L,5L};
        int32_t *l_1070 = &l_1055;
        struct S2 *l_1091[1][3];
        uint64_t l_1138 = 0x0DE031A5B6E9710ALL;
        int16_t l_1160 = (-6L);
        uint64_t l_1174[5] = {0UL,0UL,0UL,0UL,0UL};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1091[i][j] = &g_1092;
        }
        for (g_312 = 0; (g_312 != 16); g_312 = safe_add_func_int16_t_s_s(g_312, 1))
        { 
            int32_t l_1033 = 0x7D21B858L;
            int32_t l_1040 = 0x43C49C83L;
            int32_t l_1051[7][4][6] = {{{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L},{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L}},{{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L},{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L}},{{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L},{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L}},{{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L},{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L}},{{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L},{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L}},{{0xFF400410L,1L,1L,0xFF400410L,1L,1L},{0xFF400410L,1L,1L,(-1L),1L,1L},{0xFF400410L,1L,1L,0xFF400410L,1L,(-1L)},{1L,4L,(-1L),1L,4L,4L}},{{1L,(-1L),(-1L),1L,4L,(-1L)},{1L,4L,(-1L),1L,4L,4L},{1L,(-1L),(-1L),1L,4L,(-1L)},{1L,4L,(-1L),1L,4L,4L}}};
            int i, j, k;
            if (((void*)0 == l_1020))
            { 
                for (g_577.f0 = 0; (g_577.f0 <= 6); g_577.f0 += 1)
                { 
                    uint64_t l_1022 = 18446744073709551615UL;
                    l_1022++;
                    return l_1021;
                }
                for (g_446.f0 = 0; (g_446.f0 <= 3); g_446.f0 += 1)
                { 
                    return l_1025;
                }
            }
            else
            { 
                int32_t *l_1026 = &g_45[1][6][2];
                int32_t **l_1027 = &l_1026;
                int32_t **l_1028 = &g_44;
                int32_t *l_1030 = &l_1021;
                int32_t **l_1029 = &l_1030;
                int32_t *l_1037 = &l_1021;
                int32_t *l_1038 = &g_45[2][0][4];
                int32_t *l_1039 = &l_1021;
                int32_t *l_1041 = (void*)0;
                int32_t *l_1042 = &l_1040;
                int32_t *l_1043 = &g_43;
                int32_t *l_1044 = &g_43;
                int32_t *l_1045 = &l_1021;
                int32_t *l_1046 = &l_1040;
                int32_t *l_1047[6] = {&l_1040,(void*)0,(void*)0,&l_1040,(void*)0,(void*)0};
                uint8_t l_1062 = 0UL;
                int i;
                (*l_1029) = ((*l_1028) = ((*l_1027) = l_1026));
                for (g_898 = 0; (g_898 >= 26); g_898++)
                { 
                    struct S1 * const l_1034 = &g_29[0];
                    struct S1 *l_1036 = &g_29[0];
                    struct S1 **l_1035 = &l_1036;
                    if (l_1033)
                        break;
                    (*l_1035) = l_1034;
                    if (l_1025)
                        continue;
                }
                l_1062--;
                return (*l_1044);
            }
            for (l_1050 = (-27); (l_1050 < (-30)); --l_1050)
            { 
                for (l_1058 = 25; (l_1058 == (-2)); l_1058 = safe_sub_func_uint16_t_u_u(l_1058, 6))
                { 
                    return l_1033;
                }
                return g_577.f1.f0;
            }
        }
        l_1069 = l_1069;
        (*l_1070) = l_1021;
    }
    (*l_1185) = (void*)0;
    for (g_898 = 0; (g_898 == 0); ++g_898)
    { 
        struct S0 *l_1188 = &g_73;
        struct S2 *l_1190 = &g_1191;
        int32_t *l_1192 = &l_1049;
        int32_t *l_1193 = &l_1049;
        int32_t *l_1194 = &g_45[1][4][5];
        int32_t *l_1195[6][6] = {{&l_1050,&g_45[1][6][2],&l_1052,&l_1055,&l_1055,&l_1052},{&g_43,&g_43,(void*)0,&l_1055,&g_45[1][6][2],&l_1052},{&l_1050,(void*)0,&l_1054,&l_1052,&l_1054,(void*)0},{&l_1055,&l_1050,&l_1054,&l_1050,&g_43,&l_1052},{&l_1052,&l_1050,(void*)0,(void*)0,&l_1050,&l_1052},{(void*)0,&l_1050,&l_1052,&l_1050,&g_43,&l_1054}};
        int8_t l_1202 = 0L;
        int16_t *l_1205 = &g_588;
        int8_t *l_1224 = &l_1202;
        int8_t *l_1225 = &g_749;
        int16_t *l_1226 = &g_69;
        uint32_t *l_1227 = &g_449;
        union U3 **l_1228 = &l_1069;
        int i, j;
        l_1189 = (l_1188 = l_1188);
        (*l_1162) = (l_1190 = (void*)0);
        g_1197++;
        (*l_1193) = (safe_lshift_func_int8_t_s_s(((*l_1082) , (((((*l_1194) = l_1202) , ((*l_1227) = (safe_mul_func_int8_t_s_s((((*l_1205) = 0L) == ((0xC8D81520L <= (safe_rshift_func_int16_t_s_u((0x818617C7L && (~(0xB153125518652F6FLL && (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_add_func_int16_t_s_s(((*l_1226) = ((~((*l_1225) = ((*l_1224) |= ((((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((&l_1192 == &l_1082) >= (*l_1192)), 0L)), 0xCAA9501B64E4A0F7LL)), (-1L))), (*l_1193))) , (*l_1193)) < (*l_1193)) != 5UL)))) == (*l_1082))), 0xA6FAL)) || 7UL) <= (*l_1192)), 14)), (*l_1082)))))), g_577.f2))) && (-1L))), 4L)))) | 4294967295UL) > (*l_1082))), (*l_1082)));
        (*l_1228) = l_1069;
    }
    for (g_595.f0.f0 = 0; (g_595.f0.f0 <= 3); g_595.f0.f0 += 1)
    { 
        uint64_t l_1238 = 0xC78C11B2FC0D72DCLL;
        uint8_t *l_1241 = &g_73.f0;
        struct S2 l_1242 = {0xD4E34796L,{0UL,0x8EE4F87AL},1L};
        uint32_t *l_1244 = (void*)0;
        uint32_t **l_1243 = &l_1244;
        int32_t l_1273 = 0x50E4125BL;
        int32_t l_1276 = (-7L);
        int32_t l_1298 = 0L;
        int32_t l_1299 = 0xFEA57437L;
        int32_t l_1301 = 0xB9FDCDD8L;
        int32_t l_1302 = 0x6F4113C4L;
        int32_t l_1303 = 0x04900106L;
        int32_t l_1304 = 2L;
        int32_t l_1305 = (-3L);
        int32_t l_1306 = (-1L);
        int32_t l_1307 = (-6L);
        int32_t l_1308 = 5L;
        int32_t l_1309 = 0x9743710EL;
        int32_t l_1310 = (-2L);
        int32_t l_1311 = (-1L);
        int32_t l_1312 = 0xDED0CA17L;
        const int32_t l_1317[1] = {(-1L)};
        uint32_t l_1319 = 9UL;
        struct S2 * const *l_1323 = &g_576;
        struct S2 * const **l_1322[3];
        uint64_t l_1348 = 0UL;
        int32_t l_1402 = 0xFA0A660DL;
        int32_t l_1403 = (-8L);
        int32_t l_1404 = (-1L);
        int64_t l_1480 = 0x7D26282011581704LL;
        struct S0 *l_1501 = &g_446;
        uint32_t l_1520 = 0x3BFA8FF0L;
        int64_t l_1525 = 5L;
        int32_t l_1529 = 1L;
        int64_t l_1537 = (-3L);
        int64_t l_1544 = 2L;
        uint32_t l_1545 = 18446744073709551615UL;
        int i;
        for (i = 0; i < 3; i++)
            l_1322[i] = &l_1323;
        for (g_449 = 0; (g_449 <= 3); g_449 += 1)
        { 
            int32_t *l_1233 = &l_1055;
            struct S1 *l_1234 = &g_855;
            struct S1 *l_1235[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1235[i] = &g_1236;
            for (l_1053 = 0; (l_1053 <= 3); l_1053 += 1)
            { 
                for (l_1025 = 3; (l_1025 >= 0); l_1025 -= 1)
                { 
                    uint64_t *l_1231 = &g_991[0];
                    int32_t l_1232 = 1L;
                    (*l_1082) |= (safe_lshift_func_uint8_t_u_s((((*l_1231) = 0x18C2BFDC2F1B83DALL) , l_1232), 1));
                }
            }
            (*l_1233) |= (*l_1082);
            g_1236 = (l_1237 = ((*l_1234) = g_29[0]));
            return l_1238;
        }
        (*l_1082) = (g_446.f1 < ((safe_mul_func_uint8_t_u_u(((*l_1241) |= l_1238), (l_1238 != (l_1242 , (((*l_1243) = &g_449) == (g_1245[3] = l_1082)))))) ^ 0xB2227AD59B71C364LL));
        for (g_634 = 1; (g_634 >= 0); g_634 -= 1)
        { 
            int8_t l_1246 = 0x05L;
            int32_t l_1248[1];
            int32_t l_1297 = 1L;
            int16_t l_1300[6][7][2] = {{{0x0D30L,0xF668L},{(-6L),0x590BL},{(-6L),0x22C0L},{0x22C0L,(-1L)},{1L,1L},{0xB485L,(-6L)},{0x8E34L,0xD5F5L}},{{0xF668L,0xD5F5L},{0x8E34L,(-6L)},{0xB485L,1L},{1L,(-1L)},{0x22C0L,0x22C0L},{(-6L),0x590BL},{(-6L),0xF668L}},{{0x0D30L,(-1L)},{0x590BL,0x0D30L},{8L,0L},{8L,0x0D30L},{0x590BL,(-1L)},{0x0D30L,0xF668L},{(-6L),0x590BL}},{{(-6L),0x22C0L},{0x22C0L,(-1L)},{1L,1L},{0xB485L,(-6L)},{0x8E34L,0xD5F5L},{0xF668L,0xD5F5L},{0x8E34L,(-6L)}},{{0xB485L,1L},{1L,(-1L)},{0x22C0L,0x22C0L},{(-6L),0x590BL},{(-6L),0xF668L},{0x0D30L,(-1L)},{0x590BL,0x0D30L}},{{8L,0L},{8L,0x0D30L},{0x590BL,(-1L)},{0x0D30L,0xF668L},{(-6L),0x590BL},{(-6L),0x22C0L},{0x22C0L,(-1L)}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1248[i] = 0x400EEDB8L;
            if (l_1246)
            { 
                int64_t l_1247 = 0x5356FA29DCC31497LL;
                int32_t l_1251 = 0xAED42030L;
                int32_t l_1253 = 1L;
                int32_t l_1255 = (-10L);
                for (g_242.f1 = 1; (g_242.f1 >= 0); g_242.f1 -= 1)
                { 
                    int32_t *l_1249 = &l_1050;
                    int32_t *l_1250[1][7] = {{&g_45[0][1][6],&l_1053,&g_45[0][1][6],&g_45[0][1][6],&l_1053,&g_45[0][1][6],&g_45[0][1][6]}};
                    int8_t l_1252 = 1L;
                    int32_t l_1254 = 0x497E10BAL;
                    int i, j;
                    g_594 = &g_242;
                    if (l_1247)
                        continue;
                    l_1256--;
                    (*l_1249) = (g_595.f0.f2 != ((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(l_1246, 2)) & ((0x2BACA17CL >= (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(g_509.f1.f0, (safe_sub_func_uint64_t_u_u(((g_421.f0.f1.f1 & (((l_1253 = ((*l_1082) == l_1242.f1.f1)) ^ g_446.f0) <= (*l_1249))) , l_1248[0]), l_1248[0])))), l_1242.f1.f1))) == 0xDE378E9FE2CF2EB3LL)), 0xAD97L)), 5)), 0x4DD5E275BE662B12LL)) || g_991[0]));
                    if (l_1251)
                        break;
                }
            }
            else
            { 
                uint32_t l_1277[5][4][6] = {{{1UL,4294967294UL,0UL,0xA59B4EC8L,0xA59B4EC8L,0UL},{4294967294UL,4294967294UL,1UL,1UL,0x3D2E47EFL,0xA59B4EC8L},{0x7FCF7186L,4294967295UL,0xE7AB4FF9L,1UL,0UL,1UL},{0xE7AB4FF9L,0x7FCF7186L,0xE7AB4FF9L,9UL,4294967294UL,0xA59B4EC8L}},{{4294967295UL,9UL,0x7FCF7186L,4294967294UL,1UL,1UL},{4294967294UL,1UL,1UL,4294967294UL,0x7FCF7186L,4294967295UL},{0xE7AB4FF9L,0UL,1UL,4294967295UL,0xA59B4EC8L,1UL},{0xA59B4EC8L,0x7FCF7186L,4294967295UL,0x7FCF7186L,0xA59B4EC8L,0x3D2E47EFL}},{{1UL,0UL,0UL,9UL,0x7FCF7186L,1UL},{1UL,1UL,0UL,0UL,1UL,1UL},{9UL,4294967295UL,0UL,0xA59B4EC8L,1UL,0x3D2E47EFL},{1UL,1UL,4294967295UL,1UL,4294967295UL,1UL}},{{1UL,0x3D2E47EFL,1UL,0xA59B4EC8L,0UL,4294967295UL},{9UL,1UL,1UL,0UL,0UL,1UL},{1UL,1UL,0x7FCF7186L,9UL,0UL,0UL},{1UL,0x3D2E47EFL,0xA59B4EC8L,0x7FCF7186L,4294967295UL,0x7FCF7186L}},{{0xA59B4EC8L,1UL,0xA59B4EC8L,4294967295UL,1UL,0UL},{0xE7AB4FF9L,4294967295UL,0x7FCF7186L,4294967294UL,1UL,1UL},{4294967294UL,1UL,1UL,4294967294UL,0x7FCF7186L,4294967295UL},{0xE7AB4FF9L,0UL,1UL,4294967295UL,0xA59B4EC8L,1UL}}};
                uint32_t * const * const *l_1283[4][3][3];
                int32_t l_1284 = 5L;
                int32_t l_1295 = 0L;
                int32_t l_1296[1][5];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1283[i][j][k] = &g_1281;
                    }
                }
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1296[i][j] = 0L;
                }
                for (g_148 = 1; (g_148 >= 0); g_148 -= 1)
                { 
                    int32_t *l_1274 = &l_1053;
                    int32_t *l_1275 = &l_1061[0][0];
                    uint32_t * const * const **l_1282[1][5] = {{&g_1280[2][1],&g_1280[2][1],&g_1280[2][1],&g_1280[2][1],&g_1280[2][1]}};
                    int32_t l_1285[1];
                    int32_t *l_1286 = &l_1052;
                    int32_t *l_1287 = &l_1057;
                    int32_t *l_1288 = (void*)0;
                    int32_t *l_1289 = &g_45[1][6][2];
                    int32_t *l_1290 = &l_1061[2][0];
                    int32_t *l_1291 = &l_1055;
                    int32_t *l_1292 = &l_1285[0];
                    int32_t *l_1293 = &l_1054;
                    int32_t *l_1294[4][6][7] = {{{(void*)0,&l_1273,&l_1061[2][1],&l_1061[2][1],&l_1273,(void*)0,&l_1057},{&g_43,&l_1061[1][0],(void*)0,&l_1052,&l_1061[2][0],&l_1248[0],&l_1285[0]},{&l_1061[2][0],(void*)0,&l_1050,&l_1057,&l_1057,&l_1052,&l_1061[1][0]},{&l_1057,&l_1061[1][0],&l_1285[0],(void*)0,&l_1057,&g_43,&l_1248[0]},{(void*)0,&l_1273,&l_1053,&g_43,&l_1057,(void*)0,&l_1057},{&l_1052,&l_1049,&l_1053,(void*)0,(void*)0,&l_1053,&l_1049}},{{&l_1055,&l_1061[2][1],&l_1285[0],&l_1055,(void*)0,(void*)0,&g_43},{&l_1054,(void*)0,&l_1050,&l_1273,&l_1248[0],&l_1049,&l_1285[0]},{&l_1048,&l_1054,(void*)0,&l_1055,&l_1285[0],(void*)0,&l_1285[0]},{&l_1053,&l_1285[0],&l_1061[2][1],(void*)0,(void*)0,&l_1057,&l_1061[2][0]},{&l_1061[2][1],&l_1285[0],(void*)0,&g_43,(void*)0,(void*)0,&g_43},{&l_1061[1][0],&l_1057,&l_1061[1][0],(void*)0,&l_1285[0],&l_1055,&l_1055}},{{(void*)0,(void*)0,&l_1048,&l_1057,&l_1248[0],&l_1273,&l_1054},{&l_1285[0],&l_1248[0],&l_1048,&l_1054,&l_1273,&l_1284,&l_1061[2][1]},{(void*)0,(void*)0,&l_1053,(void*)0,&l_1057,&l_1049,&l_1248[0]},{&g_43,&l_1055,&l_1061[2][1],&l_1048,&l_1050,&l_1248[0],&l_1248[0]},{&l_1248[0],&l_1050,&l_1061[1][0],&l_1050,&l_1248[0],&l_1273,&l_1061[2][1]},{(void*)0,&l_1054,(void*)0,&l_1248[0],&g_43,&l_1057,(void*)0}},{{&l_1052,&l_1057,&l_1248[0],&l_1285[0],&l_1057,&l_1273,(void*)0},{(void*)0,&l_1248[0],&l_1055,&l_1273,(void*)0,(void*)0,&l_1061[0][0]},{&l_1248[0],&l_1285[0],&l_1285[0],&l_1049,(void*)0,&l_1050,&l_1057},{&g_43,&l_1285[0],&l_1057,&l_1054,&l_1057,&l_1285[0],&g_43},{(void*)0,&l_1248[0],&l_1285[0],&g_43,(void*)0,&l_1248[0],&l_1053},{&l_1285[0],&l_1057,(void*)0,&l_1055,&l_1284,&l_1048,&l_1285[0]}}};
                    uint32_t l_1313[3];
                    struct S2 ***l_1326 = &l_1162;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1285[i] = 0x4FE232DCL;
                    for (i = 0; i < 3; i++)
                        l_1313[i] = 0x4D1DE5ACL;
                    l_1277[3][1][1]--;
                    l_1283[0][2][2] = g_1280[1][2];
                    l_1313[1]++;
                    (*l_1290) &= ((*l_1289) < ((~(l_1317[0] < (!5UL))) & ((++l_1319) ^ (((l_1324 = l_1322[0]) != l_1326) || g_73.f1))));
                }
            }
            if (l_1248[0])
                continue;
            for (g_242.f0.f0 = 0; (g_242.f0.f0 <= 1); g_242.f0.f0 += 1)
            { 
                int16_t l_1327[4][3][4] = {{{1L,(-1L),(-1L),(-1L)},{1L,1L,(-1L),(-1L)},{(-1L),1L,(-1L),1L}},{{1L,0x701EL,(-1L),(-1L)},{1L,0x701EL,0x701EL,1L},{0x701EL,1L,1L,(-1L)}},{{0x701EL,1L,0x701EL,(-1L)},{1L,(-1L),(-1L),(-1L)},{1L,1L,(-1L),(-1L)}},{{(-1L),1L,(-1L),1L},{1L,0x701EL,(-1L),(-1L)},{1L,0x701EL,0x701EL,1L}}};
                int32_t *l_1332 = &l_1301;
                int32_t *l_1333 = &l_1248[0];
                int32_t *l_1334 = &l_1299;
                int32_t *l_1335 = &g_45[1][6][2];
                int32_t *l_1336 = &l_1048;
                int32_t *l_1337 = &l_1276;
                int32_t *l_1338 = &g_43;
                int32_t *l_1339[5][2] = {{&l_1053,&l_1311},{&l_1311,&l_1053},{&l_1311,&l_1311},{&l_1053,&l_1311},{&l_1311,&l_1053}};
                int i, j, k;
                if (l_1327[0][2][0])
                    break;
                l_1310 ^= (safe_div_func_int16_t_s_s(l_1273, (safe_sub_func_int64_t_s_s((*g_820), 1UL))));
                g_1340[1][0]--;
                if (l_1305)
                    break;
            }
            for (g_136 = 0; (g_136 <= 3); g_136 += 1)
            { 
                return l_1311;
            }
        }
    }
    return g_43;
}



static int64_t * const  func_33(int64_t * p_34, struct S0  p_35, int64_t * p_36)
{ 
    int64_t l_823 = 0x8AC0F6D65E18E6D8LL;
    uint32_t l_848[2];
    uint64_t l_849[6];
    int8_t *l_850[7][1] = {{&g_148},{&g_148},{&g_148},{&g_148},{&g_148},{&g_148},{&g_148}};
    int32_t l_851 = 0xB8DC0410L;
    int32_t l_852 = 0x37491C77L;
    int16_t *l_853 = &g_588;
    int32_t *l_854 = &g_43;
    int32_t **l_865 = &g_44;
    int32_t *** const l_864 = &l_865;
    int32_t l_884 = 0x1256DE2FL;
    int32_t l_887 = 0x2A687A9FL;
    int32_t l_888[2][4];
    struct S1 *l_974 = &g_29[0];
    struct S1 **l_973 = &l_974;
    int64_t l_1001 = 0xD5F552C181D50CAALL;
    struct S2 l_1002 = {0x4504E913L,{0UL,1L},1L};
    union U3 l_1006 = {{0xF41A8F24L,{1UL,0xB2EBF7BBL},0L}};
    uint32_t *l_1009[2];
    uint32_t *l_1010 = &g_449;
    int8_t l_1015 = 0xC6L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_848[i] = 6UL;
    for (i = 0; i < 6; i++)
        l_849[i] = 0xB6DDFCF6D3D5DD96LL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_888[i][j] = (-7L);
    }
    for (i = 0; i < 2; i++)
        l_1009[i] = &l_848[0];
    l_852 ^= ((safe_unary_minus_func_int16_t_s(((((l_823 >= (l_823 && (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((g_749 = ((*g_30) <= (safe_lshift_func_int8_t_s_u((l_851 = ((((*g_594) , ((safe_div_func_int32_t_s_s((1L == (((*g_30) , (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((~0x7124E8F9D0D93AABLL), 10)) == g_577.f1.f1), g_45[1][6][2])) && (-1L)) | (-1L)), 7)) | 3L) != (-6L)) > 0xD36EF1EC34BB7F15LL), p_35.f0)), 0x24L))) == l_848[0])), g_143.f0)) < g_143.f2)) & 18446744073709551609UL) , l_849[4])), 4)))), l_849[4])) , l_848[0]), 0xE222L)), g_634)))), g_421.f0.f1.f0)))) && l_823) == g_509.f1.f0) ^ (-4L)))) , l_849[4]);
    (*l_854) = (l_853 == &g_588);
    for (g_577.f0 = 0; (g_577.f0 <= 0); g_577.f0 += 1)
    { 
        struct S1 l_856 = {4670};
        int32_t l_882[7];
        int8_t l_899 = 0xB3L;
        int64_t * const l_910 = (void*)0;
        struct S0 **l_916 = &g_404[0][3][2];
        int32_t l_923[6];
        uint8_t l_939 = 1UL;
        uint32_t *l_955 = &l_848[0];
        int32_t l_1004 = 0x54479860L;
        int32_t l_1011 = 1L;
        uint64_t *l_1014[2];
        int i;
        for (i = 0; i < 7; i++)
            l_882[i] = (-1L);
        for (i = 0; i < 6; i++)
            l_923[i] = 0L;
        for (i = 0; i < 2; i++)
            l_1014[i] = &l_849[3];
        for (g_634 = 0; (g_634 >= 0); g_634 -= 1)
        { 
            struct S2 *l_870 = &g_595.f0;
            int32_t l_875 = 0x87C61B19L;
            int32_t l_878 = 0L;
            int32_t l_879 = 0x22C1256BL;
            int32_t l_880 = (-1L);
            int64_t l_881 = 0xA9509823729C6FD3LL;
            int32_t l_883 = (-9L);
            int32_t l_885 = 0L;
            int32_t l_889 = 5L;
            int32_t l_890 = (-1L);
            int32_t l_894[6][6] = {{3L,(-4L),(-4L),0xCAB60B17L,(-4L),(-4L)},{0x14F75E92L,0xF14554BEL,3L,0xCAB60B17L,0xF14554BEL,(-4L)},{3L,(-4L),3L,0x14F75E92L,(-4L),(-4L)},{0x84EFDAE7L,(-4L),(-4L),0x84EFDAE7L,0xF14554BEL,0x335BE013L},{0x84EFDAE7L,0xF14554BEL,0x335BE013L,0x14F75E92L,(-4L),0x335BE013L},{3L,(-4L),(-4L),0xCAB60B17L,(-4L),(-4L)}};
            int64_t l_897 = 0x92A7C89651EDEDD5LL;
            uint16_t l_909 = 0xCE7EL;
            int8_t *l_941 = &g_148;
            int8_t l_961 = (-10L);
            int64_t l_962 = 0xEC02C039BE970200LL;
            uint32_t l_963 = 1UL;
            const union U3 *l_982 = &g_421;
            const union U3 **l_981[7][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,&l_982},{&l_982,(void*)0},{(void*)0,(void*)0},{(void*)0,&l_982}},{{&l_982,&l_982},{&l_982,&l_982},{&l_982,&l_982},{(void*)0,&l_982},{(void*)0,&l_982},{&l_982,&l_982}},{{&l_982,&l_982},{(void*)0,(void*)0},{(void*)0,&l_982},{&l_982,(void*)0},{(void*)0,(void*)0},{&l_982,&l_982}},{{&l_982,&l_982},{&l_982,(void*)0},{&l_982,(void*)0},{&l_982,&l_982},{&l_982,&l_982},{&l_982,(void*)0}},{{(void*)0,(void*)0},{&l_982,&l_982},{(void*)0,(void*)0},{(void*)0,&l_982},{&l_982,&l_982},{&l_982,&l_982}},{{(void*)0,&l_982},{(void*)0,&l_982},{&l_982,&l_982},{&l_982,&l_982},{(void*)0,(void*)0},{(void*)0,&l_982}},{{&l_982,(void*)0},{(void*)0,(void*)0},{&l_982,&l_982},{&l_982,&l_982},{&l_982,(void*)0},{&l_982,(void*)0}}};
            int i, j, k;
            (*l_854) |= (-3L);
        }
        (*l_854) &= (l_1015 = (p_35 , (l_856.f0 ^ (g_991[0] = (((*l_853) = (l_1006 , (safe_mod_func_uint32_t_u_u((((l_1010 = (l_1009[1] = &l_848[0])) != (void*)0) ^ ((l_1011 | (safe_mul_func_uint16_t_u_u(0xC1FDL, p_35.f0))) != l_923[0])), 0x9919D3D2L)))) == 0x204FL)))));
        return p_36;
    }
    return &g_16[2];
}



static int64_t * func_37(uint32_t  p_38, int64_t * p_39)
{ 
    int32_t *l_42 = &g_43;
    int32_t l_82 = 1L;
    int32_t l_87[1];
    struct S0 **l_120[5];
    struct S0 ***l_119 = &l_120[0];
    uint32_t l_121 = 0xB5EBD3B7L;
    uint8_t l_210 = 255UL;
    struct S1 l_238 = {3403};
    int16_t l_254[1];
    int8_t l_258 = 0xD5L;
    const uint32_t l_304 = 18446744073709551615UL;
    int32_t *l_335 = &l_87[0];
    union U3 * const l_339[7][1][6] = {{{&g_242,(void*)0,&g_242,&g_242,(void*)0,(void*)0}},{{&g_242,&g_242,&g_242,&g_242,(void*)0,&g_242}},{{&g_242,&g_242,(void*)0,&g_242,&g_242,&g_242}},{{&g_242,&g_242,&g_242,&g_242,&g_242,&g_242}},{{&g_242,&g_242,(void*)0,&g_242,(void*)0,&g_242}},{{(void*)0,&g_242,&g_242,(void*)0,(void*)0,&g_242}},{{(void*)0,(void*)0,(void*)0,&g_242,(void*)0,&g_242}}};
    union U3 * const *l_338 = &l_339[6][0][5];
    int64_t *l_490 = &g_16[2];
    uint64_t l_537 = 8UL;
    uint32_t l_590 = 0x349C1544L;
    int64_t l_631[7] = {1L,0x24F718177DADAE4ALL,0x24F718177DADAE4ALL,1L,0x24F718177DADAE4ALL,0x24F718177DADAE4ALL,1L};
    uint32_t l_653 = 0xF088EC85L;
    int64_t *l_689[7][4][4] = {{{&g_16[0],&g_634,&g_634,&l_631[0]},{&g_16[4],&l_631[0],&l_631[0],&g_634},{(void*)0,&l_631[0],&l_631[0],&l_631[0]},{&l_631[0],&g_450,&g_450,&g_634}},{{(void*)0,&l_631[2],&g_16[2],&l_631[0]},{&g_634,&g_634,&g_16[0],&l_631[1]},{&g_634,&l_631[6],&g_16[2],&l_631[0]},{(void*)0,&l_631[1],&g_450,&g_16[0]}},{{&l_631[0],&g_16[2],&l_631[0],&g_634},{(void*)0,&l_631[5],&l_631[0],&l_631[0]},{&g_16[4],&g_634,&g_634,&l_631[1]},{&g_16[0],&g_16[2],&l_631[1],(void*)0}},{{&g_634,&l_631[0],(void*)0,&l_631[6]},{(void*)0,&g_450,&l_631[0],(void*)0},{&l_631[0],(void*)0,(void*)0,&g_634},{&g_16[2],(void*)0,&g_16[4],&l_631[0]}},{{&g_634,&g_16[2],&g_16[2],&g_634},{&l_631[5],&l_631[6],&l_631[1],&l_631[2]},{(void*)0,(void*)0,&g_16[2],&g_450},{&l_631[6],&g_16[2],&g_634,&g_450}},{{&l_631[1],(void*)0,&g_634,&l_631[2]},{&l_631[0],&g_634,&g_16[0],&l_631[1]},{&g_16[0],(void*)0,&g_634,&g_634},{(void*)0,(void*)0,&g_16[2],&g_634}},{{&g_16[2],&l_631[0],&g_634,&g_16[2]},{&g_634,&g_450,&l_631[1],&g_634},{&g_634,&g_16[3],(void*)0,&g_634},{&g_16[2],(void*)0,&g_16[2],&g_16[0]}}};
    int32_t l_706[4];
    int32_t **l_761 = (void*)0;
    int32_t ***l_760 = &l_761;
    int32_t **** const l_759 = &l_760;
    uint16_t *l_802 = &g_14;
    uint16_t *l_803[5][3][4] = {{{(void*)0,&g_14,&g_14,&g_14},{&g_136,(void*)0,(void*)0,&g_136},{&g_14,&g_136,&g_14,&g_136}},{{(void*)0,(void*)0,&g_136,&g_14},{&g_14,&g_14,(void*)0,(void*)0},{&g_14,&g_14,(void*)0,&g_14}},{{&g_14,&g_136,&g_136,&g_14},{(void*)0,&g_136,&g_14,&g_136},{&g_14,&g_136,(void*)0,&g_14}},{{&g_136,&g_136,&g_14,&g_14},{(void*)0,&g_14,&g_14,(void*)0},{(void*)0,&g_14,&g_14,&g_14}},{{&g_136,(void*)0,(void*)0,&g_136},{&g_14,&g_136,&g_14,&g_136},{(void*)0,(void*)0,&g_136,&g_14}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_87[i] = 0xF42E135DL;
    for (i = 0; i < 5; i++)
        l_120[i] = &g_72[1][0][1];
    for (i = 0; i < 1; i++)
        l_254[i] = 0x8B0BL;
    for (i = 0; i < 4; i++)
        l_706[i] = 0L;
    for (g_14 = 0; (g_14 <= 4); g_14 += 1)
    { 
        int32_t l_66 = 0x5CED4B89L;
        struct S0 l_71 = {0xEBL,0xCCD0311CL};
        int32_t l_85 = (-1L);
        int32_t l_91 = 0xD7E5B14AL;
        uint16_t l_94[1];
        int32_t *l_102 = &l_85;
        int32_t l_104[6][4] = {{0xFFA73DA2L,0x643C3769L,0x5DE68A02L,0L},{0x643C3769L,0x993BAFFBL,0x993BAFFBL,0x643C3769L},{0xEA5583D2L,0L,0x993BAFFBL,0xDAC480BDL},{0x643C3769L,0xFFA73DA2L,0x5DE68A02L,0xFFA73DA2L},{0xFFA73DA2L,0x993BAFFBL,0xEA5583D2L,0xFFA73DA2L},{0xEA5583D2L,0xFFA73DA2L,0xDAC480BDL,0xDAC480BDL}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_94[i] = 0UL;
        g_44 = l_42;
        for (p_38 = 0; (p_38 <= 4); p_38 += 1)
        { 
            int64_t l_60 = 0xCDA4F1DFBA308D5BLL;
            struct S1 l_77 = {16209};
            int32_t l_86 = 4L;
            int32_t l_88 = (-3L);
            int32_t l_89[2];
            uint32_t l_105 = 1UL;
            const struct S0 *l_116[1];
            int i;
            for (i = 0; i < 2; i++)
                l_89[i] = (-1L);
            for (i = 0; i < 1; i++)
                l_116[i] = &l_71;
            for (g_43 = 0; (g_43 <= 4); g_43 += 1)
            { 
                int32_t l_65 = (-1L);
                uint8_t l_67 = 0xA6L;
                struct S0 **l_74 = &g_72[3][0][3];
                int8_t l_92 = 0x0BL;
                int32_t l_93 = 0x983E45B0L;
                for (g_45[1][6][2] = 0; (g_45[1][6][2] <= 4); g_45[1][6][2] += 1)
                { 
                    int16_t *l_68 = &g_69;
                    int32_t *l_70 = &l_65;
                    int i;
                    (*l_70) = ((safe_div_func_int16_t_s_s(((*l_68) ^= (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((*g_30) = (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((((safe_div_func_int32_t_s_s((((8L < (safe_lshift_func_uint16_t_u_s((((&g_16[p_38] == &g_16[g_43]) & ((l_60 >= ((((void*)0 != &g_16[g_43]) <= ((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_16[2], 2)), g_16[2])) ^ l_65)) > g_16[p_38])) || 0UL)) >= p_38), 1))) & l_66) || l_67), (*g_44))) > l_60) | 0UL), (*l_42))), 12))) | 0UL), (*l_42))), p_38))), 0x18A8L)) && g_16[p_38]);
                    if ((*l_42))
                        continue;
                    (*l_70) = (l_42 != (l_71 , l_70));
                }
                (*l_74) = g_72[3][0][3];
                for (l_71.f0 = 0; (l_71.f0 > 11); ++l_71.f0)
                { 
                    int32_t *l_78 = &g_45[1][6][2];
                    int32_t *l_79 = &g_45[0][0][1];
                    int32_t *l_80 = (void*)0;
                    int32_t *l_81 = &l_65;
                    int32_t *l_83 = &l_82;
                    int32_t *l_84[7][5][2] = {{{&g_45[0][3][6],(void*)0},{&l_65,&g_45[0][4][1]},{&g_43,&l_65},{&l_65,&l_82},{&l_65,&l_65}},{{&g_43,&g_45[0][4][1]},{&l_65,(void*)0},{&g_45[0][3][6],(void*)0},{&l_65,&g_43},{&g_43,&g_45[1][6][2]}},{{(void*)0,(void*)0},{&l_65,&l_65},{&g_43,&g_43},{(void*)0,(void*)0},{&g_45[1][6][2],&l_65}},{{&g_43,&l_65},{&g_45[1][6][2],(void*)0},{(void*)0,&g_43},{&g_43,&l_65},{&l_65,(void*)0}},{{(void*)0,&g_45[1][6][2]},{&g_43,&g_43},{&l_65,(void*)0},{&g_45[0][3][6],(void*)0},{&l_65,&g_45[0][4][1]}},{{&g_43,&l_65},{&l_65,&l_82},{&l_65,&l_65},{&g_43,&g_45[0][4][1]},{&l_65,(void*)0}},{{&g_45[0][3][6],(void*)0},{&l_65,&g_43},{&g_43,&g_45[0][1][1]},{&g_43,&l_82},{&g_43,&l_65}}};
                    int32_t l_90 = 0x3E5E6FF6L;
                    int32_t **l_97[6][5][1] = {{{&l_81},{(void*)0},{&l_81},{&l_80},{&l_81}},{{&l_80},{&l_81},{(void*)0},{&l_81},{&l_80}},{{&l_81},{&l_80},{&l_81},{(void*)0},{&l_81}},{{&l_80},{&l_81},{&l_80},{&l_81},{(void*)0}},{{&l_81},{&l_80},{&l_81},{&l_80},{&l_81}},{{(void*)0},{&l_81},{&l_80},{&l_81},{&l_80}}};
                    int i, j, k;
                    l_77 = g_29[0];
                    l_94[0]--;
                    g_44 = &l_85;
                }
                if (p_38)
                    continue;
            }
            for (l_86 = 0; (l_86 < 14); l_86 = safe_add_func_uint8_t_u_u(l_86, 6))
            { 
                int32_t *l_100 = &l_89[0];
                int32_t **l_101 = (void*)0;
                int32_t *l_103[3][4][2] = {{{&l_87[0],&l_89[0]},{&l_87[0],&l_87[0]},{&l_89[0],&l_87[0]},{&l_87[0],&l_89[0]}},{{&l_87[0],&l_87[0]},{&l_89[0],&l_87[0]},{&l_87[0],&l_89[0]},{&l_87[0],&l_87[0]}},{{&l_89[0],&l_87[0]},{&l_87[0],&l_89[0]},{&l_87[0],&l_87[0]},{&l_89[0],&l_87[0]}}};
                int i, j, k;
                l_102 = l_100;
                --l_105;
                (*g_44) = ((((safe_lshift_func_uint16_t_u_s((((-1L) != (((safe_mod_func_uint32_t_u_u(0xFBBA9724L, g_73.f0)) , ((p_38 , (safe_lshift_func_int8_t_s_s((p_38 , ((safe_mul_func_int8_t_s_s((1UL != (((void*)0 != l_116[0]) || (*g_44))), p_38)) <= (*g_44))), g_45[2][4][2]))) >= (*l_100))) , (*l_102))) == 0x7461230A905D2FD9LL), p_38)) != 0xBA671F50AE7412AELL) == (*g_30)) && (*l_42));
            }
            (*g_44) = (*g_44);
        }
        return &g_16[2];
    }
    for (g_43 = 0; (g_43 == (-14)); --g_43)
    { 
        g_44 = &l_87[0];
    }
    (*l_119) = &g_72[2][0][3];
    if (l_121)
    { 
        int32_t **l_122 = &g_44;
        int32_t l_134[2];
        struct S0 l_169 = {255UL,0xF0C697CCL};
        union U3 l_185[7] = {{{0UL,{1UL,1L},0x3A36901CA62E3C5ALL}},{{2UL,{7UL,0x8E0C8330L},-1L}},{{2UL,{7UL,0x8E0C8330L},-1L}},{{0UL,{1UL,1L},0x3A36901CA62E3C5ALL}},{{2UL,{7UL,0x8E0C8330L},-1L}},{{2UL,{7UL,0x8E0C8330L},-1L}},{{0UL,{1UL,1L},0x3A36901CA62E3C5ALL}}};
        struct S1 l_274 = {8540};
        uint16_t l_313 = 0xC080L;
        union U3 *l_337 = &l_185[3];
        union U3 **l_336 = &l_337;
        int8_t l_342 = 7L;
        uint32_t l_369 = 0xA0D42543L;
        int16_t *l_435 = &l_254[0];
        struct S0 * const *l_441 = (void*)0;
        struct S0 * const **l_440[6][1][3] = {{{&l_441,&l_441,&l_441}},{{(void*)0,&l_441,(void*)0}},{{&l_441,&l_441,&l_441}},{{(void*)0,&l_441,(void*)0}},{{&l_441,&l_441,&l_441}},{{(void*)0,&l_441,(void*)0}}};
        struct S0 * const ***l_442[4][4][4] = {{{&l_440[2][0][1],(void*)0,&l_440[2][0][1],&l_440[2][0][1]},{(void*)0,(void*)0,&l_440[4][0][2],(void*)0},{(void*)0,&l_440[2][0][1],&l_440[2][0][1],(void*)0},{&l_440[2][0][1],(void*)0,&l_440[2][0][1],&l_440[2][0][1]}},{{(void*)0,(void*)0,&l_440[4][0][2],(void*)0},{(void*)0,&l_440[2][0][1],&l_440[2][0][1],(void*)0},{&l_440[2][0][1],(void*)0,&l_440[2][0][1],&l_440[2][0][1]},{(void*)0,(void*)0,&l_440[4][0][2],(void*)0}},{{(void*)0,&l_440[2][0][1],&l_440[2][0][1],(void*)0},{&l_440[2][0][1],(void*)0,&l_440[2][0][1],&l_440[2][0][1]},{(void*)0,(void*)0,&l_440[4][0][2],(void*)0},{(void*)0,&l_440[2][0][1],&l_440[2][0][1],(void*)0}},{{&l_440[2][0][1],(void*)0,&l_440[2][0][1],&l_440[2][0][1]},{(void*)0,(void*)0,&l_440[4][0][2],(void*)0},{(void*)0,&l_440[2][0][1],&l_440[2][0][1],(void*)0},{&l_440[2][0][1],(void*)0,&l_440[2][0][1],&l_440[2][0][1]}}};
        int8_t *l_447[5][5] = {{&g_148,&g_148,&l_342,&g_148,&g_148},{(void*)0,&l_342,(void*)0,&g_148,&g_148},{&g_148,&g_148,&g_148,&g_148,&g_148},{&g_148,&l_342,&l_342,&l_342,&g_148},{&g_148,&g_148,&g_148,&g_148,&g_148}};
        int64_t *l_448[6] = {&g_16[2],&g_16[0],&g_16[0],&g_16[2],&g_16[0],&g_16[0]};
        int32_t *l_452 = &l_82;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_134[i] = (-5L);
        (*l_122) = &l_82;
        if (((2UL | ((*g_44) = (-1L))) , (**l_122)))
        { 
            int32_t l_130 = 1L;
            struct S1 l_162[3] = {{3848},{3848},{3848}};
            int32_t l_192 = 7L;
            union U3 l_201 = {{18446744073709551610UL,{6UL,0x0064F0C3L},0L}};
            int32_t l_209[3][1];
            int16_t l_224 = (-1L);
            uint16_t l_225 = 65534UL;
            uint16_t l_239 = 0x2F2EL;
            struct S0 *l_252 = &g_73;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_209[i][j] = 0L;
            }
            if ((safe_sub_func_int16_t_s_s((&l_82 != &g_43), (**l_122))))
            { 
                uint8_t l_131[4];
                int32_t l_135[4][2][3];
                int32_t *l_141 = (void*)0;
                int64_t *l_142 = &g_16[1];
                int32_t l_154 = 1L;
                int32_t **l_164 = &l_141;
                const union U3 *l_177 = (void*)0;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_131[i] = 0xE5L;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_135[i][j][k] = 0xE3443E91L;
                    }
                }
                (*l_42) = p_38;
                for (g_73.f1 = 0; (g_73.f1 <= 0); g_73.f1 += 1)
                { 
                    int32_t *l_125 = &g_45[0][6][4];
                    int32_t *l_126 = &g_45[1][6][2];
                    int32_t *l_127 = &g_45[1][2][6];
                    int32_t *l_128 = &l_87[0];
                    int32_t *l_129[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*l_122) = (void*)0;
                    ++l_131[3];
                    g_136--;
                    if (p_38)
                        break;
                }
                if ((safe_sub_func_int8_t_s_s((-1L), p_38)))
                { 
lbl_168:
                    l_141 = &g_45[2][2][1];
                    return l_142;
                }
                else
                { 
                    uint32_t l_146 = 1UL;
                    int8_t *l_147[6] = {&g_148,&g_148,&g_148,&g_148,&g_148,&g_148};
                    int8_t l_153 = 0xADL;
                    int32_t *l_155 = &l_135[1][0][2];
                    int32_t *l_156[3];
                    uint16_t l_157 = 65526UL;
                    const struct S2 l_161 = {0xAED4DD8CL,{0UL,-4L},0xEEF5AA28B3A16827LL};
                    struct S0 * const l_163 = &g_73;
                    int32_t ***l_165 = &l_164;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_156[i] = &l_87[0];
                    l_154 = (g_143 , (((safe_rshift_func_int8_t_s_u((l_135[0][0][2] = (((l_130 ^= l_146) || l_130) | (g_16[3] || 0xDA3CCD9CL))), 3)) , ((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((g_143.f1.f0 > l_153) <= g_16[2]) | p_38), 12)), 6)) ^ (*l_42)) >= g_14) & (-1L))) > l_146));
                    ++l_157;
                    (**l_119) = (**l_119);
                    (*l_165) = ((!(l_161 , (((*l_155) = p_38) && (((**l_119) = &g_73) != (l_162[2] , l_163))))) , l_164);
                }
                for (g_69 = 0; (g_69 == 10); g_69 = safe_add_func_int32_t_s_s(g_69, 2))
                { 
                    uint8_t l_174 = 0xD5L;
                    if (g_136)
                        goto lbl_168;
                    l_169 = l_169;
                    l_130 ^= (safe_mul_func_uint16_t_u_u(g_14, ((safe_div_func_int32_t_s_s(((g_73.f0 , g_29[0]) , 0xBE6477B1L), (p_38 || ((((g_69 >= ((g_73.f1 != (*l_42)) & (*l_42))) ^ 1UL) > l_174) == l_174)))) || 0x163AL)));
                }
                for (g_69 = 0; (g_69 >= 1); g_69 = safe_add_func_uint16_t_u_u(g_69, 2))
                { 
                    const union U3 *l_178 = (void*)0;
                    int32_t l_180 = 0x013EEB7EL;
                    l_178 = l_177;
                    (*l_42) = (+l_180);
                    if (p_38)
                        break;
                }
            }
            else
            { 
                uint16_t l_193 = 65535UL;
                struct S0 *l_197 = (void*)0;
                int32_t *l_200 = (void*)0;
                int32_t * const l_203 = &l_82;
                int32_t **l_204 = &g_44;
                for (l_169.f1 = (-17); (l_169.f1 > (-6)); ++l_169.f1)
                { 
                    return &g_16[2];
                }
                if (((safe_lshift_func_int8_t_s_s(1L, 4)) == p_38))
                { 
                    int32_t *l_186 = (void*)0;
                    int32_t *l_187 = &g_45[1][0][2];
                    int32_t *l_188 = &g_43;
                    int32_t *l_189 = (void*)0;
                    int32_t *l_190 = &l_134[1];
                    int32_t *l_191[5][6] = {{&g_43,&g_45[1][4][0],&g_43,(void*)0,(void*)0,&g_43},{&g_45[1][6][2],&g_45[1][6][2],(void*)0,&g_43,(void*)0,&g_45[1][6][2]},{(void*)0,&g_45[1][4][0],&g_43,&g_43,&g_45[1][4][0],(void*)0},{&g_45[1][6][2],(void*)0,&g_43,(void*)0,&g_45[1][6][2],&g_45[1][6][2]},{&g_43,(void*)0,(void*)0,&g_43,&g_45[1][4][0],&g_43}};
                    int i, j;
                    (*l_42) &= 0L;
                    (*l_122) = (l_185[3] , &l_130);
                    (*l_122) = &l_87[0];
                    if (g_43)
                        goto lbl_196;
lbl_196:
                    l_193--;
                    (**l_119) = l_197;
                }
                else
                { 
                    return &g_16[2];
                }
                for (g_69 = (-20); (g_69 != 11); g_69 = safe_add_func_uint32_t_u_u(g_69, 1))
                { 
                    int8_t *l_202 = &g_148;
                    (*l_122) = l_200;
                    (*l_42) &= (&g_148 == (l_201 , l_202));
                }
                (*l_204) = l_203;
            }
            if (g_143.f1.f1)
            { 
                int32_t *l_205 = (void*)0;
                int32_t *l_206 = &l_130;
                int32_t *l_207 = &g_45[1][6][2];
                int32_t *l_208[1][4][3] = {{{&l_87[0],(void*)0,(void*)0},{&l_87[0],&l_87[0],&l_87[0]},{&l_87[0],(void*)0,(void*)0},{&l_87[0],&l_87[0],&l_87[0]}}};
                int i, j, k;
                --l_210;
            }
            else
            { 
                int32_t l_215 = 0x039C2A8EL;
                int32_t l_220 = 0x95291765L;
                int32_t l_221 = 1L;
                int32_t l_222[2];
                int64_t l_223 = (-1L);
                uint16_t l_241[5];
                struct S0 l_247 = {0x96L,-1L};
                struct S0 *l_253[3][6][1] = {{{&g_73},{&l_169},{&l_169},{&g_73},{&l_169},{(void*)0}},{{&l_169},{&g_73},{&l_169},{&l_169},{&g_73},{&l_169}},{{(void*)0},{&l_169},{&g_73},{&l_169},{&l_169},{&g_73}}};
                int32_t *l_255 = &g_45[1][6][2];
                int32_t *l_256 = (void*)0;
                int32_t *l_257[1][5][4] = {{{&l_82,&l_220,&l_82,&l_130},{&l_82,&l_130,&l_130,&l_82},{&l_220,&l_130,(void*)0,&l_130},{&l_130,&l_220,(void*)0,(void*)0},{&l_220,&l_220,&l_130,(void*)0}}};
                uint32_t l_259 = 0x4F683153L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_222[i] = 0x48C37F4FL;
                for (i = 0; i < 5; i++)
                    l_241[i] = 0xDCBBL;
                for (l_82 = 0; (l_82 >= 25); l_82 = safe_add_func_int16_t_s_s(l_82, 3))
                { 
                    int32_t *l_216 = &l_87[0];
                    int32_t *l_217 = &l_87[0];
                    int32_t *l_218 = &l_209[2][0];
                    int32_t *l_219[1];
                    int8_t *l_240 = &g_148;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_219[i] = &l_209[0][0];
                    l_225--;
                    (*l_122) = &l_87[0];
                    (*l_216) &= (safe_rshift_func_uint16_t_u_u((((((l_220 = ((*l_240) = ((((safe_rshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(p_38, 0x843EL)) || (((l_238 , (g_16[2] < p_38)) | (((((l_239 && (p_39 != p_39)) > l_215) != 0xD26CL) | (*l_42)) == g_45[0][6][6])) < g_143.f1.f1)), l_201.f0.f2)), l_192)) <= p_38), 1)) , 0x73L) | 6L) | 65528UL))) && (*l_42)) , 0L) && g_143.f1.f1) >= l_241[1]), 11));
                    (*l_122) = (*l_122);
                }
                (*l_42) = (((g_242 , ((*p_39) && (0x64ABL && (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((l_247 , (safe_add_func_uint64_t_u_u((0L > (((**l_119) = &g_73) == (l_253[2][0][0] = l_252))), l_254[0]))), p_38)), 6))))) != 0xD7L) , l_220);
                l_259--;
            }
            for (l_82 = 15; (l_82 != (-7)); l_82--)
            { 
                uint8_t l_269 = 0xBCL;
                if (l_224)
                    break;
                if (p_38)
                { 
                    return p_39;
                }
                else
                { 
                    uint32_t l_264 = 0x2E228DF9L;
                    int32_t *l_265 = &l_87[0];
                    int32_t *l_266 = &g_45[1][6][2];
                    int32_t *l_267 = &g_43;
                    int32_t *l_268[4] = {&l_192,&l_192,&l_192,&l_192};
                    int i;
                    if (l_264)
                        break;
                    l_269++;
                    if (p_38)
                        continue;
                }
                l_274 = ((safe_mul_func_uint16_t_u_u(0xABA2L, l_162[2].f0)) , g_29[0]);
                for (l_130 = 0; (l_130 < (-9)); l_130 = safe_sub_func_int8_t_s_s(l_130, 1))
                { 
                    return p_39;
                }
            }
        }
        else
        { 
            union U3 *l_282 = (void*)0;
            union U3 **l_281 = &l_282;
            int32_t l_306[1][3][3] = {{{0x63B8242CL,0x72A1CF6EL,0x72A1CF6EL},{0x63B8242CL,0x72A1CF6EL,0x72A1CF6EL},{0x63B8242CL,0x72A1CF6EL,0x72A1CF6EL}}};
            uint32_t l_340 = 6UL;
            uint64_t l_401 = 18446744073709551615UL;
            int i, j, k;
            for (g_73.f1 = 7; (g_73.f1 != 18); g_73.f1 = safe_add_func_int16_t_s_s(g_73.f1, 1))
            { 
                int8_t l_307 = 0x3BL;
                int32_t l_314 = (-1L);
                int32_t *l_334 = &l_314;
                uint16_t l_341 = 65533UL;
                int16_t *l_350[3][2][3] = {{{&l_254[0],&l_254[0],&l_254[0]},{&l_254[0],&l_254[0],&l_254[0]}},{{&l_254[0],&l_254[0],&l_254[0]},{&l_254[0],&l_254[0],&l_254[0]}},{{&l_254[0],&l_254[0],&l_254[0]},{&l_254[0],&l_254[0],&l_254[0]}}};
                uint32_t *l_351 = &l_340;
                int32_t l_358 = 0x760F16CFL;
                int32_t ** const *l_417[7][3] = {{&l_122,&l_122,&l_122},{&l_122,(void*)0,(void*)0},{&l_122,&l_122,(void*)0},{&l_122,(void*)0,&l_122},{&l_122,&l_122,(void*)0},{&l_122,&l_122,(void*)0},{&l_122,&l_122,&l_122}};
                int i, j, k;
            }
        }
        (*l_452) &= (((safe_mod_func_int64_t_s_s(((((~(l_134[1] ^= (((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(0xDCL, 5)), ((*l_435) = p_38))), (((void*)0 == &g_16[2]) > (((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u((g_148 = ((g_443[1][3] = l_440[2][0][1]) == &g_444)), ((g_449 &= ((*l_42) &= (*g_30))) >= p_38))) > p_38) , p_38) < p_38), g_45[1][6][2])) < g_450) , p_38)))) >= (*p_39)) == g_143.f1.f1))) != 0L) < 0L) | 0x4CL), (*l_335))) , g_451[1]) != (void*)0);
        return p_39;
    }
    else
    { 
        union U3 *l_454 = &g_242;
        union U3 **l_453 = &l_454;
        int32_t l_455 = 0xC7E30A1FL;
        int32_t *l_469 = &l_87[0];
        uint8_t l_478 = 0xA1L;
        int64_t l_483 = 0x99A6DCCAC9D5BB17LL;
        struct S0 ***l_504 = &l_120[1];
        struct S2 *l_508 = &g_509;
lbl_489:
        (*l_453) = &g_242;
        if (l_455)
        { 
            int32_t *l_456 = &g_43;
            int32_t **l_457 = (void*)0;
            const int32_t *l_459[6][4][2] = {{{&l_87[0],&l_82},{&g_43,&g_43},{&l_82,&l_87[0]},{(void*)0,&l_87[0]}},{{&l_87[0],&g_43},{&g_43,&l_87[0]},{&l_87[0],&g_43},{&l_87[0],&l_87[0]}},{{&g_43,&g_43},{&l_87[0],&l_87[0]},{(void*)0,&l_87[0]},{&l_82,&g_43}},{{&g_43,&l_82},{&l_87[0],(void*)0},{&l_87[0],&l_87[0]},{&g_43,&g_43}},{{&l_87[0],&l_87[0]},{&g_43,&l_87[0]},{&l_87[0],&g_43},{&g_43,&l_87[0]}},{{&l_87[0],(void*)0},{&l_87[0],&l_82},{&g_43,&g_43},{&l_82,&l_87[0]}}};
            const int32_t **l_458 = &l_459[2][1][1];
            int64_t *l_465[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_465[i] = (void*)0;
            l_456 = l_456;
lbl_466:
            (*l_42) &= p_38;
            (*l_458) = (void*)0;
            for (g_446.f1 = 22; (g_446.f1 == (-29)); --g_446.f1)
            { 
                int32_t *l_462 = &g_45[1][6][2];
                if (p_38)
                    break;
                (*l_458) = (l_42 = l_462);
                for (g_242.f1 = 0; (g_242.f1 <= 0); g_242.f1 += 1)
                { 
                    const struct S1 l_463 = {7456};
                    struct S1 *l_464 = &l_238;
                    int i;
                    (*l_464) = (l_254[g_242.f1] , l_463);
                    return l_465[1];
                }
                if (g_136)
                    goto lbl_466;
                for (g_73.f0 = 24; (g_73.f0 > 32); g_73.f0++)
                { 
                    (*l_458) = &l_82;
                }
            }
            return p_39;
        }
        else
        { 
            int32_t **l_470 = &l_335;
            int32_t *l_471 = &g_43;
            int32_t *l_472 = &g_45[0][2][1];
            int32_t *l_473 = &g_45[0][5][1];
            int32_t *l_474 = &l_87[0];
            int32_t *l_475 = &g_45[1][6][2];
            int32_t *l_476 = (void*)0;
            int32_t *l_477[5];
            int i;
            for (i = 0; i < 5; i++)
                l_477[i] = &l_82;
            (*l_470) = l_469;
            ++l_478;
            if (((*l_473) = (((safe_mod_func_int8_t_s_s((l_483 | p_38), (safe_sub_func_int32_t_s_s(0x9D163EB1L, ((~0xBCL) >= ((g_136 != (*l_472)) <= ((**l_470) & (-8L)))))))) ^ p_38) || g_242.f0.f1.f1)))
            { 
                int64_t *l_491[2][3][3] = {{{&g_16[2],&g_450,&g_450},{&g_16[2],&g_16[3],&g_16[3]},{&g_16[2],&g_450,&g_16[0]}},{{&g_16[3],&g_450,&g_450},{&g_450,&g_16[0],&g_16[0]},{&g_16[3],&g_450,&g_450}}};
                int i, j, k;
                for (l_258 = 0; (l_258 >= 7); ++l_258)
                { 
                    if (p_38)
                        break;
                    if ((*l_471))
                        continue;
                    if (g_73.f1)
                        goto lbl_489;
                    return l_490;
                }
                return l_491[1][0][0];
            }
            else
            { 
                int64_t l_496 = 1L;
                uint32_t l_517 = 0xDAC9487FL;
lbl_534:
                for (g_14 = 3; (g_14 <= 42); g_14 = safe_add_func_uint64_t_u_u(g_14, 6))
                { 
                    (*l_472) = (safe_lshift_func_uint16_t_u_u(l_496, 13));
                    (*l_471) ^= 0x8B010AD6L;
                }
                for (l_496 = (-8); (l_496 >= (-24)); l_496 = safe_sub_func_int16_t_s_s(l_496, 5))
                { 
                    return &g_16[0];
                }
                if ((0xCCL >= (safe_lshift_func_uint8_t_u_u(g_242.f0.f1.f0, 3))))
                { 
                    struct S0 ****l_501 = &l_119;
                    struct S0 ***l_503 = &l_120[0];
                    struct S0 ****l_502[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    struct S2 **l_505 = (void*)0;
                    struct S2 *l_507 = (void*)0;
                    struct S2 **l_506[3][4][1] = {{{&l_507},{&l_507},{&l_507},{&l_507}},{{&l_507},{&l_507},{&l_507},{&l_507}},{{&l_507},{&l_507},{&l_507},{&l_507}}};
                    int i, j, k;
                    l_504 = ((*l_501) = (void*)0);
                    l_508 = (void*)0;
                }
                else
                { 
                    int16_t *l_515[7] = {&l_254[0],&l_254[0],&l_254[0],&l_254[0],&l_254[0],&l_254[0],&l_254[0]};
                    int32_t l_516 = 0xDF267BE1L;
                    struct S2 l_526 = {18446744073709551609UL,{3UL,0xFF7BC8DBL},0L};
                    uint64_t *l_529[1][5][5];
                    int8_t *l_532 = (void*)0;
                    int8_t *l_533 = &g_148;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_529[i][j][k] = &g_312;
                        }
                    }
                    (**l_470) = (((g_45[1][0][1] , ((((g_242.f0.f1.f0 | (((0xF2E8340930148269LL == (safe_sub_func_uint64_t_u_u(((((safe_unary_minus_func_uint16_t_u((((((*g_30) = ((((((-5L) < g_242.f0.f1.f0) , (l_516 = (p_38 , ((safe_mod_func_uint32_t_u_u(((-1L) && g_148), 0xB3B8669BL)) , (-7L))))) > p_38) < 0x8C2714DC01208910LL) <= l_496)) ^ (*l_469)) < (*l_472)) ^ p_38))) , 0x6BFCL) != p_38) , 1UL), 0x9F4CAC0A5C77AE5BLL))) < (*l_42)) || 0x36L)) , g_449) >= 3UL) > l_517)) & (-7L)) | (*l_335));
                    (*l_473) &= ((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((*l_454) , g_421.f0.f1.f1), ((safe_div_func_uint64_t_u_u((g_242 , (l_526 , (((*l_533) ^= (((safe_rshift_func_int16_t_s_u((((*l_42) = (((*l_469) &= 18446744073709551609UL) || ((*p_39) = ((0UL & (safe_lshift_func_int16_t_s_s((-1L), 3))) < 3UL)))) < (-1L)), 14)) ^ p_38) < (-1L))) , 0xEB5DE969655D204FLL))), l_496)) == 0x45L))) < 0xFDB0ACB9L), l_526.f1.f0)), 0x118AL)) ^ p_38);
                    return p_39;
                }
                if (g_143.f1.f0)
                    goto lbl_534;
            }
            (*l_473) |= p_38;
        }
        for (l_478 = (-2); (l_478 == 53); l_478 = safe_add_func_int16_t_s_s(l_478, 1))
        { 
            int32_t l_541 = 0L;
            l_537++;
            (*l_335) = (!g_450);
            if (l_541)
                break;
            return &g_450;
        }
    }
    for (g_148 = 4; (g_148 >= 0); g_148 -= 1)
    { 
        struct S0 l_542[4][2] = {{{255UL,0xB8DBD7A7L},{255UL,0xB8DBD7A7L}},{{255UL,-7L},{255UL,0xB8DBD7A7L}},{{255UL,0xB8DBD7A7L},{255UL,-7L}},{{255UL,0xB8DBD7A7L},{255UL,0xB8DBD7A7L}}};
        uint64_t *l_556 = &l_537;
        const int32_t *l_561 = &l_87[0];
        struct S0 * const **l_572[3][1][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_444,&g_444,&g_444,&g_444,&g_444,&g_444,&g_444}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        struct S1 l_575 = {9519};
        int32_t l_585[3];
        union U3 *l_593 = (void*)0;
        uint32_t l_670 = 0x5675A6A4L;
        int64_t *l_690 = &g_16[g_148];
        int32_t *l_715[2];
        const int8_t l_751 = 0x32L;
        uint16_t *l_801 = &g_136;
        struct S2 l_809[7][7] = {{{0UL,{0x98L,0x08465280L},5L},{0xA78437CCL,{249UL,-1L},0xFD2DAC14BF5B5BCBLL},{0xA408FE74L,{0x01L,1L},0x6FBE7FB9FF591B5ALL},{0xCDBAE891L,{0x62L,1L},0L},{2UL,{0x15L,0x7A44362EL},-1L},{0x099DE7EAL,{1UL,0x177A7F04L},-1L},{0UL,{0x5BL,0xBC185312L},0x0C10D26999F4ED6ALL}},{{2UL,{0x15L,0x7A44362EL},-1L},{0UL,{0x98L,0x08465280L},5L},{0xDC80030DL,{0x6CL,0xED6EDA28L},5L},{0x3272DE5AL,{0x57L,0x3A750A76L},-7L},{0x3272DE5AL,{0x57L,0x3A750A76L},-7L},{0xDC80030DL,{0x6CL,0xED6EDA28L},5L},{0UL,{0x98L,0x08465280L},5L}},{{0x4647DDEEL,{0xDAL,-9L},0L},{0x90B3B917L,{0xF8L,-1L},0x10804231BB29619BLL},{0xDC80030DL,{0x6CL,0xED6EDA28L},5L},{0x099DE7EAL,{1UL,0x177A7F04L},-1L},{0xF08DC98EL,{0x8FL,0x4CBA8465L},-2L},{0x3272DE5AL,{0x57L,0x3A750A76L},-7L},{0xC3989DAFL,{254UL,0xA1A0D097L},0xB675EE5859A624B5LL}},{{18446744073709551615UL,{2UL,-2L},0L},{0x113AC8FAL,{0x83L,0xD69188B3L},0x494C56F0F05FAA95LL},{0xA408FE74L,{0x01L,1L},0x6FBE7FB9FF591B5ALL},{0x2D81821CL,{0x81L,-7L},-10L},{0x489FB64EL,{250UL,0L},0xBF00D8CD6DADE069LL},{0x615FC377L,{3UL,0xD598535BL},0x8BAEFB5F3AD9E6C5LL},{0xCDBAE891L,{0x62L,1L},0L}},{{0xDC80030DL,{0x6CL,0xED6EDA28L},5L},{0x2D81821CL,{0x81L,-7L},-10L},{0xC3989DAFL,{254UL,0xA1A0D097L},0xB675EE5859A624B5LL},{0x099DE7EAL,{1UL,0x177A7F04L},-1L},{0xA408FE74L,{0x01L,1L},0x6FBE7FB9FF591B5ALL},{0xA408FE74L,{0x01L,1L},0x6FBE7FB9FF591B5ALL},{0x099DE7EAL,{1UL,0x177A7F04L},-1L}},{{0UL,{0xEEL,1L},1L},{0xCDBAE891L,{0x62L,1L},0L},{0UL,{0xEEL,1L},1L},{0x3272DE5AL,{0x57L,0x3A750A76L},-7L},{0xA408FE74L,{0x01L,1L},0x6FBE7FB9FF591B5ALL},{2UL,{0x15L,0x7A44362EL},-1L},{0x4647DDEEL,{0xDAL,-9L},0L}},{{0x113AC8FAL,{0x83L,0xD69188B3L},0x494C56F0F05FAA95LL},{0x615FC377L,{3UL,0xD598535BL},0x8BAEFB5F3AD9E6C5LL},{0x41324725L,{0UL,0L},0xC9FCD037FBADD1B7LL},{0xCDBAE891L,{0x62L,1L},0L},{0x489FB64EL,{250UL,0L},0xBF00D8CD6DADE069LL},{0x90B3B917L,{0xF8L,-1L},0x10804231BB29619BLL},{0xC6175400L,{6UL,-9L},0x3B96794A45FCA1F6LL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_585[i] = (-1L);
        for (i = 0; i < 2; i++)
            l_715[i] = &l_585[2];
        l_542[2][1] = l_542[2][1];
        if (g_16[g_148])
            break;
    }
    return g_820;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_29[i].f0, "g_29[i].f0", print_hash_value);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_45[i][j][k], "g_45[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_143.f1.f0, "g_143.f1.f0", print_hash_value);
    transparent_crc(g_143.f1.f1, "g_143.f1.f1", print_hash_value);
    transparent_crc(g_143.f2, "g_143.f2", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_242.f0.f0, "g_242.f0.f0", print_hash_value);
    transparent_crc(g_242.f0.f1.f0, "g_242.f0.f1.f0", print_hash_value);
    transparent_crc(g_242.f0.f1.f1, "g_242.f0.f1.f1", print_hash_value);
    transparent_crc(g_242.f0.f2, "g_242.f0.f2", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_421.f0.f0, "g_421.f0.f0", print_hash_value);
    transparent_crc(g_421.f0.f1.f0, "g_421.f0.f1.f0", print_hash_value);
    transparent_crc(g_421.f0.f1.f1, "g_421.f0.f1.f1", print_hash_value);
    transparent_crc(g_421.f0.f2, "g_421.f0.f2", print_hash_value);
    transparent_crc(g_446.f0, "g_446.f0", print_hash_value);
    transparent_crc(g_446.f1, "g_446.f1", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_509.f0, "g_509.f0", print_hash_value);
    transparent_crc(g_509.f1.f0, "g_509.f1.f0", print_hash_value);
    transparent_crc(g_509.f1.f1, "g_509.f1.f1", print_hash_value);
    transparent_crc(g_509.f2, "g_509.f2", print_hash_value);
    transparent_crc(g_577.f0, "g_577.f0", print_hash_value);
    transparent_crc(g_577.f1.f0, "g_577.f1.f0", print_hash_value);
    transparent_crc(g_577.f1.f1, "g_577.f1.f1", print_hash_value);
    transparent_crc(g_577.f2, "g_577.f2", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_595.f0.f0, "g_595.f0.f0", print_hash_value);
    transparent_crc(g_595.f0.f1.f0, "g_595.f0.f1.f0", print_hash_value);
    transparent_crc(g_595.f0.f1.f1, "g_595.f0.f1.f1", print_hash_value);
    transparent_crc(g_595.f0.f2, "g_595.f0.f2", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    transparent_crc(g_855.f0, "g_855.f0", print_hash_value);
    transparent_crc(g_898, "g_898", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_991[i], "g_991[i]", print_hash_value);

    }
    transparent_crc(g_1092.f0, "g_1092.f0", print_hash_value);
    transparent_crc(g_1092.f1.f0, "g_1092.f1.f0", print_hash_value);
    transparent_crc(g_1092.f1.f1, "g_1092.f1.f1", print_hash_value);
    transparent_crc(g_1092.f2, "g_1092.f2", print_hash_value);
    transparent_crc(g_1191.f0, "g_1191.f0", print_hash_value);
    transparent_crc(g_1191.f1.f0, "g_1191.f1.f0", print_hash_value);
    transparent_crc(g_1191.f1.f1, "g_1191.f1.f1", print_hash_value);
    transparent_crc(g_1191.f2, "g_1191.f2", print_hash_value);
    transparent_crc(g_1197, "g_1197", print_hash_value);
    transparent_crc(g_1236.f0, "g_1236.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1340[i][j], "g_1340[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1356, "g_1356", print_hash_value);
    transparent_crc(g_1406, "g_1406", print_hash_value);
    transparent_crc(g_1430, "g_1430", print_hash_value);
    transparent_crc(g_1476, "g_1476", print_hash_value);
    transparent_crc(g_1761, "g_1761", print_hash_value);
    transparent_crc(g_1835, "g_1835", print_hash_value);
    transparent_crc(g_1865, "g_1865", print_hash_value);
    transparent_crc(g_1869, "g_1869", print_hash_value);
    transparent_crc(g_2040.f0.f0, "g_2040.f0.f0", print_hash_value);
    transparent_crc(g_2040.f0.f1.f0, "g_2040.f0.f1.f0", print_hash_value);
    transparent_crc(g_2040.f0.f1.f1, "g_2040.f0.f1.f1", print_hash_value);
    transparent_crc(g_2040.f0.f2, "g_2040.f0.f2", print_hash_value);
    transparent_crc(g_2271, "g_2271", print_hash_value);
    transparent_crc(g_2325, "g_2325", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2412[i], "g_2412[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2489[i][j][k], "g_2489[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2583, "g_2583", print_hash_value);
    transparent_crc(g_2585, "g_2585", print_hash_value);
    transparent_crc(g_2591.f0.f0, "g_2591.f0.f0", print_hash_value);
    transparent_crc(g_2591.f0.f1.f0, "g_2591.f0.f1.f0", print_hash_value);
    transparent_crc(g_2591.f0.f1.f1, "g_2591.f0.f1.f1", print_hash_value);
    transparent_crc(g_2591.f0.f2, "g_2591.f0.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
