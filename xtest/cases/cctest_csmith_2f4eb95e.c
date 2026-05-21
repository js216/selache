// SPDX-License-Identifier: MIT
// cctest_csmith_2f4eb95e.c --- cctest case csmith_2f4eb95e (csmith seed 793688414)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb06232e9 */

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

// Options:   -s 793688414 -o /tmp/csmith_gen_pli59qdo/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   const int8_t  f1;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   int16_t  f1;
   uint16_t  f2;
};

union U2 {
   struct S0  f0;
};


static uint32_t g_4 = 0x38AB659DL;
static union U1 g_13[4][1][3] = {{{{{0x63L,0xFAL}},{{1L,3L}},{{0x63L,0xFAL}}}},{{{{0x63L,0xFAL}},{{1L,3L}},{{0x63L,0xFAL}}}},{{{{0x63L,0xFAL}},{{1L,3L}},{{0x63L,0xFAL}}}},{{{{0x63L,0xFAL}},{{1L,3L}},{{0x63L,0xFAL}}}}};
static uint32_t g_47 = 0x0E2EFE8EL;
static int32_t g_48 = 0xC53D8B3DL;
static uint32_t g_70 = 18446744073709551614UL;
static uint16_t g_73 = 0UL;
static int32_t g_86[4][4] = {{0x99F9A51CL,0x20AF8266L,0x99F9A51CL,0x99F9A51CL},{0x20AF8266L,0x20AF8266L,0xF1A37C05L,0x20AF8266L},{0x20AF8266L,0x99F9A51CL,0x99F9A51CL,0x20AF8266L},{0x99F9A51CL,0x20AF8266L,0x99F9A51CL,0x99F9A51CL}};
static int32_t g_87 = 5L;
static int8_t g_89 = (-2L);
static const int32_t g_159 = 0x9B7E06FDL;
static uint32_t g_192 = 0x378F7CF6L;
static int16_t g_198[1] = {(-1L)};
static uint8_t g_201 = 0x32L;
static union U2 g_230 = {{0x11L,0x99L}};
static int64_t g_231[2][1] = {{0x986BF88CC17E293CLL},{0x986BF88CC17E293CLL}};
static int64_t g_276[1][4][4] = {{{0xD3E714B42A01C24BLL,0L,0xD3E714B42A01C24BLL,0L},{0xD3E714B42A01C24BLL,0L,0xD3E714B42A01C24BLL,0L},{0xD3E714B42A01C24BLL,0L,0xD3E714B42A01C24BLL,0L},{0xD3E714B42A01C24BLL,0L,0xD3E714B42A01C24BLL,0L}}};
static uint64_t g_347 = 0xAFFB2B9773CC981ALL;
static int32_t g_368 = (-2L);
static uint32_t g_389 = 4294967286UL;



static uint64_t  func_1(void);
static uint16_t  func_2(uint32_t  p_3);
static int64_t  func_7(int8_t  p_8, const int8_t  p_9, uint32_t  p_10, uint32_t  p_11, int32_t  p_12);
static int8_t  func_14(uint64_t  p_15, uint64_t  p_16, int8_t  p_17, struct S0  p_18);




static uint64_t  func_1(void)
{ 
    uint32_t l_227 = 0xF2D55D3BL;
    int32_t l_232 = 0x0EB5DC20L;
    int32_t l_233 = (-7L);
    union U1 l_235 = {{0x97L,9L}};
    uint16_t l_261 = 0x0DEFL;
    uint64_t l_348[1][1][2];
    int32_t l_387[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_348[i][j][k] = 0UL;
        }
    }
    for (i = 0; i < 1; i++)
        l_387[i] = 0xCCE56ECCL;
    l_233 = (func_2(g_4) , (safe_mod_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((l_232 = (((((l_227 , (safe_div_func_int32_t_s_s((((g_230 , 0x6496L) , 254UL) & l_227), g_86[3][0]))) | g_231[0][0]) > l_227) , g_13[3][0][0]) , 5L)) >= 0xD5L), l_227)) || l_227), g_192)));
    if (((g_86[3][0] = ((+g_231[1][0]) > (l_235 , g_48))) , (((safe_mul_func_uint8_t_u_u(((g_230.f0.f0 & 1L) == 0x18E4769F214E0A7ELL), g_192)) , 0L) , 1L)))
    { 
        uint8_t l_259 = 4UL;
        uint64_t l_260 = 0xBC535C641DE24A29LL;
        uint8_t l_298 = 0x49L;
        int32_t l_299 = 0xDCDE23EAL;
        union U1 l_310 = {{0x37L,0xA7L}};
        const int64_t l_345 = 1L;
        int32_t l_385 = 0xDEE8527DL;
        int32_t l_386 = 0L;
        int32_t l_388 = 0x5B72235DL;
        if (((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((g_201 = g_230.f0.f1) > (((g_231[1][0] = ((l_233 = ((g_231[0][0] != (g_192 = ((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((safe_unary_minus_func_uint16_t_u(((l_233 , l_232) != 0L))) ^ g_89) >= g_198[0]) && 0x73C7L), (-7L))), l_259)), l_260)), 4)) | l_235.f0.f1))) >= g_73)) > g_87)) | l_260) | l_260)), 0xC5B9L)), l_260)) || g_198[0]) >= 0UL), g_86[3][0])) > l_261) , g_231[0][0]), g_89)), l_227)), l_260)) != l_259))
        { 
            uint64_t l_267 = 18446744073709551606UL;
            int32_t l_297 = (-1L);
            const int8_t l_317[3][2][3] = {{{4L,(-10L),4L},{0x47L,0x47L,0x47L}},{{4L,(-10L),4L},{0x47L,0x47L,0x47L}},{{4L,(-10L),4L},{0x47L,0x47L,0x47L}}};
            int i, j, k;
            for (g_4 = (-28); (g_4 != (-1)); g_4 = safe_add_func_int16_t_s_s(g_4, 9))
            { 
                const int8_t l_266[1] = {0xD8L};
                int i;
                g_87 = ((((g_230.f0.f1 && 253UL) > (safe_add_func_int16_t_s_s(l_260, g_231[0][0]))) , l_266[0]) & 0x07E3EB81L);
                g_48 ^= 1L;
            }
            l_267 = (-1L);
            if (((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((g_198[0] = ((l_267 , (g_276[0][2][1] | (-5L))) | (((((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_267, 4)), l_235.f0.f0)) < (-1L)) || g_198[0]) == 0x18C3DD0E6EDD9AE8LL) && g_47) >= g_70) , 0x6DL))), g_73)) , g_198[0]), l_267)), l_259)), 0L)) || g_276[0][2][1]))
            { 
                union U2 l_296 = {{-1L,1L}};
                l_299 = (g_4 >= (safe_mod_func_int32_t_s_s(((((((safe_rshift_func_uint16_t_u_u(g_276[0][2][3], 11)) != (safe_rshift_func_uint8_t_u_u((l_298 = ((+(safe_add_func_int16_t_s_s(((g_73 = ((l_297 ^= (safe_add_func_int32_t_s_s((((g_198[0] = (safe_lshift_func_uint8_t_u_u(((l_233 = (g_198[0] > (safe_lshift_func_uint16_t_u_u((l_296 , l_260), 3)))) , 5UL), l_296.f0.f0))) == g_89) || l_233), l_267))) != l_267)) > g_231[1][0]), 0x92BAL))) >= (-9L))), 5))) , 0x5B379E67336551C8LL) == g_230.f0.f1) , 8UL) , l_235.f0.f0), g_230.f0.f1)));
                l_297 = ((g_47 , (0xD3L ^ ((safe_lshift_func_uint8_t_u_s(((0x0D27L >= ((g_87 < (-1L)) , g_231[0][0])) <= g_13[3][0][1].f1), 3)) < g_86[3][0]))) && l_296.f0.f1);
                g_87 = ((((l_261 ^ (g_201 = ((((safe_lshift_func_int8_t_s_s(l_296.f0.f1, ((((safe_mod_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s((l_310 , (((safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((safe_div_func_int32_t_s_s(1L, 0xFF270AC9L)) > g_86[3][0]), g_47)) != 4294967295UL), l_296.f0.f0)) , l_297) , 0xAEL)), (-1L))) || l_317[1][0][2]) != g_86[3][3]) , 65532UL), l_233)) < l_261) , g_48) , l_317[1][0][2]))) , g_198[0]) , 0x5CL) , g_276[0][2][1]))) < 1L) > g_276[0][1][2]) && l_297);
            }
            else
            { 
                int16_t l_328[1];
                int32_t l_332 = 0x73EDB131L;
                int i;
                for (i = 0; i < 1; i++)
                    l_328[i] = 0x8CCEL;
                l_332 |= (g_87 |= (((safe_mod_func_int16_t_s_s(((+(safe_mod_func_uint8_t_u_u((0x01L | (g_201++)), (((!((safe_lshift_func_uint16_t_u_s((((l_299 &= l_328[0]) , (+(l_235.f0.f0 & (safe_rshift_func_int8_t_s_s((l_310.f0.f1 & g_89), l_328[0]))))) < l_297), g_231[0][0])) | 4UL)) && l_310.f1) & l_328[0])))) == l_317[2][0][1]), l_328[0])) <= l_233) <= g_13[3][0][1].f1));
            }
        }
        else
        { 
            int32_t l_333 = 3L;
            int32_t l_346 = 0L;
            int32_t l_367 = 1L;
            l_333 = g_86[0][0];
            if ((((safe_add_func_uint8_t_u_u((g_347 |= (safe_div_func_uint32_t_u_u(4294967294UL, (safe_mod_func_int32_t_s_s(((l_333 = (g_201 = 0xE3L)) , g_73), (safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s((((((g_13[3][0][1].f2 = l_235.f0.f1) <= l_345) < l_227) == g_159) <= l_345))) ^ l_346) || l_299), l_235.f2)), g_4))))))), g_231[0][0])) == g_230.f0.f0) > l_348[0][0][0]))
            { 
                int64_t l_349 = 0L;
                g_87 = ((-1L) == l_349);
                g_87 = (g_70 , (safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s(((!((l_298 != 5L) < g_198[0])) | 4L), 5)) < l_310.f1), 0x510BBF201D482241LL)), l_349)) <= l_348[0][0][0]), 0L)));
            }
            else
            { 
                l_233 ^= 0x39965D86L;
                g_87 = ((safe_mul_func_int16_t_s_s(g_276[0][2][1], (g_73 , g_230.f0.f1))) <= (g_230 , 0xE4L));
            }
            l_333 ^= (safe_lshift_func_uint8_t_u_u(g_201, (g_368 = ((g_198[0] |= ((safe_mul_func_uint8_t_u_u(l_346, (safe_mul_func_uint16_t_u_u(l_367, ((0UL ^ l_346) , 0UL))))) != g_13[3][0][1].f0.f1)) >= g_73))));
        }
        if ((safe_add_func_uint32_t_u_u(l_261, (g_276[0][3][2] , (safe_mod_func_int32_t_s_s(((0xC5E2536EL & (safe_sub_func_int8_t_s_s((g_230.f0.f0 = (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((g_201--), (l_233 = g_89))) || l_310.f0.f1), l_259)), 2L)), 0x5775L))), 0x22L))) , l_235.f0.f1), g_276[0][2][1]))))))
        { 
            return g_230.f0.f1;
        }
        else
        { 
            --g_389;
        }
    }
    else
    { 
        int32_t l_395 = 0x910D2C7DL;
        int32_t l_401 = 0x7A940A50L;
        for (l_232 = 0; (l_232 == 22); l_232 = safe_add_func_int8_t_s_s(l_232, 3))
        { 
            int8_t l_394 = 0L;
            if ((g_87 = ((l_394 ^ (l_227 <= (l_395 = g_276[0][2][1]))) ^ (((g_13[3][0][1].f0.f0 = (~(((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(1UL, l_348[0][0][0])) == l_394), l_401)) < (-9L)) || 4294967295UL))) <= g_276[0][2][1]) & g_347))))
            { 
                if (g_13[3][0][1].f0.f0)
                    break;
            }
            else
            { 
                uint64_t l_402 = 1UL;
                int32_t l_405 = 0x56B6975BL;
                l_402++;
                l_405 = l_387[0];
                g_48 = (safe_lshift_func_int8_t_s_u(7L, (safe_unary_minus_func_uint16_t_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_394 <= ((g_13[3][0][1].f0 , l_402) > 1UL)) , 1L), g_198[0])), g_4))))));
            }
        }
    }
    return l_261;
}



static uint16_t  func_2(uint32_t  p_3)
{ 
    int64_t l_21 = 4L;
    struct S0 l_22 = {-8L,1L};
    uint64_t l_57 = 0xF4B9EFECF47A0CA4LL;
    int32_t l_88 = 0L;
    uint32_t l_141 = 0xBD7A0FECL;
    int8_t l_160[2][5][2] = {{{2L,0x92L},{0x07L,0x22L},{0x92L,0x22L},{0x07L,0x92L},{2L,2L}},{{2L,0x92L},{0x07L,0x22L},{0x92L,0x22L},{0x07L,0x92L},{2L,2L}}};
    union U1 l_163[5][2] = {{{{-1L,0x58L}},{{1L,0x8DL}}},{{{-1L,4L}},{{1L,0xBEL}}},{{{1L,0x8DL}},{{1L,0xBEL}}},{{{-1L,4L}},{{1L,0x8DL}}},{{{-1L,0x58L}},{{-1L,0x58L}}}};
    int32_t l_193 = 0xB307BF79L;
    int32_t l_199 = 0xE3D4A9B1L;
    int32_t l_200 = 0x24418FD7L;
    int i, j, k;
    if (((safe_add_func_int16_t_s_s((func_7((g_13[3][0][1] , func_14(p_3, (safe_sub_func_int8_t_s_s(g_13[3][0][1].f1, p_3)), l_21, l_22)), l_22.f1, l_22.f0, l_57, g_13[3][0][1].f1) ^ l_22.f0), 1L)) , l_57))
    { 
        uint64_t l_90 = 18446744073709551606UL;
        int32_t l_101 = 0xF51ED022L;
        int32_t l_108 = (-7L);
        int8_t l_126 = 1L;
        union U2 l_140 = {{0x1DL,0xAFL}};
        uint16_t l_154[5];
        int64_t l_197 = (-1L);
        int i;
        for (i = 0; i < 5; i++)
            l_154[i] = 0x4FE3L;
lbl_133:
        for (g_70 = 0; (g_70 > 43); g_70 = safe_add_func_int8_t_s_s(g_70, 7))
        { 
            uint8_t l_85[4] = {0x56L,0x56L,0x56L,0x56L};
            int32_t l_99 = 0L;
            int i;
            if ((((safe_lshift_func_int8_t_s_u((l_85[3] = p_3), 3)) <= p_3) ^ (g_13[3][0][1].f1 = (0xA86F217CF0AE9494LL < (l_90--)))))
            { 
                int32_t l_98 = 1L;
                l_99 |= (safe_sub_func_uint8_t_u_u((+(g_70 ^ ((p_3 != (safe_div_func_int32_t_s_s(l_98, (g_13[3][0][1].f0 , l_22.f0)))) , (-8L)))), p_3));
                if (p_3)
                    continue;
            }
            else
            { 
                int32_t l_100 = 0x1BC9EF25L;
                if (l_100)
                    break;
                return p_3;
            }
        }
        if (((l_101 = 0x756AA3FDL) <= ((safe_mod_func_uint32_t_u_u(((l_108 = ((safe_add_func_int32_t_s_s(p_3, (((safe_mul_func_uint16_t_u_u((g_73++), (l_88 = (safe_mod_func_uint64_t_u_u(l_90, ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((l_22.f1 > 249UL), 4)) , 0x1FF0L), 1UL)), 65533UL)) && l_21)))))) , (-4L)) > g_13[3][0][1].f2))) <= g_86[2][3])) , l_22.f1), g_48)) != g_86[3][2])))
        { 
            int32_t l_119 = (-9L);
            int32_t l_131[1];
            int32_t l_132 = 1L;
            int i;
            for (i = 0; i < 1; i++)
                l_131[i] = 1L;
            g_48 = p_3;
            if (((g_73 = (((l_119 <= ((safe_lshift_func_int16_t_s_s((l_132 = (((l_131[0] = ((((((safe_mul_func_int16_t_s_s(p_3, (safe_lshift_func_uint16_t_u_u((((l_126 && (((safe_rshift_func_int16_t_s_u(g_13[3][0][1].f1, l_108)) > 1UL) > 0UL)) < 18446744073709551607UL) && l_22.f1), 1)))) >= p_3) != 0x9F78L) >= p_3) , p_3) != 0x28C20B36L)) && 0x53C8L) > g_86[2][3])), 11)) >= g_86[3][0])) < l_119) < l_101)) == p_3))
            { 
                if (l_119)
                    goto lbl_133;
                l_88 = 0x0DF8BE3DL;
            }
            else
            { 
                int64_t l_142 = (-2L);
                int32_t l_151[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_151[i] = 1L;
                l_142 &= (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_3, 0xCEEFDE0CL)), (((l_140 , l_140.f0.f0) == 2UL) , p_3))), l_141));
                l_151[0] &= (((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((l_88 = (g_89 &= ((safe_mod_func_uint32_t_u_u(p_3, 0x092CE275L)) < l_126))), 7)), (safe_lshift_func_int16_t_s_u(p_3, 6)))) == g_47) < (-5L));
            }
        }
        else
        { 
            l_101 = (safe_div_func_uint64_t_u_u(g_86[2][2], l_154[2]));
            for (l_108 = 2; (l_108 != 2); l_108 = safe_add_func_uint32_t_u_u(l_108, 9))
            { 
                if (l_101)
                    goto lbl_133;
                if (g_70)
                    break;
                if (g_70)
                    goto lbl_133;
            }
        }
        for (l_108 = 0; (l_108 <= 4); l_108 += 1)
        { 
            const uint64_t l_170 = 8UL;
            int32_t l_194 = (-7L);
            int32_t l_195 = 0x690D2E26L;
            int32_t l_196 = 0x2690A631L;
            g_87 = (safe_add_func_uint16_t_u_u(g_87, ((l_140.f0 , g_159) | (l_160[0][0][0] ^= g_4))));
            for (p_3 = 0; (p_3 <= 3); p_3 += 1)
            { 
                int32_t l_189 = 0x2C773C3FL;
                int i, j;
                l_101 &= (safe_sub_func_uint64_t_u_u((((l_163[2][1] , ((safe_add_func_int32_t_s_s(g_86[p_3][p_3], (safe_sub_func_uint64_t_u_u(((((safe_lshift_func_int8_t_s_s(g_86[p_3][p_3], (g_13[3][0][1].f2 || 0L))) && g_70) >= g_13[3][0][1].f0.f0) == 0xE5L), 0x7AA7700A21925695LL)))) <= 65535UL)) | l_170) >= g_86[3][0]), l_160[0][0][0]));
                l_88 ^= ((((safe_mod_func_int8_t_s_s((g_13[3][0][1].f0.f0 = 1L), (safe_add_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((g_89 & ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((((l_189 = l_140.f0.f1) || (g_192 = (safe_lshift_func_int16_t_s_s(g_87, l_163[2][1].f0.f1)))) <= 1L), 4)), l_170)) && g_89), 4294967287UL)) >= g_86[p_3][p_3])), l_170)), p_3)), 14)) ^ l_22.f1) < l_154[1]) && p_3), g_70)) != l_170) , p_3), g_159)))) || l_57) > 0xB03FL) == (-1L));
                if (l_108)
                    break;
            }
            for (g_47 = 1; (g_47 <= 4); g_47 += 1)
            { 
                if (p_3)
                    break;
                --g_201;
            }
            for (l_126 = 0; (l_126 <= 3); l_126 += 1)
            { 
                g_48 ^= (safe_rshift_func_uint16_t_u_s(((l_140 , ((l_154[2] != (((((safe_mod_func_int32_t_s_s(g_86[3][0], ((-2L) ^ g_13[3][0][1].f1))) ^ g_13[3][0][1].f1) , l_163[2][1].f0.f0) == p_3) & l_22.f1)) > 65535UL)) ^ l_195), 12));
            }
        }
    }
    else
    { 
        uint32_t l_216[2][5][2] = {{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}}};
        int32_t l_217 = 0xF37F7A67L;
        int i, j, k;
        l_217 = (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((l_163[2][1].f0 , ((g_192 &= (p_3 <= (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(0x8E68L, g_89)), l_21)))) , l_216[0][3][1])) != p_3), 3)), g_13[3][0][1].f1));
        return p_3;
    }
    for (g_192 = 16; (g_192 >= 60); ++g_192)
    { 
        uint8_t l_220[5][5] = {{0x24L,0xA2L,0x24L,0x24L,0xA2L},{0x80L,0xCDL,0xCDL,0x80L,0xCDL},{0xA2L,0xA2L,1UL,0xA2L,0xA2L},{0xCDL,0x80L,0xCDL,0xCDL,0x80L},{0xA2L,0x24L,0x24L,0xA2L,0x24L}};
        int i, j;
        l_220[0][4]++;
    }
    return p_3;
}



static int64_t  func_7(int8_t  p_8, const int8_t  p_9, uint32_t  p_10, uint32_t  p_11, int32_t  p_12)
{ 
    struct S0 l_65 = {7L,0x7EL};
    const uint32_t l_68[1][3] = {{0UL,0UL,0UL}};
    int32_t l_69 = (-6L);
    int64_t l_80 = 0xAB1ADF13F3F2C75BLL;
    int i, j;
    g_48 = (safe_unary_minus_func_uint64_t_u((safe_add_func_int8_t_s_s((g_70 = (l_69 = (safe_rshift_func_int8_t_s_u((g_13[3][0][1].f0.f0 = (p_8 &= 0xE3L)), (safe_sub_func_int64_t_s_s(0xFE29F19B52D9B6EFLL, ((l_65 , (((safe_add_func_int64_t_s_s(((l_68[0][0] && g_47) <= p_10), p_10)) <= g_48) ^ p_10)) > 0xBF5FL))))))), g_47))));
    l_69 = (safe_mod_func_int32_t_s_s((((((((((((-1L) == 0x6C3AC5B6CC60A975LL) >= (l_69 >= (g_73 , (-4L)))) ^ p_9) > g_47) <= g_13[3][0][1].f1) < 1UL) | g_13[3][0][1].f2) || g_4) <= g_13[3][0][1].f1) ^ g_13[3][0][1].f0.f1), g_13[3][0][1].f0.f1));
    for (l_65.f0 = (-10); (l_65.f0 >= 15); l_65.f0 = safe_add_func_int64_t_s_s(l_65.f0, 9))
    { 
        g_48 = (((safe_mod_func_int16_t_s_s((g_70 >= (1L >= g_4)), (safe_mod_func_int8_t_s_s(((1L <= g_13[3][0][1].f0.f1) < g_13[3][0][1].f0.f0), l_80)))) <= 1L) != g_13[3][0][1].f2);
    }
    return l_68[0][0];
}



static int8_t  func_14(uint64_t  p_15, uint64_t  p_16, int8_t  p_17, struct S0  p_18)
{ 
    int32_t l_44 = 0L;
    int32_t l_45 = (-1L);
    uint64_t l_46 = 0x8F6A1C3D076C56D2LL;
    int8_t l_49[1];
    int i;
    for (i = 0; i < 1; i++)
        l_49[i] = 0xE9L;
    g_48 = (safe_mod_func_uint64_t_u_u(1UL, (+(g_47 = (safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(p_16, 7)), 11)) , ((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((((safe_add_func_int64_t_s_s(g_13[3][0][1].f0.f1, (((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_44, l_44)), l_45)) | 1UL) | l_46))) | g_13[3][0][1].f0.f0) >= g_4), g_13[3][0][1].f2)), 5)) > p_18.f1)), g_13[3][0][1].f2)) <= 0UL), l_45))))));
    for (p_16 = 0; (p_16 <= 0); p_16 += 1)
    { 
        uint32_t l_56 = 18446744073709551615UL;
        g_48 = (safe_rshift_func_int8_t_s_s(((p_18.f1 < ((safe_add_func_uint64_t_u_u((((255UL >= (+((g_13[3][0][1].f0.f1 < ((safe_unary_minus_func_uint16_t_u(0xB333L)) & l_56)) && g_13[3][0][1].f1))) > 0x8C32619CL) != 0x1FL), g_13[3][0][1].f2)) != l_45)) != p_18.f0), 1));
    }
    return l_49[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_13[i][j][k].f0.f0, "g_13[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_13[i][j][k].f0.f1, "g_13[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_13[i][j][k].f1, "g_13[i][j][k].f1", print_hash_value);
                transparent_crc(g_13[i][j][k].f2, "g_13[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_86[i][j], "g_86[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_198[i], "g_198[i]", print_hash_value);

    }
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_230.f0.f0, "g_230.f0.f0", print_hash_value);
    transparent_crc(g_230.f0.f1, "g_230.f0.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_231[i][j], "g_231[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_276[i][j][k], "g_276[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
