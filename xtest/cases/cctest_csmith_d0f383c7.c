// SPDX-License-Identifier: MIT
// cctest_csmith_d0f383c7.c --- cctest case csmith_d0f383c7 (csmith seed 3505619911)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5b136021 */
/* @exp_ticks 0x557a */

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

// Options:   -s 3505619911 -o /tmp/csmith_gen_viw3jgzg/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int16_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint32_t  f0;
   uint16_t  f1;
   const uint16_t  f2;
};
#pragma pack(pop)

union U2 {
   int16_t  f0;
   const int32_t  f1;
   const uint32_t  f2;
};


static int32_t g_6 = (-1L);
static int32_t g_10[1][1] = {{0x0E1B1B55L}};
static int32_t g_11 = 0L;
static int64_t g_19[6] = {(-8L),(-8L),1L,(-8L),(-8L),1L};
static uint8_t g_36 = 0x94L;
static int16_t g_39 = 0x36E9L;
static struct S1 g_71 = {1UL,1UL,0UL};
static int32_t g_82[2][3][5] = {{{1L,(-1L),(-7L),1L,4L},{0L,(-1L),0x129DC063L,0L,4L},{1L,0x129DC063L,0x129DC063L,1L,0x37C3AC0FL}},{{1L,(-1L),(-7L),1L,4L},{0L,(-1L),0x129DC063L,0L,4L},{1L,0x129DC063L,0x129DC063L,1L,0x37C3AC0FL}}};
static int32_t g_88 = 0xB70F5D96L;
static int16_t g_129 = (-1L);
static uint64_t g_141 = 0x4A15197363D2F63BLL;
static uint8_t g_146 = 4UL;
static uint8_t *g_145[5][4][7] = {{{&g_146,&g_146,(void*)0,&g_146,(void*)0,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146}},{{(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146}},{{(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146}},{{(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146}},{{(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146}}};
static uint8_t **g_144 = &g_145[2][0][5];
static const int64_t g_153 = 0x3FF46EBA213425B4LL;
static uint32_t g_162 = 3UL;
static union U2 g_194[1][3] = {{{0x45F1L},{0x45F1L},{0x45F1L}}};
static union U2 *g_193 = &g_194[0][2];
static uint16_t *g_242 = &g_71.f1;
static uint64_t g_313 = 18446744073709551615UL;
static uint32_t g_334 = 18446744073709551615UL;
static int32_t * const g_339 = &g_88;
static uint16_t g_372 = 65529UL;
static struct S1 g_387 = {0x79F667F0L,0xE73AL,1UL};
static struct S0 g_391 = {0L};
static const int64_t **g_414 = (void*)0;
static const int64_t ** const *g_413 = &g_414;
static int32_t *g_416 = &g_10[0][0];
static int64_t *g_429 = &g_19[2];
static int64_t **g_428 = &g_429;
static int64_t g_452 = 0x7C2B5F0CE3B68C28LL;
static int64_t g_456 = 0xCFD41BEF0C2259AFLL;
static uint32_t g_457 = 0x2CE1967CL;
static uint64_t g_498 = 18446744073709551615UL;
static const uint8_t g_566 = 0xC1L;
static int64_t g_663 = (-2L);
static int64_t ** const **g_707 = (void*)0;
static int64_t ** const ***g_706 = &g_707;
static int32_t g_742[6] = {0x088F20CFL,(-1L),0x088F20CFL,0x088F20CFL,(-1L),0x088F20CFL};
static uint16_t g_756[6][1] = {{1UL},{65531UL},{65531UL},{1UL},{65531UL},{65531UL}};
static int64_t g_785 = (-8L);
static uint32_t *g_847[5][3][1] = {{{(void*)0},{(void*)0},{&g_162}},{{&g_162},{&g_162},{(void*)0}},{{(void*)0},{&g_162},{&g_162}},{{&g_162},{(void*)0},{(void*)0}},{{&g_162},{&g_162},{&g_162}}};
static uint32_t **g_846 = &g_847[1][0][0];
static struct S0 *g_881 = (void*)0;
static struct S0 **g_880 = &g_881;
static int32_t *g_930 = &g_10[0][0];
static int8_t g_955 = 0x04L;
static int64_t * const *g_972 = &g_429;
static int64_t * const **g_971 = &g_972;
static uint32_t g_1049[7] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL};
static struct S1 * const *g_1066 = (void*)0;
static struct S1 * const **g_1065 = &g_1066;
static uint64_t *g_1191 = &g_313;
static uint32_t *g_1240 = (void*)0;
static uint32_t **g_1239 = &g_1240;
static union U2 g_1296[7] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
static int8_t g_1301 = 0x6EL;
static uint64_t g_1304 = 0x3C596530AA5EB64CLL;
static int32_t **g_1353 = &g_416;
static int32_t ***g_1352 = &g_1353;
static int32_t ****g_1351[3] = {&g_1352,&g_1352,&g_1352};
static int64_t ***g_1369 = (void*)0;
static struct S1 g_1376 = {1UL,1UL,0UL};
static int32_t ** const *g_1414 = &g_1353;
static int32_t ** const **g_1413 = &g_1414;
static uint64_t *g_1476 = &g_313;
static int64_t ****g_1568 = (void*)0;
static int64_t *****g_1567 = &g_1568;
static const union U2 g_1656 = {0x2F06L};
static const union U2 g_1658 = {2L};
static int8_t *g_1674 = &g_1301;
static int8_t **g_1673 = &g_1674;
static int16_t *g_1770 = &g_194[0][2].f0;
static int16_t **g_1769 = &g_1770;
static int16_t ***g_1768[3][3][3] = {{{&g_1769,&g_1769,&g_1769},{(void*)0,(void*)0,(void*)0},{&g_1769,&g_1769,&g_1769}},{{(void*)0,&g_1769,(void*)0},{&g_1769,(void*)0,&g_1769},{(void*)0,(void*)0,(void*)0}},{{&g_1769,(void*)0,(void*)0},{(void*)0,&g_1769,&g_1769},{&g_1769,&g_1769,&g_1769}}};
static struct S1 g_1928 = {18446744073709551615UL,0x4E49L,65532UL};
static struct S1 *g_1927 = &g_1928;
static int8_t ** const *g_1959[2][2][2] = {{{&g_1673,&g_1673},{&g_1673,&g_1673}},{{&g_1673,&g_1673},{&g_1673,&g_1673}}};
static int8_t ** const **g_1958 = &g_1959[0][0][1];
static int8_t g_2062 = 0x7FL;
static int8_t g_2064 = 0x2CL;
static struct S0 g_2073 = {-2L};
static struct S0 ***g_2101 = &g_880;
static struct S0 ****g_2100 = &g_2101;
static union U2 **g_2115 = &g_193;
static int32_t g_2197 = 0xAD2322F5L;
static uint32_t g_2325[2][2][6] = {{{4294967292UL,1UL,1UL,4294967292UL,4294967289UL,0UL},{0UL,4294967292UL,0xEA4AFD84L,4294967292UL,0UL,0x7FC32161L}},{{4294967292UL,0UL,0x7FC32161L,0x7FC32161L,0UL,4294967292UL},{1UL,4294967292UL,4294967289UL,0UL,4294967289UL,4294967292UL}}};
static int8_t g_2335 = 1L;
static const uint32_t *g_2365 = &g_334;
static const uint32_t * const *g_2364 = &g_2365;
static const int8_t g_2376 = 0xDBL;
static int32_t *** const *g_2421 = &g_1352;
static int32_t *** const **g_2420[1] = {&g_2421};
static struct S1 g_2424 = {0xA824CC9CL,65530UL,0UL};



static struct S1  func_1(void);
static int32_t * func_13(const int64_t  p_14, int8_t  p_15);
static struct S0  func_46(uint16_t  p_47);
static uint16_t  func_51(const int32_t * p_52);
static int32_t  func_53(uint8_t  p_54);
static uint8_t * func_63(int8_t  p_64, struct S1  p_65, const int64_t * p_66, int64_t * p_67, int16_t * p_68);
static const struct S1  func_94(int32_t * p_95, struct S0  p_96, uint64_t  p_97, uint8_t ** p_98);
static int32_t * func_99(uint8_t * p_100, struct S1  p_101, uint32_t  p_102, struct S0  p_103, union U2  p_104);




static struct S1  func_1(void)
{ 
    int32_t *l_9 = &g_10[0][0];
    struct S1 l_12 = {18446744073709551615UL,9UL,0x465CL};
    int8_t **l_2279 = &g_1674;
    uint8_t l_2299 = 0x73L;
    int16_t l_2300 = 5L;
    int32_t l_2301 = 0xC0790F93L;
    union U2 l_2303 = {0xB03FL};
    int64_t *****l_2319 = (void*)0;
    uint32_t l_2320[7];
    int32_t l_2342 = (-7L);
    uint8_t l_2345 = 4UL;
    const int8_t l_2392 = 1L;
    uint16_t **l_2396 = &g_242;
    int8_t l_2419 = 8L;
    uint32_t *l_2434 = &g_162;
    int i;
    for (i = 0; i < 7; i++)
        l_2320[i] = 0UL;
    (*l_9) = (safe_lshift_func_int16_t_s_s(((0x1BABL <= (safe_mul_func_uint16_t_u_u(0xE8F2L, g_6))) , 6L), (safe_div_func_int32_t_s_s((-1L), g_6))));
    for (g_6 = 0; g_6 < 1; g_6 += 1)
    {
        for (g_11 = 0; g_11 < 1; g_11 += 1)
        {
            g_10[g_6][g_11] = (-9L);
        }
    }
    for (g_6 = 0; (g_6 >= 0); g_6 -= 1)
    { 
        return l_12;
    }
    for (g_11 = 0; (g_11 >= 0); g_11 -= 1)
    { 
        uint16_t l_16[5] = {8UL,8UL,8UL,8UL,8UL};
        int32_t l_40[4] = {0x5E3087C3L,0x5E3087C3L,0x5E3087C3L,0x5E3087C3L};
        int32_t *l_2212 = &g_10[0][0];
        int32_t l_2215 = (-9L);
        const union U2 l_2263 = {0x933EL};
        uint64_t l_2315 = 1UL;
        int64_t *****l_2318 = &g_1568;
        uint8_t l_2379 = 0UL;
        int32_t * const *l_2383 = &g_930;
        int32_t * const **l_2382 = &l_2383;
        int32_t * const ***l_2381 = &l_2382;
        int32_t * const ****l_2380 = &l_2381;
        uint16_t **l_2395 = &g_242;
        int i;
        for (l_12.f1 = 0; (l_12.f1 <= 0); l_12.f1 += 1)
        { 
            int64_t *l_17 = (void*)0;
            int64_t *l_18 = &g_19[2];
            int32_t l_34 = 0x60FC5C2FL;
            uint8_t *l_35[7] = {&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36};
            int32_t l_37[1];
            int16_t *l_38[1][4][4] = {{{&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39}}};
            const uint32_t *l_2224 = &g_457;
            int16_t l_2225 = 0L;
            struct S1 l_2227 = {0xA066CB67L,65530UL,0UL};
            int8_t **l_2236 = &g_1674;
            struct S0 **l_2238 = &g_881;
            int8_t l_2242 = 6L;
            uint32_t l_2259 = 18446744073709551608UL;
            int32_t *l_2302 = &g_742[3];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_37[i] = (-1L);
        }
        for (g_785 = 0; (g_785 <= (-11)); --g_785)
        { 
            int16_t l_2343 = 0xB28AL;
            uint32_t l_2358 = 0UL;
            struct S1 l_2363 = {18446744073709551614UL,0x99FFL,0x442BL};
            int32_t *****l_2385 = &g_1351[0];
            int32_t l_2405 = (-1L);
            int16_t ** const *l_2408[4] = {&g_1769,&g_1769,&g_1769,&g_1769};
            int i;
            for (l_2300 = (-30); (l_2300 == 25); l_2300++)
            { 
                int32_t l_2334 = 0L;
                int32_t l_2339 = (-1L);
                int32_t l_2340 = 0x126FFD2FL;
                int32_t l_2341 = (-2L);
                int32_t l_2344 = 5L;
                int32_t * const ****l_2384 = (void*)0;
                union U2 **l_2393 = &g_193;
                struct S0 l_2394 = {0xD37DL};
                uint32_t *l_2414 = &g_2325[0][0][3];
                uint32_t *l_2417[5] = {&g_162,&g_162,&g_162,&g_162,&g_162};
                uint32_t l_2418 = 0x540DF4E5L;
                int i;
            }
            (*g_339) |= (****g_2421);
        }
        if ((*g_416))
            break;
    }
    (*g_416) = (((*g_2115) = (*g_2115)) != ((((*l_2434) |= (((((***g_1414) || (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((**g_1353), ((safe_add_func_int32_t_s_s((*l_9), (0xADBAE2B226853BB1LL <= (((((~(*l_9)) & (safe_div_func_int16_t_s_s((**g_1769), (*l_9)))) & 0x03DDL) | (*l_9)) | (*l_9))))) <= 1L))), 0x81L))) >= (-1L)) || (*l_9)) | 1UL)) != (*l_9)) , &g_1656));
    return l_12;
}



static int32_t * func_13(const int64_t  p_14, int8_t  p_15)
{ 
    int32_t *l_2187 = (void*)0;
    int32_t l_2194 = (-1L);
    uint64_t l_2195[5][7] = {{0xFE82C045BC9DA094LL,0UL,18446744073709551610UL,18446744073709551610UL,0UL,0xFE82C045BC9DA094LL,0UL},{18446744073709551615UL,0xFE82C045BC9DA094LL,0xFE82C045BC9DA094LL,18446744073709551615UL,0UL,18446744073709551615UL,0xFE82C045BC9DA094LL},{0x50329AF886292D70LL,0x50329AF886292D70LL,0xFE82C045BC9DA094LL,18446744073709551610UL,0xFE82C045BC9DA094LL,0x50329AF886292D70LL,0x50329AF886292D70LL},{0x50329AF886292D70LL,0xFE82C045BC9DA094LL,18446744073709551610UL,0xFE82C045BC9DA094LL,0x50329AF886292D70LL,0x50329AF886292D70LL,0xFE82C045BC9DA094LL},{18446744073709551615UL,0UL,18446744073709551615UL,0xFE82C045BC9DA094LL,0xFE82C045BC9DA094LL,18446744073709551615UL,0UL}};
    int32_t *l_2196 = &g_2197;
    struct S1 l_2205 = {18446744073709551615UL,0xC21FL,5UL};
    int i, j;
    (*l_2196) &= (+((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((func_46(g_39) , (((*g_1353) = l_2187) != (((*g_1476) < ((p_15 == ((***g_971) = (safe_rshift_func_int8_t_s_u((**g_1673), 7)))) | (((safe_div_func_int16_t_s_s(((safe_add_func_int64_t_s_s((0x21E987ACL & 0x29A4E533L), (*g_1191))) , 0L), l_2194)) && l_2195[4][5]) & 7L))) , (void*)0))) , (**g_1673)), p_14)), p_15)) , (*g_242)));
    for (g_162 = 9; (g_162 > 17); ++g_162)
    { 
        uint32_t l_2200 = 4294967295UL;
        int32_t ****l_2206 = &g_1352;
        (*g_930) |= ((l_2200 | 0L) >= (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_2205 , (((l_2206 != &g_1352) || (*l_2196)) , (((((safe_lshift_func_int8_t_s_s((+(safe_add_func_int32_t_s_s(((*g_339) = l_2200), p_14))), 5)) ^ 0x442A454FL) || (*g_242)) || p_14) & (-7L)))), 9)), p_15)));
    }
    return (*g_1353);
}



static struct S0  func_46(uint16_t  p_47)
{ 
    int32_t l_761[4][5][4] = {{{0xD8CFF598L,0x225E1A07L,0x014FA3D3L,0x014FA3D3L},{(-2L),(-2L),0xD8CFF598L,0x014FA3D3L},{1L,0x225E1A07L,1L,0xD8CFF598L},{1L,0xD8CFF598L,0xD8CFF598L,1L},{(-2L),0xD8CFF598L,0x014FA3D3L,0xD8CFF598L}},{{0xD8CFF598L,0x225E1A07L,0x014FA3D3L,0x014FA3D3L},{(-2L),(-2L),0xD8CFF598L,0x014FA3D3L},{1L,0x225E1A07L,1L,0xD8CFF598L},{1L,0xD8CFF598L,0xD8CFF598L,1L},{(-2L),0xD8CFF598L,0x014FA3D3L,0xD8CFF598L}},{{0xD8CFF598L,0x225E1A07L,0x014FA3D3L,0x014FA3D3L},{(-2L),(-2L),0xD8CFF598L,0x014FA3D3L},{1L,0x225E1A07L,1L,0xD8CFF598L},{1L,0xD8CFF598L,0xD8CFF598L,1L},{(-2L),0xD8CFF598L,0x014FA3D3L,0xD8CFF598L}},{{0xD8CFF598L,0x225E1A07L,0x014FA3D3L,0x014FA3D3L},{(-2L),(-2L),0xD8CFF598L,0x225E1A07L},{0x014FA3D3L,(-2L),0x014FA3D3L,1L},{0x014FA3D3L,1L,1L,0x014FA3D3L},{0xD8CFF598L,1L,0x225E1A07L,1L}}};
    int8_t l_782 = (-8L);
    int32_t l_806[5][4][6] = {{{(-9L),(-9L),1L,(-9L),(-9L),0x1BA976BFL},{(-9L),(-9L),0x1BA976BFL,0x1BA976BFL,(-9L),(-9L)},{(-3L),(-9L),0x1D4892D6L,(-9L),0x1D4892D6L,(-9L)},{0x1D4892D6L,(-3L),0x1BA976BFL,1L,1L,0x1BA976BFL}},{{0x1D4892D6L,0x1D4892D6L,1L,(-9L),0xC7E43945L,(-9L)},{(-3L),0x1D4892D6L,(-3L),0x1BA976BFL,1L,1L},{(-9L),(-3L),(-3L),(-9L),0x1D4892D6L,(-9L)},{(-9L),(-9L),1L,(-9L),(-9L),0x1BA976BFL}},{{(-9L),(-9L),0x1BA976BFL,0x1BA976BFL,(-9L),(-9L)},{(-3L),(-9L),0x1D4892D6L,(-9L),0x1D4892D6L,(-9L)},{0x1D4892D6L,(-3L),0x1BA976BFL,1L,1L,0x1BA976BFL},{0x1D4892D6L,0x1D4892D6L,1L,(-9L),0xC7E43945L,(-9L)}},{{(-3L),0x1D4892D6L,(-3L),0x1BA976BFL,1L,1L},{(-9L),(-3L),(-3L),(-9L),0x1D4892D6L,(-9L)},{(-9L),(-9L),1L,(-9L),(-9L),0x1BA976BFL},{(-9L),(-9L),0x1BA976BFL,0x1BA976BFL,(-9L),(-9L)}},{{(-3L),(-9L),0x1D4892D6L,(-9L),0x1D4892D6L,(-9L)},{0x1D4892D6L,(-3L),0x1BA976BFL,1L,1L,0x1BA976BFL},{0x1D4892D6L,0x1D4892D6L,1L,(-9L),0xC7E43945L,(-9L)},{(-3L),0x1D4892D6L,(-3L),0x1BA976BFL,1L,1L}}};
    int64_t l_829 = 0xD81153C77C0735F1LL;
    struct S0 l_855 = {0xD7EFL};
    uint8_t **l_856[6][2];
    uint16_t l_909 = 1UL;
    uint32_t *l_918 = &g_334;
    uint32_t ** const l_917 = &l_918;
    uint64_t l_956 = 18446744073709551615UL;
    int32_t l_979 = 0xB5386794L;
    int64_t **l_1002 = &g_429;
    int64_t l_1032 = 0xDC0D2C207ED0CE13LL;
    uint32_t l_1038 = 0x907EF42CL;
    uint8_t l_1051 = 0xCAL;
    int64_t l_1064 = 0x384BA8076E0EED95LL;
    uint64_t l_1072 = 0x98945E58CD68526BLL;
    int32_t ** const l_1092[7][4] = {{&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930}};
    uint16_t **l_1120 = &g_242;
    uint16_t ***l_1119 = &l_1120;
    struct S1 l_1127 = {9UL,0x161FL,1UL};
    uint16_t l_1160 = 9UL;
    int8_t l_1196 = (-1L);
    int16_t *l_1233 = &g_39;
    int16_t **l_1232 = &l_1233;
    union U2 **l_1253 = &g_193;
    const struct S1 *l_1274 = (void*)0;
    const struct S1 **l_1273[7] = {&l_1274,&l_1274,&l_1274,&l_1274,&l_1274,&l_1274,&l_1274};
    int32_t l_1318[6][2][6] = {{{0xE5132828L,1L,(-2L),(-2L),1L,0xE5132828L},{(-2L),1L,0xE5132828L,4L,(-1L),2L}},{{2L,0L,4L,0L,2L,1L},{2L,(-2L),0L,4L,0L,2L}},{{(-1L),(-1L),(-1L),(-1L),1L,2L},{4L,2L,(-1L),(-2L),0L,(-2L)}},{{1L,4L,1L,0L,0L,0xE5132828L},{(-1L),2L,4L,1L,1L,4L}},{{(-1L),(-1L),(-1L),1L,2L,0L},{(-1L),(-1L),0xE5132828L,0L,0xE5132828L,(-1L)}},{{1L,(-1L),0xE5132828L,(-2L),(-1L),0L},{4L,(-2L),(-1L),(-1L),(-2L),4L}}};
    int64_t l_1345 = (-1L);
    uint64_t **l_1365[3][7] = {{&g_1191,&g_1191,(void*)0,&g_1191,&g_1191,(void*)0,&g_1191},{&g_1191,(void*)0,(void*)0,&g_1191,(void*)0,(void*)0,&g_1191},{(void*)0,&g_1191,(void*)0,(void*)0,&g_1191,(void*)0,(void*)0}};
    uint64_t ***l_1364[4][5][4] = {{{&l_1365[2][6],&l_1365[2][3],&l_1365[2][3],&l_1365[0][0]},{&l_1365[2][3],&l_1365[2][4],&l_1365[2][4],&l_1365[2][3]},{&l_1365[1][4],(void*)0,&l_1365[1][5],&l_1365[2][3]},{&l_1365[2][3],&l_1365[2][3],(void*)0,&l_1365[2][3]},{&l_1365[0][0],&l_1365[0][0],&l_1365[1][6],&l_1365[2][3]}},{{&l_1365[2][4],&l_1365[2][3],&l_1365[2][3],&l_1365[2][3]},{(void*)0,(void*)0,&l_1365[0][5],&l_1365[2][3]},{&l_1365[2][3],&l_1365[2][4],&l_1365[2][3],&l_1365[0][0]},{&l_1365[2][3],&l_1365[2][3],&l_1365[0][0],&l_1365[1][4]},{(void*)0,&l_1365[0][0],&l_1365[1][6],(void*)0}},{{(void*)0,(void*)0,&l_1365[1][6],&l_1365[2][3]},{&l_1365[2][3],&l_1365[2][3],&l_1365[2][3],&l_1365[1][0]},{&l_1365[2][3],&l_1365[0][0],&l_1365[2][3],&l_1365[2][6]},{&l_1365[2][6],&l_1365[2][3],&l_1365[2][4],&l_1365[0][0]},{&l_1365[2][0],(void*)0,&l_1365[2][4],&l_1365[2][0]}},{{&l_1365[2][6],(void*)0,&l_1365[2][3],&l_1365[0][0]},{&l_1365[2][3],&l_1365[2][4],&l_1365[2][3],&l_1365[2][3]},{&l_1365[2][3],&l_1365[2][3],&l_1365[1][6],&l_1365[0][0]},{(void*)0,&l_1365[2][3],&l_1365[1][6],&l_1365[0][0]},{(void*)0,&l_1365[1][0],&l_1365[0][0],&l_1365[2][3]}}};
    uint64_t l_1398 = 0UL;
    uint64_t l_1427[2];
    int32_t l_1433 = 0x795E62A2L;
    int8_t l_1447 = 0xF2L;
    int16_t *l_1450 = &g_194[0][2].f0;
    int16_t *l_1467[2];
    int32_t *****l_1537 = &g_1351[1];
    uint64_t l_1541 = 0x7CF00A2F4DE01567LL;
    int16_t l_1562 = 0xD279L;
    struct S0 **l_1580 = &g_881;
    int32_t *l_1607[6];
    int32_t **l_1606 = &l_1607[0];
    int32_t l_1616 = 0xD9CBBFB2L;
    int8_t l_1759[5][6] = {{0L,0L,(-1L),(-1L),0L,0L},{5L,0L,1L,0L,1L,0L},{1L,5L,(-1L),0x89L,0x89L,(-1L)},{1L,1L,0x89L,0L,0L,0L},{5L,1L,5L,(-1L),0x89L,0x89L}};
    uint32_t **l_1760 = &g_847[1][0][0];
    uint64_t l_1761 = 18446744073709551610UL;
    int16_t ***l_1771[6] = {&l_1232,&l_1232,&l_1232,&l_1232,&l_1232,&l_1232};
    int32_t l_1808 = 0x72FD607EL;
    uint32_t l_1823[3];
    int16_t l_1829 = (-1L);
    uint64_t l_1870 = 18446744073709551615UL;
    const int8_t * const l_1887 = &l_1759[3][1];
    const int8_t * const *l_1886 = &l_1887;
    const int8_t * const **l_1885 = &l_1886;
    uint16_t l_2034 = 0x2550L;
    uint32_t l_2089 = 7UL;
    struct S0 * const * const **l_2103 = (void*)0;
    int32_t l_2164[4] = {3L,3L,3L,3L};
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_856[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
        l_1427[i] = 0x5D0489BB5597A854LL;
    for (i = 0; i < 2; i++)
        l_1467[i] = &g_1296[6].f0;
    for (i = 0; i < 6; i++)
        l_1607[i] = &g_82[1][1][4];
    for (i = 0; i < 3; i++)
        l_1823[i] = 8UL;
    if (g_6)
    { 
        int32_t l_50 = 0x27429123L;
        uint16_t *l_755 = &g_756[1][0];
        int32_t l_807 = 1L;
        int32_t l_808 = 0x302E0A22L;
        int32_t l_811 = 0L;
        int32_t l_812 = 0xEFA1713FL;
        int32_t l_813 = 0x5E33D5FAL;
        int32_t l_814 = 1L;
        int32_t l_816 = 0x47DE33BEL;
        int32_t l_817 = 0L;
        int32_t l_818 = 0x0140949DL;
        int32_t l_819 = 1L;
        int32_t l_821 = 3L;
        int32_t l_826 = (-1L);
        int32_t l_830[4];
        struct S1 l_857 = {0x31AE04ADL,65534UL,0x936DL};
        struct S0 l_858 = {-4L};
        union U2 l_859[7][7] = {{{0x3C63L},{0xCBF4L},{0xC649L},{0xD098L},{0xD098L},{0xC649L},{0xCBF4L}},{{6L},{-2L},{0L},{0xD098L},{-8L},{0L},{0xCBF4L}},{{1L},{0xCBF4L},{0L},{-8L},{0xD098L},{0L},{-2L}},{{6L},{0xCBF4L},{0xC649L},{0xD098L},{0xD098L},{0xC649L},{0xCBF4L}},{{6L},{-2L},{0L},{0xD098L},{-8L},{0L},{0xCBF4L}},{{1L},{0xCBF4L},{0L},{-8L},{0xD098L},{0L},{-2L}},{{6L},{0xCBF4L},{0xC649L},{0xD098L},{0xD098L},{0xC649L},{0xCBF4L}}};
        struct S0 *l_879[1][5][4];
        struct S0 **l_878 = &l_879[0][3][3];
        int16_t l_923 = 0L;
        int8_t *l_926[6][2];
        int32_t *l_939 = &l_830[1];
        int32_t *l_940 = &l_806[4][3][4];
        int32_t *l_941[7][2][7] = {{{&g_742[4],&g_10[0][0],(void*)0,&l_806[3][3][0],&l_806[3][3][0],(void*)0,&g_10[0][0]},{&g_88,&l_806[3][1][4],&l_814,&l_814,&l_50,(void*)0,(void*)0}},{{(void*)0,&g_742[1],&g_742[1],&g_10[0][0],&g_742[1],&g_742[1],(void*)0},{(void*)0,(void*)0,&l_50,&l_814,&l_814,&l_806[3][1][4],&g_88}},{{&g_10[0][0],(void*)0,&l_806[3][3][0],&l_806[3][3][0],(void*)0,&g_10[0][0],&g_742[4]},{&l_811,&l_826,&l_50,(void*)0,&l_830[0],&l_814,&l_814}},{{&l_830[3],&l_826,&g_742[1],&l_826,&l_830[3],&l_811,&g_742[1]},{&g_10[0][0],&l_826,&l_814,(void*)0,&l_814,&l_811,&l_814}},{{&g_10[0][0],(void*)0,(void*)0,&g_10[0][0],&l_826,&l_830[1],(void*)0},{&g_10[0][0],(void*)0,&l_830[0],(void*)0,&g_88,&g_88,(void*)0}},{{&l_830[3],&g_742[1],&l_830[3],&l_830[1],&g_10[0][0],&l_806[3][3][0],(void*)0},{&l_811,&l_806[3][1][4],&l_814,&l_830[0],(void*)0,&l_830[0],&l_814}},{{&g_10[0][0],&g_10[0][0],&l_826,&g_742[4],&l_817,&l_806[3][3][0],&g_742[1]},{(void*)0,&l_814,&g_88,&l_826,&l_826,&g_88,&l_814}}};
        uint32_t l_942 = 0xE7575CA6L;
        int64_t ***l_975 = (void*)0;
        int8_t l_1011[4];
        uint64_t l_1012 = 0xAEBA0B7D7D0FF164LL;
        int8_t l_1031[7][7] = {{(-6L),(-6L),0x3EL,0L,(-3L),0x3EL,(-3L)},{0L,(-10L),(-10L),0L,1L,0L,0L},{0L,(-3L),1L,1L,(-3L),0L,(-10L)},{(-3L),0L,0x3EL,(-6L),(-6L),0x3EL,0L},{(-3L),(-10L),0L,(-3L),1L,1L,(-3L)},{0L,0L,0L,1L,0L,(-10L),(-10L)},{0L,(-3L),0x3EL,1L,(-10L),(-6L),0L}};
        int16_t *l_1069 = &g_129;
        uint32_t *l_1088 = (void*)0;
        uint32_t *l_1089 = &g_162;
        struct S1 *l_1099 = (void*)0;
        struct S1 **l_1098 = &l_1099;
        struct S1 l_1137 = {18446744073709551615UL,1UL,0x285DL};
        uint32_t l_1142 = 0x6D566AE0L;
        uint64_t l_1205 = 0UL;
        int64_t l_1256[7] = {0x7D81C2876BC17E0DLL,0x7D81C2876BC17E0DLL,0x7D81C2876BC17E0DLL,0x7D81C2876BC17E0DLL,0x7D81C2876BC17E0DLL,0x7D81C2876BC17E0DLL,0x7D81C2876BC17E0DLL};
        union U2 *l_1295 = &g_1296[6];
        int32_t **l_1299 = &l_940;
        int32_t ***l_1298 = &l_1299;
        int8_t l_1381 = 0x42L;
        int64_t l_1425 = 0x03A02E3DDC60630ALL;
        uint8_t l_1426 = 1UL;
        int32_t l_1432 = 0x560C7F36L;
        int8_t l_1434[3];
        int64_t l_1435[5][1][5] = {{{0xD86FA524FC8DF6FELL,9L,0xD86FA524FC8DF6FELL,8L,0x92A95639094E9319LL}},{{0xBDE7974B4AE5CA7ALL,0L,0L,0xBDE7974B4AE5CA7ALL,0L}},{{0x92A95639094E9319LL,9L,0xABE9BD9E3C964613LL,9L,0x92A95639094E9319LL}},{{0L,0xBDE7974B4AE5CA7ALL,0L,0L,0xBDE7974B4AE5CA7ALL}},{{0x92A95639094E9319LL,8L,0xD86FA524FC8DF6FELL,9L,0xD86FA524FC8DF6FELL}}};
        int32_t l_1436 = (-1L);
        uint16_t l_1437 = 0x1CA6L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_830[i] = (-1L);
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 4; k++)
                    l_879[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_926[i][j] = (void*)0;
        }
        for (i = 0; i < 4; i++)
            l_1011[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_1434[i] = 0x5EL;
    }
    else
    { 
        union U2 *l_1440 = &g_1296[6];
        (*l_1253) = l_1440;
    }
    if ((safe_sub_func_int16_t_s_s(((**l_1232) ^= 0xB438L), ((safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((p_47 != l_1447), ((0UL < (safe_rshift_func_int16_t_s_s(((*l_1450) = g_387.f2), (&l_1002 == &l_1002)))) , g_1304))), 0L)) , g_742[5]))))
    { 
        int64_t l_1453[4] = {0x9B6242D0D1DD535BLL,0x9B6242D0D1DD535BLL,0x9B6242D0D1DD535BLL,0x9B6242D0D1DD535BLL};
        struct S0 l_1482 = {1L};
        int32_t l_1498[7];
        int64_t **l_1510 = (void*)0;
        int64_t *****l_1569 = &g_1568;
        struct S0 **l_1582[3];
        int32_t *l_1596 = (void*)0;
        int32_t **l_1608 = &l_1607[2];
        const int64_t *l_1648 = (void*)0;
        const int64_t * const *l_1647 = &l_1648;
        struct S1 l_1694 = {0x0C18F6DAL,65529UL,0x0FB0L};
        union U2 l_1722[4][5][4] = {{{{-4L},{0x5094L},{0x50E5L},{1L}},{{0L},{0x8987L},{0L},{0L}},{{0x8987L},{0x9B1FL},{-9L},{0xA161L}},{{0xA161L},{0x373AL},{0xFA6CL},{0x9B1FL}},{{0xB9A4L},{-4L},{0xFA6CL},{0xB9A4L}}},{{{0xA161L},{0L},{-9L},{0x4047L}},{{0x8987L},{0x14DBL},{0L},{0x5509L}},{{0L},{0x5509L},{0x50E5L},{3L}},{{-4L},{0L},{-6L},{0x4047L}},{{1L},{0L},{3L},{-9L}}},{{{0x373AL},{-4L},{0x10D0L},{0x10D0L}},{{1L},{1L},{0x4914L},{0xA161L}},{{1L},{0x10D0L},{0x373AL},{0L}},{{0xFA6CL},{0x8987L},{0x50E5L},{0x373AL}},{{0x4047L},{0x8987L},{-9L},{0L}}},{{{0x8987L},{0x10D0L},{0L},{0xA161L}},{{0xA7BEL},{1L},{0xFA6CL},{0x10D0L}},{{-9L},{-4L},{0x445EL},{-9L}},{{0xA161L},{0L},{0L},{0x4047L}},{{0x5094L},{0L},{0L},{3L}}}};
        uint16_t l_1780 = 65530UL;
        int8_t **l_1783 = &g_1674;
        uint8_t *l_1809 = &l_1051;
        const struct S0 **l_1817 = (void*)0;
        uint8_t l_1832[5] = {0x39L,0x39L,0x39L,0x39L,0x39L};
        int32_t *****l_1995 = &g_1351[1];
        uint32_t l_1996 = 0x6DEAED54L;
        const uint16_t *l_2006 = (void*)0;
        int16_t l_2037 = (-2L);
        int64_t l_2046 = 4L;
        uint8_t l_2053 = 0x36L;
        int32_t *l_2087 = &g_82[1][1][4];
        union U2 **l_2111 = (void*)0;
        int8_t l_2125 = 4L;
        struct S0 l_2183 = {0x13E8L};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1498[i] = 1L;
        for (i = 0; i < 3; i++)
            l_1582[i] = &g_881;
lbl_1570:
        for (l_956 = 25; (l_956 <= 46); l_956++)
        { 
            uint32_t l_1454 = 18446744073709551615UL;
            uint64_t *l_1474 = &g_1304;
            int32_t l_1499 = 0L;
            uint32_t l_1518[4] = {0x10178029L,0x10178029L,0x10178029L,0x10178029L};
            int32_t *****l_1535 = &g_1351[1];
            int32_t l_1551 = 6L;
            int32_t l_1555 = 1L;
            int32_t l_1556[1];
            int16_t l_1558 = (-7L);
            int i;
            for (i = 0; i < 1; i++)
                l_1556[i] = (-10L);
            if ((((l_1453[2] == ((((((l_1454 || ((-5L) ^ (safe_sub_func_int64_t_s_s(p_47, (*g_1191))))) ^ (((*l_1450) = ((!(safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(p_47, (+(1L & p_47)))), (*g_242))), l_1454)), 0x24B0L))) && (**g_1353))) , 0x07L)) && l_1453[2]) < l_1454) , 0xC386FD92L) == 4L)) , l_1467[1]) == (*l_1232)))
            { 
                uint64_t *l_1475 = &g_313;
                int32_t l_1477 = (-7L);
                uint32_t *l_1478 = &g_162;
                int32_t l_1481 = (-4L);
                struct S0 ***l_1540[6][2] = {{&g_880,&g_880},{&g_880,(void*)0},{&g_880,&g_880},{(void*)0,&g_880},{&g_880,(void*)0},{&g_880,&g_880}};
                int i, j;
                if (p_47)
                    break;
                if ((((~(4294967290UL || ((safe_rshift_func_int16_t_s_s((p_47 == ((*l_1478) = (safe_mod_func_int16_t_s_s((l_1477 = ((*l_1233) = (+(l_1474 == (g_1476 = (g_1191 = l_1475)))))), l_1454)))), (safe_sub_func_int64_t_s_s((**g_972), (p_47 > 1L))))) < l_1481))) > p_47) , 0x8E6414D2L))
                { 
                    (*g_339) &= p_47;
                }
                else
                { 
                    return l_1482;
                }
                l_1499 &= (((l_1498[0] ^= ((safe_sub_func_int16_t_s_s((-8L), ((safe_unary_minus_func_int16_t_s(((*g_193) , l_1481))) > (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((--(***l_1119)) >= (safe_sub_func_uint16_t_u_u(l_1477, ((safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u(65528UL, (((l_1453[0] && 0xBCACL) , (-1L)) != l_1481))) < 65535UL) < l_1482.f0), l_1454)) >= p_47)))), g_955)), (***g_1352)))))) <= p_47)) == 1L) && 2L);
                if (l_1481)
                    goto lbl_1570;
                for (l_1196 = 0; (l_1196 <= 18); l_1196++)
                { 
                    int64_t **l_1511 = &g_429;
                    uint16_t *l_1516 = (void*)0;
                    uint16_t *l_1517 = &g_387.f1;
                    const int32_t l_1519 = (-10L);
                    struct S0 *l_1534[1][7][1] = {{{&g_391},{&g_391},{&g_391},{&g_391},{&g_391},{&g_391},{&g_391}}};
                    struct S0 ** const l_1533 = &l_1534[0][5][0];
                    struct S0 ** const *l_1532 = &l_1533;
                    struct S0 ** const **l_1531 = &l_1532;
                    int32_t *****l_1536 = &g_1351[1];
                    struct S0 ***l_1538 = &g_880;
                    struct S0 ****l_1539[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1539[i] = &l_1538;
                    l_1481 = (p_47 > ((((&l_1092[2][2] != (void*)0) ^ (safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u(((((safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int16_t_s(((safe_mod_func_uint32_t_u_u((l_1510 != (l_1511 = (void*)0)), ((safe_div_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(p_47, (((*l_1517) &= (((void*)0 != (**g_971)) != (*g_242))) , l_1518[0]))) && p_47), l_1519)) , p_47))) >= 0xCBL))))) < p_47) > 0x4C2AL) , 0x53B2BD81FBCACE17LL), p_47)) , p_47), 4294967287UL))) & p_47) || p_47));
                    (*g_416) = (~g_456);
                    (****g_1413) = (l_1498[0] ^= l_1482.f0);
                    if (p_47)
                        break;
                    (*g_339) &= (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_47, (safe_lshift_func_int8_t_s_u(((((*l_1474) = (*g_1191)) > (((*l_1233) = g_10[0][0]) > (safe_div_func_uint16_t_u_u(((l_1541 = (safe_rshift_func_uint8_t_u_u(((((*l_1531) = &g_880) != (l_1540[4][0] = (((l_1535 == (l_1537 = l_1536)) > (((((l_1498[0] &= ((&g_372 != &p_47) , 0UL)) | l_1453[2]) & 0xD25CL) == p_47) , (*****l_1535))) , l_1538))) && (*****l_1536)), l_1481))) == 0xFFL), l_1453[2])))) <= p_47), (*****l_1535))))), p_47));
                }
                (*****l_1535) &= l_1453[2];
            }
            else
            { 
                uint16_t l_1542 = 65535UL;
                int32_t *l_1547 = (void*)0;
                int32_t **l_1546 = &l_1547;
                int32_t l_1552 = 0x2A3C97AEL;
                int32_t l_1553 = 0xBF634741L;
                int32_t l_1554 = (-1L);
                int32_t l_1557[1][3][2] = {{{0x92867F5BL,0x92867F5BL},{0x92867F5BL,0x92867F5BL},{0x92867F5BL,0x92867F5BL}}};
                uint8_t l_1559[2][6][5] = {{{0xF9L,0UL,255UL,0UL,0xF9L},{0xB6L,0x8DL,0x09L,251UL,0x09L},{0x9DL,0x9DL,255UL,0xF9L,0xB6L},{0x0CL,0xA6L,0xB6L,0x8DL,0x09L},{0UL,0xF9L,0x22L,0x22L,0xF9L},{0x09L,0xA6L,0xA4L,0x0BL,0xC5L}},{{0x9DL,0x9DL,0x9DL,0x22L,255UL},{246UL,0xA6L,0x09L,0xA6L,0xA4L},{0xF9L,0x9DL,0xB6L,0x22L,0xB6L},{0x27L,0x9EL,0x09L,0x55L,0x0CL},{0x9DL,0xF9L,0xF9L,0x9DL,0xB6L},{0xB6L,0x55L,0xC5L,0x0BL,0xA4L}}};
                int64_t ****l_1566 = &g_1369;
                int64_t *****l_1565[1][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1565[i][j] = &l_1566;
                }
                ++l_1542;
                (*****l_1537) = ((((!p_47) > (*g_1191)) == (((&l_761[0][4][2] != ((*l_1546) = (void*)0)) >= ((((~((*g_242) &= p_47)) || (*****l_1537)) & (*****l_1535)) >= p_47)) | (*****l_1537))) || l_1542);
                if ((*****l_1535))
                    break;
                l_1498[4] |= ((((safe_div_func_int16_t_s_s(g_141, ((l_1551 <= (l_1559[0][1][4]++)) , (*****l_1535)))) , ((0xED74L < ((**l_1120) = (l_1562 != ((((safe_lshift_func_uint8_t_u_s(((g_1567 = l_1565[0][0]) == l_1569), 3)) , p_47) > 0x3E5A1F0907C7CDA6LL) >= (*****l_1535))))) > 0x6AL)) && (*g_416)) ^ l_1554);
            }
            if (p_47)
                continue;
            if (l_1482.f0)
                continue;
        }
        for (l_909 = 0; (l_909 == 33); l_909++)
        { 
            int32_t *****l_1575 = &g_1351[1];
            struct S0 ***l_1581 = &g_880;
            struct S0 ***l_1583 = &l_1582[1];
            struct S1 l_1639 = {7UL,2UL,9UL};
            const union U2 *l_1657 = &g_1658;
            union U2 *l_1672 = &g_194[0][2];
            uint32_t l_1697 = 18446744073709551614UL;
            const uint64_t *l_1758 = &l_1427[1];
            const uint64_t **l_1757[4][1] = {{&l_1758},{(void*)0},{&l_1758},{(void*)0}};
            uint32_t l_1762 = 7UL;
            int32_t l_1763 = 0x75088F51L;
            int i, j;
        }
        (**g_1353) |= l_1453[2];
        (*g_416) ^= (((((((&l_1232 == (l_1771[3] = g_1768[0][2][1])) == ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(1UL, (((0xED7ADF02L || 0x71A90A72L) < ((safe_div_func_uint64_t_u_u(1UL, ((safe_add_func_uint16_t_u_u((*g_242), 0x6718L)) && 0x46E0L))) , p_47)) < 0xEA65C4FB4258EB17LL))) <= (*g_1674)), p_47)) < l_1780)) == (**g_1673)) >= 0x029B5645L) || p_47) ^ (*g_1674)) != 0L);
        if ((((((*l_1233) |= (safe_rshift_func_uint16_t_u_u((l_1783 == l_1783), 3))) || (safe_rshift_func_int16_t_s_u(p_47, 14))) , (((*g_1191) |= (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((((**g_972) ^ (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(((*g_1674) = ((safe_mul_func_uint8_t_u_u(255UL, ((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((((safe_div_func_uint16_t_u_u((p_47 >= l_1808), 0x12DBL)) ^ 0x7D06L) | (-1L)) ^ 0x3D8BL) ^ p_47), (-7L))) <= p_47), (-7L))), 5)) >= p_47))) , 0x79L)), 3)), 1))) | p_47), 2)), p_47)), p_47)), p_47))) & 9L)) > (-9L)))
        { 
            const struct S0 ***l_1818 = &l_1817;
            const struct S0 *l_1821 = (void*)0;
            const struct S0 **l_1820 = &l_1821;
            const struct S0 ***l_1819 = &l_1820;
            int64_t *l_1822 = (void*)0;
            int32_t l_1831 = (-5L);
            int32_t *l_1861 = &l_1318[5][1][4];
            union U2 l_1906 = {1L};
            int32_t l_1909 = 6L;
            int64_t l_1910 = 0L;
            (**g_1352) = func_99(l_1809, l_1694, ((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u((!((safe_add_func_uint32_t_u_u((&g_881 != ((*l_1819) = ((*l_1818) = l_1817))), (((void*)0 == l_1822) != (((((**g_1352) = func_99(l_1809, l_1694, p_47, g_391, l_1722[3][3][0])) != (void*)0) | p_47) < l_1823[2])))) < (*g_930))), (*g_1674))) > (-10L)), (*g_1770))) || (***g_1352)), l_855, (*g_193));
            if (((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(p_47, 0UL)), p_47)) || (*g_1674)))
            { 
                int8_t l_1828 = 0x68L;
                int32_t l_1830 = 0xAAE0EA7FL;
                uint32_t l_1852 = 0x9A95714BL;
                const int8_t * const ***l_1888 = &l_1885;
                ++l_1832[1];
                (*g_1353) = (****l_1537);
                if ((p_47 != (((((*g_1674) && (safe_add_func_int8_t_s_s(((p_47 ^ (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((l_1830 ^= (((((safe_mul_func_uint8_t_u_u(p_47, (safe_mod_func_int64_t_s_s((&g_193 == ((~(safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((((*g_1191)++) | (&g_1769 != &g_1769)) & l_1831), l_1852)), p_47))) , (void*)0)), (*****l_1537))))) , (*g_242)) < (*g_242)) > 0x38B5F5638EF33003LL) < 65531UL)), 6UL)), (**g_1353)))) , p_47), 0x46L))) , p_47) != (-10L)) <= 0x8B4D09EBL)))
                { 
                    (*g_930) = 0x5D153694L;
                }
                else
                { 
                    (***g_1414) ^= (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((&g_881 == ((*l_1818) = l_1817)) != 18446744073709551615UL) < ((((((safe_add_func_int16_t_s_s((l_1861 == (*l_1608)), ((((((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((*g_1770) , (safe_unary_minus_func_uint16_t_u(((!((**l_1783) = 0xE0L)) == 0x01L)))) > p_47), 5)), p_47)), p_47)) <= p_47) == 0L) <= l_1832[1]) || p_47) || 8UL))) , l_1830) , (**g_428)) & (**g_428)) && l_1831) >= l_1852)), 0L)), l_1870));
                }
                l_1830 = ((safe_rshift_func_int16_t_s_s((*g_1770), 14)) ^ ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((-7L), (safe_div_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(p_47, (safe_mod_func_int64_t_s_s((&g_1673 == ((*l_1888) = l_1885)), p_47)))) && ((*****l_1537) |= 5L)), (*g_1674))) <= (*g_1476)), p_47)))), l_1852)) && p_47));
                (*g_930) = 1L;
            }
            else
            { 
                uint32_t l_1905 = 6UL;
                uint8_t ***l_1908 = (void*)0;
                int32_t l_1911 = (-1L);
                for (l_1032 = 12; (l_1032 == (-8)); l_1032 = safe_sub_func_uint16_t_u_u(l_1032, 9))
                { 
                    uint64_t l_1895 = 0UL;
                    struct S0 l_1907 = {2L};
                    (*****l_1537) &= (p_47 | (safe_lshift_func_uint8_t_u_s(((*g_1770) == (((*g_1239) == (*g_1239)) & (((**l_1232) ^= 0x89ACL) >= p_47))), p_47)));
                    l_1895 = p_47;
                    (**g_1353) &= (safe_mod_func_int64_t_s_s(((((p_47 , (safe_mod_func_uint16_t_u_u((!(l_1909 = ((*g_429) && (safe_rshift_func_uint16_t_u_s((l_1905 == (l_1831 = (l_1906 , (((&l_856[1][1] != (l_1907 , l_1908)) & 0xE9L) != 0x18C6BBF6L)))), l_1895))))), (**g_1769)))) >= l_1895) & p_47) , l_1905), p_47));
                    l_1911 ^= (((l_1831 | ((((*****l_1537) , (-1L)) > ((g_391 , 0xE00399D4L) <= l_1910)) == ((*g_242) = (g_71.f2 , p_47)))) && (**g_428)) && p_47);
                    (*g_930) ^= ((safe_lshift_func_int8_t_s_s(((**l_1783) = ((p_47 <= (*g_1770)) == (safe_rshift_func_int16_t_s_u((l_1911 = 0xC08BL), 12)))), (safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s(l_1895, l_1895)) < (0L <= (l_1907.f0 && 0UL))), 0x0006L)))) >= (-8L));
                }
                for (l_1160 = 0; (l_1160 >= 6); l_1160 = safe_add_func_uint32_t_u_u(l_1160, 1))
                { 
                    uint64_t l_1922 = 1UL;
                    l_1922--;
                    (*l_1253) = &l_1906;
                }
            }
            g_1927 = ((safe_rshift_func_uint16_t_u_u(0x202BL, (0x5CAAL <= p_47))) , &l_1694);
            (**g_1353) &= (-10L);
        }
        else
        { 
            int32_t l_1935 = 0x7BB756A9L;
            int32_t l_1966 = 0L;
            int32_t l_1967 = 0x179B1000L;
            struct S0 l_1975 = {-1L};
            union U2 l_1989 = {0x43C7L};
            int32_t l_2013 = 0L;
            int32_t l_2014 = 1L;
            int32_t l_2016 = 0x6D93F2D2L;
            int32_t l_2018 = 2L;
            int32_t l_2022 = (-1L);
            int32_t l_2024 = 0L;
            int32_t l_2026 = 0L;
            int32_t l_2029 = 0xF389892BL;
            int32_t l_2030[3];
            int64_t l_2080 = (-1L);
            struct S0 *****l_2102[7] = {&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100};
            struct S0 * const * const ***l_2104 = &l_2103;
            uint16_t ***l_2130 = &l_1120;
            uint8_t *l_2139 = &g_146;
            uint16_t l_2180 = 9UL;
            int i;
            for (i = 0; i < 3; i++)
                l_2030[i] = 0x19B35F8EL;
            for (g_39 = 0; (g_39 <= (-8)); --g_39)
            { 
                int64_t l_1931 = 0xA61B1871ACEBE82CLL;
                uint32_t * const *l_1941 = &g_847[1][0][0];
                uint32_t * const **l_1940[5][5] = {{&l_1941,&l_1941,&l_1941,&l_1941,&l_1941},{&l_1941,(void*)0,&l_1941,(void*)0,&l_1941},{&l_1941,&l_1941,&l_1941,&l_1941,&l_1941},{&l_1941,&l_1941,&l_1941,&l_1941,(void*)0},{&l_1941,&l_1941,&l_1941,&l_1941,&l_1941}};
                int32_t l_1964[7][6];
                int64_t l_2012 = 0xD2121A4FECFE75BALL;
                int8_t l_2032 = (-6L);
                uint64_t l_2039 = 1UL;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_1964[i][j] = 6L;
                }
            }
            for (l_1694.f1 = (-3); (l_1694.f1 != 51); l_1694.f1 = safe_add_func_uint16_t_u_u(l_1694.f1, 6))
            { 
                int16_t l_2076 = 8L;
                int32_t *l_2081 = &l_1433;
                uint8_t **l_2083[4] = {&g_145[2][0][5],&g_145[2][0][5],&g_145[2][0][5],&g_145[2][0][5]};
                struct S1 l_2084 = {0x72F92A1EL,1UL,0x7212L};
                struct S0 l_2085 = {0xF452L};
                union U2 l_2086 = {-1L};
                uint8_t l_2090 = 7UL;
                int i;
                (*g_339) &= (safe_lshift_func_int16_t_s_s(l_2046, 13));
                if ((*g_416))
                    continue;
                if ((safe_rshift_func_uint8_t_u_u((p_47 ^ (*g_930)), (+(!((***l_1119) = 0xD35CL))))))
                { 
                    int16_t l_2051[7][2][1];
                    int32_t l_2052[5][4];
                    int8_t * const l_2061 = &g_2062;
                    int8_t * const l_2063 = &g_2064;
                    int8_t * const * const l_2060[6] = {&l_2063,(void*)0,&l_2063,&l_2063,(void*)0,&l_2063};
                    int8_t * const * const *l_2059 = &l_2060[3];
                    int8_t * const * const **l_2058 = &l_2059;
                    int8_t * const * const **l_2066 = (void*)0;
                    int8_t * const * const ***l_2065 = &l_2066;
                    struct S0 l_2082 = {0xCE64L};
                    int32_t * const l_2088[4] = {&l_761[3][0][1],&l_761[3][0][1],&l_761[3][0][1],&l_761[3][0][1]};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_2051[i][j][k] = 0xC00EL;
                        }
                    }
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_2052[i][j] = 0x8AAB9234L;
                    }
                    l_2053++;
                    (*****l_1995) |= (safe_div_func_uint64_t_u_u(((((((*l_2065) = (l_2058 = (void*)0)) == ((+(*g_339)) , &g_1959[0][0][1])) && (((**g_1673) = (l_2076 = (safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint8_t_u_u((((safe_add_func_int64_t_s_s(((g_2073 , 0xB4L) , ((*g_1476) & ((((safe_div_func_uint8_t_u_u(((*g_1674) | p_47), p_47)) > 1UL) && 0L) , 0x59B29B80A167A7BELL))), 0xD3AB3DB0E18812C0LL)) , (-3L)) < p_47), l_2030[2])) , p_47))))) | l_2014)) & l_2051[4][0][0]) >= 0L), (*g_1476)));
                    (*l_2081) ^= ((safe_rshift_func_uint8_t_u_u((l_2090 = ((((((~l_2080) >= ((l_2087 = func_99((*g_144), (*g_1927), p_47, l_2085, l_2086)) == l_2088[1])) , (void*)0) != &g_1413) & l_2089) != (*g_1674))), 5)) || p_47);
                }
                else
                { 
                    return l_1975;
                }
            }
            if (((*g_339) ^= ((l_2016 &= p_47) <= (safe_lshift_func_uint16_t_u_u(((((**g_1769) |= ((safe_mul_func_int8_t_s_s((0x2600L && (((+(safe_lshift_func_int8_t_s_u(((p_47 != ((g_2100 = g_2100) == ((*l_2104) = l_2103))) | ((*l_1783) == (void*)0)), 6))) , 0x67L) == l_2018)), (*****l_1537))) & 0x037BL)) < p_47) != p_47), 13)))))
            { 
                union U2 ***l_2112 = (void*)0;
                union U2 ***l_2113 = (void*)0;
                union U2 ***l_2114 = &l_2111;
                int32_t l_2120[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_2120[i] = 0x59088A6FL;
                (***g_1414) = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((l_1722[2][0][0] , (((g_2115 = ((*l_2114) = l_2111)) == ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_2120[0], (safe_lshift_func_int8_t_s_u(((*g_1674) &= (p_47 | (*****l_1537))), (safe_mul_func_int16_t_s_s(((-1L) ^ ((l_2125 , (*g_1476)) , p_47)), (*g_242))))))), l_1989.f0)) , l_1253)) | l_2120[0])) || 9L), (*g_242))), p_47)), p_47));
            }
            else
            { 
                struct S0 l_2126 = {0x4189L};
                const uint16_t **l_2132[2];
                const uint16_t ***l_2131[6] = {&l_2132[1],&l_2132[1],&l_2132[1],&l_2132[1],&l_2132[1],&l_2132[1]};
                int8_t l_2177 = 0xC6L;
                int32_t l_2178 = (-1L);
                int32_t l_2179[7];
                int i;
                for (i = 0; i < 2; i++)
                    l_2132[i] = &l_2006;
                for (i = 0; i < 7; i++)
                    l_2179[i] = 0x143E2F93L;
                (*g_339) |= ((l_2022 |= ((l_2126 , ((+((safe_div_func_int64_t_s_s((l_2130 == l_2131[3]), p_47)) , (safe_mod_func_int32_t_s_s(((1UL > ((*g_242) >= 0x5767L)) || 0xEA95927AL), 4294967295UL)))) | p_47)) < l_1935)) | 2UL);
                for (l_1038 = 0; (l_1038 <= 6); l_1038 += 1)
                { 
                    int8_t **l_2142 = &g_1674;
                    uint32_t *l_2143 = &g_1049[3];
                    uint32_t *l_2146 = &g_162;
                    int32_t l_2147 = 0x5FD38649L;
                    (***g_1414) = ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((*g_144) = (void*)0) == l_2139), p_47)) > ((*l_2146) &= (safe_div_func_uint16_t_u_u((*g_242), (((void*)0 != l_2142) ^ ((*l_2143)++)))))), (0L ^ (*g_242)))) > l_2147);
                    (*g_339) ^= ((safe_rshift_func_int16_t_s_u(p_47, (((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((~((***g_1352) = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_2147 < (+(safe_sub_func_uint8_t_u_u(((*l_2139) = ((void*)0 == (**g_1413))), (safe_lshift_func_int16_t_s_u(((l_2164[3] > (((***l_2130) = l_2016) != 0L)) == (*g_1476)), 8)))))), 0)), p_47)) || 0xA3CD57E038DF95F1LL))), p_47)), 1UL)) >= p_47) < l_2126.f0))) & l_2126.f0);
                    return l_2126;
                }
                for (g_39 = 0; (g_39 <= 1); g_39 += 1)
                { 
                    (**g_1353) |= 0x790758B9L;
                    return l_2126;
                }
                for (g_146 = 0; (g_146 <= 3); g_146 += 1)
                { 
                    int8_t *l_2169 = &g_2062;
                    struct S1 *l_2176 = (void*)0;
                    int i;
                    (***g_1352) = ((-7L) == (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((((*l_2169) = ((*g_1674) = l_2164[g_146])) == ((safe_sub_func_int64_t_s_s((((*g_242) != ((safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((p_47 , p_47), (&l_1694 != l_2176))) >= p_47), p_47)) & l_2177)) , 0xB8790D553A083E5DLL), (*g_429))) || (-7L))) | 0x5C5EL), 4)), (*****l_1995))));
                    return l_2126;
                }
                l_2180++;
            }
            return l_2183;
        }
    }
    else
    { 
        uint8_t l_2184 = 246UL;
        ++l_2184;
    }
    return l_855;
}



static uint16_t  func_51(const int32_t * p_52)
{ 
    uint64_t l_57 = 18446744073709551615UL;
    int64_t *l_72 = &g_19[2];
    int16_t *l_73 = &g_39;
    int64_t ** const *l_705 = &g_428;
    int64_t ** const **l_704 = &l_705;
    int64_t ** const ***l_703 = &l_704;
    int32_t l_740 = 0L;
    if (((*g_339) = func_53((safe_add_func_int8_t_s_s(((l_57 , (g_36 ^ (safe_mul_func_int8_t_s_s(g_10[0][0], (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(1L)), g_10[0][0])))))) && (&g_36 != ((*g_144) = func_63((safe_lshift_func_int8_t_s_u(((g_10[0][0] , 0UL) <= l_57), l_57)), g_71, &g_19[4], l_72, l_73)))), 0x17L)))))
    { 
        uint16_t l_698[6][1];
        const struct S1 *l_713 = &g_387;
        const struct S1 **l_712 = &l_713;
        int8_t l_736[4];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_698[i][j] = 7UL;
        }
        for (i = 0; i < 4; i++)
            l_736[i] = (-3L);
        (*g_416) = (((&g_457 != (void*)0) != (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_57 != (**g_428)), (safe_unary_minus_func_uint16_t_u(0xBDDBL)))), 0xFBL))) >= (((l_698[4][0] , l_698[3][0]) != l_698[4][0]) != l_57));
lbl_722:
        (*g_339) &= (((*g_416) = (((safe_div_func_uint8_t_u_u((l_698[4][0] < (safe_sub_func_int16_t_s_s(((g_706 = l_703) == (void*)0), ((safe_mul_func_uint16_t_u_u(l_57, (safe_add_func_int64_t_s_s(((void*)0 != l_712), (safe_mul_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(2UL, l_698[4][0])), l_698[4][0])) || l_698[4][0]) , (void*)0) == (void*)0), 255UL)))))) , l_698[4][0])))), l_57)) && l_698[4][0]) || l_698[2][0])) & l_698[4][0]);
        for (g_498 = (-21); (g_498 < 45); g_498 = safe_add_func_uint8_t_u_u(g_498, 6))
        { 
            union U2 l_732 = {0x4340L};
            int32_t l_738 = 0xA796EC20L;
            const struct S0 *l_743 = &g_391;
            const struct S0 **l_744 = &l_743;
            for (g_146 = 0; (g_146 <= 0); g_146 += 1)
            { 
                struct S1 l_733 = {0xB2AC8C37L,0x164CL,0xA783L};
                for (g_88 = 0; (g_88 >= 0); g_88 -= 1)
                { 
                    union U2 l_737 = {-1L};
                    int8_t *l_739[1][6][4] = {{{&l_736[0],&l_736[0],&l_736[0],(void*)0},{&l_736[0],&l_736[0],&l_736[1],&l_736[0]},{(void*)0,&l_736[1],(void*)0,&l_736[1]},{(void*)0,&l_736[1],(void*)0,&l_736[0]},{&l_736[1],&l_736[0],&l_736[0],(void*)0},{&l_736[0],&l_736[0],&l_736[0],&l_736[0]}}};
                    int32_t *l_741 = &g_742[1];
                    int i, j, k;
                    if (g_146)
                        goto lbl_722;
                    g_10[g_88][g_146] = 0x65BE8448L;
                    if (g_10[g_146][g_88])
                        break;
                    (*g_416) &= 0x8E2A1207L;
                    (*l_741) &= (safe_rshift_func_int16_t_s_s((g_10[g_88][g_88] , (safe_add_func_int8_t_s_s((~(g_387.f0 , ((safe_sub_func_uint16_t_u_u((((l_740 = ((l_738 &= (((safe_unary_minus_func_int64_t_s(((+(0xC2L ^ ((l_732 , func_99((*g_144), l_733, ((safe_rshift_func_int8_t_s_s(((*g_429) != 0L), g_153)) < l_736[0]), g_391, l_737)) == p_52))) , (*****g_706)))) , 65529UL) , (*p_52))) && 0xDBB60549L)) || g_88) , (*g_242)), l_733.f2)) & g_10[0][0]))), l_736[0]))), 14));
                }
            }
            (*l_744) = l_743;
            if ((*g_339))
                break;
            return l_736[2];
        }
        return (*g_242);
    }
    else
    { 
        uint64_t l_750 = 0x7BFC7CDD5F436F3ELL;
        uint32_t l_751 = 0x49C358E6L;
        int32_t l_752 = 0xF8698FD9L;
        l_752 ^= ((*g_429) > (safe_rshift_func_int8_t_s_u((((l_740 , (!0xCC2D113CL)) == ((safe_add_func_int16_t_s_s(l_750, l_57)) >= (*g_242))) <= (((*g_416) &= (65535UL > 0x0432L)) && 4UL)), l_751)));
    }
    return (*g_242);
}



static int32_t  func_53(uint8_t  p_54)
{ 
    int64_t l_672 = 1L;
    int32_t l_677 = 0x50B0D29AL;
    int32_t l_692[4];
    int i;
    for (i = 0; i < 4; i++)
        l_692[i] = 0x21D377D8L;
    (*g_339) = (safe_div_func_int64_t_s_s(l_672, p_54));
    for (g_457 = (-8); (g_457 <= 1); ++g_457)
    { 
        uint32_t *l_675[7] = {&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162};
        int32_t l_676 = 0x5B76AB42L;
        int32_t l_678 = 0x1E45620FL;
        int32_t l_679[2][6] = {{0x575F096AL,0x2C17809DL,0x2C17809DL,0x575F096AL,0x2C17809DL,0x2C17809DL},{0x575F096AL,0x2C17809DL,0x2C17809DL,0x575F096AL,0x2C17809DL,0x2C17809DL}};
        int i, j;
        (*g_339) |= ((*g_416) ^= (((--g_162) < p_54) & ((l_692[2] &= (safe_rshift_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((g_141 != (safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((l_676 , 0x7AE73923L) , l_679[0][2]), ((p_54 == g_36) , p_54))), 4))) , l_672), l_677)) != 0x7BAFL), 248UL)) ^ 0x04L) , (*g_242)) >= l_676) && 0xB56B1C90L), 0))) <= l_676)));
    }
    return l_677;
}



static uint8_t * func_63(int8_t  p_64, struct S1  p_65, const int64_t * p_66, int64_t * p_67, int16_t * p_68)
{ 
    int8_t l_90 = 1L;
    struct S0 l_143[5][3] = {{{9L},{0xF8E0L},{1L}},{{0xF8E0L},{9L},{9L}},{{1L},{9L},{8L}},{{0x9E1EL},{0xF8E0L},{0xA2F2L}},{{1L},{1L},{0xA2F2L}}};
    int32_t l_582[7];
    uint32_t l_638 = 0x412763E0L;
    union U2 l_646 = {1L};
    int32_t *l_665 = &l_582[3];
    int16_t *l_669 = &g_129;
    int i, j;
    for (i = 0; i < 7; i++)
        l_582[i] = 0L;
    for (g_39 = 0; (g_39 > (-29)); --g_39)
    { 
        uint8_t *l_76 = (void*)0;
        uint8_t *l_77[7];
        int32_t l_78 = 0xFC9DABC5L;
        int32_t l_79 = 0x91560F21L;
        int32_t *l_83 = &g_10[0][0];
        uint8_t **l_84 = &l_77[0];
        uint16_t *l_85 = &g_71.f1;
        int32_t *l_86 = (void*)0;
        int32_t *l_87 = &l_78;
        int32_t *l_89 = (void*)0;
        struct S1 l_124 = {0xC53E4AB2L,0xA36CL,0xB12FL};
        struct S0 l_131 = {0xBFA5L};
        union U2 l_132[6] = {{0x66FFL},{0L},{0L},{0x66FFL},{0L},{0L}};
        struct S1 *l_607[2];
        int i;
        for (i = 0; i < 7; i++)
            l_77[i] = &g_36;
        for (i = 0; i < 2; i++)
            l_607[i] = (void*)0;
        if ((l_90 = (g_88 ^= ((*l_87) = (0x15EAL > ((*l_85) = (((*l_84) = (((*l_83) = ((g_82[1][1][4] = (++g_36)) < 1UL)) , l_77[2])) != (void*)0)))))))
        { 
            uint8_t *l_105 = &g_36;
            int32_t l_127 = 0x8CF3A2ABL;
            int16_t *l_128 = &g_129;
            const uint8_t l_130 = 0xEAL;
            struct S0 l_604 = {0x6979L};
            if ((!(safe_mod_func_int16_t_s_s((func_94(func_99(l_105, g_71, ((safe_mul_func_uint8_t_u_u(g_10[0][0], (safe_sub_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((g_6 , ((*l_105) = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((*l_128) = ((safe_add_func_uint16_t_u_u((g_39 | (safe_sub_func_uint8_t_u_u((l_124 , (safe_unary_minus_func_int32_t_s((~(l_127 , (*p_68)))))), g_82[1][1][4]))), 0x94E4L)) >= l_90)) < l_130), g_19[2])), g_10[0][0])), 6)), p_65.f1)))), g_39)), g_10[0][0])))) ^ l_90), l_131, l_132[4]), l_143[3][1], l_130, g_144) , (*p_68)), g_71.f0))))
            { 
                struct S1 **l_608 = &l_607[1];
                for (g_141 = (-27); (g_141 < 39); g_141 = safe_add_func_uint8_t_u_u(g_141, 8))
                { 
                    int32_t l_583 = (-1L);
                    int8_t *l_584 = &l_90;
                    uint8_t l_585 = 255UL;
                    (*g_416) = ((((g_391 , (safe_mod_func_int8_t_s_s((((*l_584) = ((safe_lshift_func_uint16_t_u_u(p_64, 2)) || ((safe_div_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((l_582[1] &= g_498) , ((*l_85) = (((void*)0 != p_68) && (*p_66)))) <= (((0L != l_127) >= 253UL) > 3UL)), 4)), g_82[1][1][4])) , p_64), l_583)) <= 0xD48FE92FL))) & l_585), 8UL))) , g_566) | l_143[3][1].f0) != g_452);
                    (*g_416) ^= 0xC75B0943L;
                }
                for (l_78 = 17; (l_78 != 17); l_78 = safe_add_func_int8_t_s_s(l_78, 4))
                { 
                    uint32_t l_588 = 0x459044ABL;
                    int32_t l_589[3];
                    int8_t *l_605 = &l_90;
                    struct S0 *l_606 = &g_391;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_589[i] = 0xA9060318L;
                    l_589[0] ^= l_588;
                    if (p_65.f0)
                        break;
                    (*g_339) = ((safe_add_func_uint32_t_u_u(((0x82EC38AE83052363LL > (safe_add_func_int8_t_s_s((0x764A789990F39C94LL > (+(-1L))), (((*l_87) != (safe_unary_minus_func_int32_t_s((((*p_67) = ((((*l_605) ^= ((safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(0x91L, 1)), (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((l_604 , g_194[0][2].f0), p_64)), 5UL)))) < (-10L))) , 0x3858L) | (*g_242))) | l_143[3][1].f0)))) | 0xD096D1508361F554LL)))) && p_65.f1), l_127)) <= (*l_87));
                    l_606 = l_606;
                }
                if ((*g_416))
                    continue;
                (*l_608) = l_607[1];
                for (l_79 = (-23); (l_79 <= 28); l_79 = safe_add_func_int16_t_s_s(l_79, 6))
                { 
                    uint8_t *l_611 = &g_146;
                    return l_611;
                }
            }
            else
            { 
                int8_t *l_620[1];
                uint32_t *l_621 = &g_162;
                int i;
                for (i = 0; i < 1; i++)
                    l_620[i] = &l_90;
                l_89 = (((*l_621) = ((l_582[1] = (((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((*g_339), 0x5AB3AFDEL)), (safe_lshift_func_uint16_t_u_s((((safe_add_func_int8_t_s_s((p_64 = (&g_339 == (void*)0)), l_90)) < (*p_66)) < ((((-1L) ^ 0x441C933FL) || g_6) && g_387.f2)), 1)))) == 0x59A5C6CB9035DCA8LL) , g_71.f1)) & g_387.f0)) , &g_11);
                (*l_83) = ((void*)0 != l_621);
            }
            for (g_141 = 0; (g_141 >= 14); g_141 = safe_add_func_uint8_t_u_u(g_141, 4))
            { 
                uint32_t l_624 = 0x77C9CC4BL;
                int32_t l_637[1];
                int32_t l_639 = 0x658C6DB7L;
                int i;
                for (i = 0; i < 1; i++)
                    l_637[i] = 0x4E727B7CL;
                l_639 = (0x6B94A3398A278836LL & (l_624 , (l_624 ^ ((safe_unary_minus_func_uint16_t_u(p_64)) | (((*p_66) , (((safe_lshift_func_int16_t_s_s(((l_637[0] = (safe_add_func_uint64_t_u_u(((safe_div_func_int16_t_s_s((((((safe_div_func_int16_t_s_s((~(safe_mul_func_int8_t_s_s(0x57L, l_624))), 0x6989L)) & l_624) ^ p_65.f0) && 0x089619ECB3BC8D84LL) , (*p_68)), 65527UL)) != 18446744073709551611UL), g_162))) , l_127), l_624)) > 0x160EF48B12B40E4CLL) == l_638)) & 0x4BC96E7B72436C86LL)))));
                (*g_416) = ((*l_87) |= (*g_416));
            }
            if (l_582[1])
                continue;
        }
        else
        { 
            uint16_t l_662 = 0UL;
            int32_t **l_664 = &l_87;
            (*l_83) = (safe_add_func_uint32_t_u_u(0x9B3F0EB6L, ((safe_rshift_func_int8_t_s_s((g_663 = (safe_mod_func_uint32_t_u_u(((l_646 , (safe_div_func_int8_t_s_s(0xD7L, (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s(((safe_add_func_int16_t_s_s((g_391 , ((((~(((**l_84) = ((g_313 | (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_65.f0, (safe_unary_minus_func_int16_t_s((*p_68))))), p_65.f2)), (-1L)))) || l_662)) , l_646.f0)) , (*p_68)) > 0L) < l_582[4])), l_662)) && (-1L)))), g_498))))) || 1UL), (*l_87)))), g_372)) , 1UL)));
            (*l_664) = &l_79;
            (*l_664) = &l_78;
        }
        for (g_162 = 0; g_162 < 5; g_162 += 1)
        {
            for (g_387.f1 = 0; g_387.f1 < 4; g_387.f1 += 1)
            {
                for (l_638 = 0; l_638 < 7; l_638 += 1)
                {
                    g_145[g_162][g_387.f1][l_638] = &g_146;
                }
            }
        }
    }
    l_665 = &l_582[4];
    (*l_665) ^= (safe_div_func_int32_t_s_s(((~((l_143[0][2] , l_669) == &g_39)) && 0xC5524747L), p_64));
    return (*g_144);
}



static const struct S1  func_94(int32_t * p_95, struct S0  p_96, uint64_t  p_97, uint8_t ** p_98)
{ 
    uint16_t *l_147 = &g_71.f1;
    union U2 l_150 = {0xC952L};
    const int64_t *l_152[7][1] = {{&g_153},{(void*)0},{&g_153},{(void*)0},{&g_153},{(void*)0},{&g_153}};
    const int64_t **l_151 = &l_152[0][0];
    int64_t * const l_154 = (void*)0;
    int32_t l_174 = 0L;
    int32_t l_177 = 0L;
    int32_t l_178 = (-1L);
    int32_t l_181[6][3] = {{(-1L),5L,(-1L)},{(-1L),0x9961D603L,(-4L)},{(-1L),(-3L),0x1017A0ABL},{(-1L),5L,(-1L)},{(-1L),0x9961D603L,(-4L)},{(-1L),(-3L),0x1017A0ABL}};
    const struct S1 l_289 = {18446744073709551615UL,65528UL,0UL};
    struct S0 l_303 = {-1L};
    int32_t l_309 = 1L;
    uint8_t *l_329 = &g_146;
    int16_t l_354 = 0x28FEL;
    uint32_t l_358 = 0UL;
    int16_t l_361 = (-1L);
    int32_t l_363 = 1L;
    uint16_t l_365 = 0x2295L;
    int32_t *l_388 = &l_174;
    int32_t l_392[1];
    uint32_t *l_454 = &g_334;
    uint32_t ** const l_453 = &l_454;
    int32_t l_540 = 8L;
    uint32_t l_545 = 0x672CF580L;
    int16_t l_549 = 2L;
    int64_t l_550 = 0xF749D39D7D599FCELL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_392[i] = 0x14E9CFBBL;
    if (((*p_95) = (((void*)0 == l_147) | (((safe_mod_func_uint8_t_u_u((((*l_151) = ((((void*)0 != (*p_98)) , l_150) , (void*)0)) != l_154), p_97)) ^ l_150.f0) && l_150.f0))))
    { 
        int64_t *l_163 = (void*)0;
        int32_t l_166[1][5][7] = {{{(-4L),0xEC7AF4A4L,(-4L),0xEC7AF4A4L,(-4L),0xEC7AF4A4L,(-4L)},{(-4L),(-4L),3L,3L,(-4L),(-4L),3L},{1L,0xEC7AF4A4L,1L,0xEC7AF4A4L,1L,0xEC7AF4A4L,1L},{(-4L),3L,3L,(-4L),(-4L),3L,3L},{(-4L),0xEC7AF4A4L,(-4L),0xEC7AF4A4L,(-4L),0xEC7AF4A4L,(-4L)}}};
        int8_t l_182 = 0L;
        int16_t l_221 = 0L;
        int32_t *l_323 = &l_181[5][2];
        struct S0 l_331 = {1L};
        uint32_t *l_346[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t **l_345 = &l_346[2];
        int16_t l_355[2];
        int8_t l_356 = 0x19L;
        int8_t l_417 = 0xE5L;
        struct S1 l_419 = {1UL,0UL,0x1F5BL};
        int32_t l_434 = 0L;
        int32_t l_436 = 1L;
        struct S0 *l_462 = &l_303;
        union U2 l_488[2] = {{0x5812L},{0x5812L}};
        int8_t l_494[2];
        int64_t ** const *l_532[4][4][4] = {{{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428}},{{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428}},{{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428}},{{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428},{&g_428,&g_428,&g_428,&g_428}}};
        int64_t ** const * const *l_531 = &l_532[3][2][0];
        int64_t ** const * const **l_530 = &l_531;
        int32_t *l_539 = &l_174;
        int32_t *l_541 = &l_177;
        int32_t *l_542 = &l_166[0][4][4];
        int32_t *l_543[4][6][2] = {{{&l_178,&g_10[0][0]},{&l_181[2][1],(void*)0},{(void*)0,(void*)0},{&l_181[2][1],&g_10[0][0]},{&l_178,(void*)0},{&g_10[0][0],&l_181[2][1]}},{{(void*)0,&g_10[0][0]},{&l_166[0][4][5],&l_166[0][4][5]},{&l_166[0][4][5],&g_10[0][0]},{(void*)0,&l_181[2][1]},{&g_10[0][0],(void*)0},{&l_178,&g_10[0][0]}},{{&l_181[2][1],(void*)0},{(void*)0,(void*)0},{&l_181[2][1],&g_10[0][0]},{&l_178,(void*)0},{&g_10[0][0],&l_181[2][1]},{(void*)0,&g_10[0][0]}},{{&l_166[0][4][5],&l_166[0][4][5]},{&l_166[0][4][5],&g_10[0][0]},{(void*)0,&l_181[2][1]},{&g_10[0][0],(void*)0},{&l_178,&g_10[0][0]},{&l_181[2][1],(void*)0}}};
        int16_t l_544 = 0x13AEL;
        int64_t l_548 = 0x3139F8440585128ELL;
        uint32_t l_551[7][6] = {{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_355[i] = 0x2596L;
        for (i = 0; i < 2; i++)
            l_494[i] = 0xE4L;
        (*p_95) = (~(safe_sub_func_uint16_t_u_u(0xB118L, (((*l_147) = (((safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s((g_162 > (p_96.f0 > (g_162 ^ (g_19[2] = 0L)))), ((safe_mul_func_uint16_t_u_u(0UL, g_153)) || l_166[0][4][5]))), 0x0AA81E9DA67FBDCDLL)) & (*p_95)) < 1UL)) && p_96.f0))));
lbl_536:
        if (g_10[0][0])
        { 
            int32_t *l_167 = &l_166[0][2][2];
            int32_t l_173[7][2] = {{0xBBCB40BAL,0x9D5DD3FFL},{0x49D7A6C0L,0x49D7A6C0L},{0x9D5DD3FFL,0xBBCB40BAL},{0x93C7B1C5L,0xBBCB40BAL},{0x9D5DD3FFL,0x49D7A6C0L},{0x49D7A6C0L,0x9D5DD3FFL},{0xBBCB40BAL,0x93C7B1C5L}};
            uint64_t l_188 = 1UL;
            uint64_t l_222[3][2] = {{8UL,8UL},{8UL,8UL},{8UL,8UL}};
            uint32_t *l_301 = &g_162;
            struct S1 l_316 = {6UL,0x2DF4L,0xE927L};
            uint32_t **l_347 = &l_346[1];
            int32_t l_357 = (-4L);
            int8_t l_362 = 0L;
            int32_t l_364 = 6L;
            int i, j;
            if (((*l_167) &= (*p_95)))
            { 
                int32_t l_175 = (-1L);
                int32_t l_176 = 0x8E59B3DBL;
                int32_t l_179 = 6L;
                int32_t l_180[1];
                uint32_t l_184 = 0x89DCC67EL;
                int16_t *l_187 = &g_129;
                uint32_t l_237 = 0xA7E96D4FL;
                int i;
                for (i = 0; i < 1; i++)
                    l_180[i] = 0x7A973355L;
                for (g_146 = 0; (g_146 > 14); ++g_146)
                { 
                    int32_t *l_170 = &l_166[0][4][6];
                    int32_t *l_171 = &g_10[0][0];
                    int32_t *l_172[6] = {&g_88,(void*)0,(void*)0,&g_88,(void*)0,(void*)0};
                    int32_t l_183 = 9L;
                    int i;
                    ++l_184;
                }
                if ((p_97 & (((0xD9L > (((((((*l_187) = p_96.f0) | (((((*l_167) = (0x0643L > ((*l_147) = l_188))) > ((*p_95) = (safe_lshift_func_int16_t_s_s(p_97, (safe_rshift_func_int8_t_s_s((l_182 && g_39), l_180[0])))))) == l_177) && g_146)) | 0xFCL) || 0x0AB5C316L) < g_39) , 250UL)) , l_181[3][0]) , p_97)))
                { 
                    union U2 **l_195 = &g_193;
                    int32_t **l_196 = &l_167;
                    (*l_195) = g_193;
                    (*l_196) = &g_10[0][0];
                    (*p_95) &= (g_10[0][0] = 9L);
                }
                else
                { 
                    uint32_t l_200 = 0x292751E0L;
                    uint32_t *l_204 = &g_162;
                    int8_t *l_205 = &l_182;
                    uint8_t *l_206 = &g_36;
                    int32_t l_207 = 0x83DB2FD4L;
                    uint64_t *l_213 = &g_141;
                    uint32_t *l_223 = &l_200;
                    int32_t *l_226 = &l_174;
                    int32_t *l_227 = &l_178;
                    int32_t *l_228 = &l_207;
                    int32_t *l_229 = &l_181[4][1];
                    int32_t *l_230 = (void*)0;
                    int32_t *l_231 = (void*)0;
                    int32_t *l_232 = &l_176;
                    int32_t *l_233 = (void*)0;
                    int32_t *l_234 = (void*)0;
                    int32_t *l_235 = &l_181[2][1];
                    int32_t *l_236[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_236[i] = &l_173[1][1];
                    (*p_95) &= l_182;
                    (*p_95) &= ((+((l_207 = ((*l_206) = (((*l_205) ^= (l_166[0][2][2] = ((safe_sub_func_int64_t_s_s(((l_200 != p_97) & (safe_mul_func_int8_t_s_s(p_96.f0, p_97))), (safe_unary_minus_func_uint32_t_u(p_96.f0)))) | ((*l_204) &= (&g_11 != &g_11))))) && l_200))) == p_96.f0)) >= p_96.f0);
                    l_207 |= ((*p_95) = (g_19[2] | (((safe_unary_minus_func_uint64_t_u(0x075A880BEC96DE08LL)) && (safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((((*l_213) = l_166[0][4][5]) >= 1L), (safe_rshift_func_int16_t_s_s((((void*)0 == &g_129) , (l_150.f0 , 0x0016L)), g_82[1][0][3])))), g_129))) , g_141)));
                    (*l_226) = ((*p_95) = ((((safe_unary_minus_func_uint8_t_u((((safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u((l_221 > l_222[1][1]), g_129)) ^ (*p_95)) > ((*l_167) = (p_96.f0 , ((*l_147) = ((((((*l_223)++) , (void*)0) != p_95) >= p_96.f0) >= 0L))))) | l_182), 0x66AAL)) , g_71) , p_96.f0))) == (-6L)) | g_10[0][0]) , l_181[5][1]));
                    l_237++;
                }
                for (l_221 = (-25); (l_221 <= (-12)); ++l_221)
                { 
                    uint16_t **l_243 = (void*)0;
                    uint16_t **l_244 = &l_147;
                    uint16_t *l_245 = (void*)0;
                    uint16_t *l_247 = &g_71.f1;
                    uint16_t **l_246 = &l_247;
                    uint32_t l_264 = 0xFAFC3317L;
                    int32_t **l_265 = &l_167;
                    (*p_95) &= ((((l_245 = ((*l_244) = g_242)) != ((*l_246) = g_242)) , (safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0x8C40L, (((+l_182) , ((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s(p_97)) < g_11), (safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(p_97, l_166[0][4][5])) <= g_19[2]), g_129)))), l_264)) <= g_153)) , (*g_242)))) ^ (*g_242)), l_237)) , g_146), 6))) < p_96.f0);
                    (*l_167) = g_194[0][2].f0;
                    (*l_265) = p_95;
                }
                l_179 |= (*p_95);
            }
            else
            { 
                int32_t *l_266 = &l_181[2][1];
                int32_t *l_267 = &l_173[0][0];
                int32_t *l_268 = &l_173[3][1];
                int32_t *l_269 = &l_181[2][1];
                int32_t *l_270 = &l_181[2][1];
                int32_t *l_271[3];
                uint32_t l_272 = 0x051ED705L;
                int8_t *l_278 = &l_182;
                uint32_t **l_298 = (void*)0;
                uint32_t *l_300 = &g_162;
                uint32_t **l_299[7] = {&l_300,&l_300,&l_300,&l_300,&l_300,&l_300,&l_300};
                uint64_t l_302 = 0x46D45E5A649F2D25LL;
                union U2 l_321[7] = {{0x28FAL},{-8L},{0x28FAL},{0x28FAL},{-8L},{0x28FAL},{0x28FAL}};
                struct S0 l_330 = {-6L};
                int32_t **l_340 = &l_167;
                int i;
                for (i = 0; i < 3; i++)
                    l_271[i] = &l_181[1][2];
                --l_272;
                l_166[0][3][6] = ((*l_267) = ((safe_sub_func_uint64_t_u_u(((*g_193) , ((~(((((*l_278) |= 0x0DL) < (l_271[2] == (void*)0)) >= ((*l_270) = (((safe_add_func_int32_t_s_s((((((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((*p_95), (((l_289 , 1L) <= p_96.f0) <= (*l_167)))), 0x07L)), l_221)) <= 0UL) < p_97) && (-3L)) > (*l_268)), (*l_167))) ^ l_166[0][4][5]) , (-10L)))) != 0UL)) > (*g_242))), 2UL)) || g_19[2]));
                if (((l_177 = ((p_97 ^ 1L) >= (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((&g_162 != ((safe_sub_func_uint32_t_u_u(l_150.f0, (*p_95))) , (l_301 = l_167))), ((*p_95) & l_302))) , l_303) , 0x9FL), 1)), l_303.f0)))) == l_166[0][0][6]))
                { 
                    int16_t l_304 = 0xD401L;
                    int32_t l_305 = 0L;
                    int32_t l_306 = 1L;
                    int32_t l_307 = (-6L);
                    int32_t l_308 = 0x24EFC4C1L;
                    int32_t l_310 = 0x1E3DFD95L;
                    int32_t l_311 = 0xBBA73491L;
                    int32_t l_312 = 0x4164E1BEL;
                    int32_t **l_322 = &l_167;
                    g_313++;
                    (*l_322) = func_99(((*g_144) = (*g_144)), l_316, (g_39 == ((-1L) > (safe_sub_func_uint32_t_u_u((&l_152[0][0] != ((safe_rshift_func_uint16_t_u_s((g_71.f1 >= p_97), 15)) , (void*)0)), 0L)))), p_96, l_321[0]);
                }
                else
                { 
                    int32_t **l_324 = &l_266;
                    uint32_t *l_333[6] = {&g_334,&g_334,&g_334,&g_334,&g_334,&g_334};
                    uint32_t **l_332 = &l_333[4];
                    uint32_t *l_336 = &g_334;
                    uint32_t **l_335 = &l_336;
                    uint32_t *l_338 = &g_334;
                    uint32_t **l_337 = &l_338;
                    int i;
                    (*l_324) = l_323;
                    (*p_95) = (((*l_300) = ((safe_rshift_func_uint16_t_u_u((((*l_167) = 251UL) , ((*l_147) = (((safe_mul_func_int16_t_s_s((((g_71 , 0xD962L) && ((void*)0 != l_329)) <= (l_330 , ((g_146 > (*l_323)) >= (*g_242)))), (*g_242))) >= 6L) & 255UL))), 4)) ^ (*l_323))) , (-4L));
                    (*l_323) = (l_331 , ((p_97 , (((*p_95) &= 0x23DBF511L) < g_82[1][1][4])) | (((*l_337) = ((*l_335) = ((*l_332) = p_95))) != p_95)));
                    (*l_324) = p_95;
                }
                (*l_340) = g_339;
            }
            for (l_182 = (-5); (l_182 == 20); l_182 = safe_add_func_int16_t_s_s(l_182, 4))
            { 
                int8_t l_352 = 0x26L;
                int32_t *l_353[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_353[i] = &l_174;
                (*l_167) = (((safe_sub_func_uint16_t_u_u((((l_150 , ((p_97 , (*g_193)) , (l_345 != l_347))) || ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((void*)0 == &l_173[3][0]), 0xAB44L)) || 255UL), 0x96E83B05L)) > 0xF11FEB0CD92A0801LL)) >= (*g_339)), 0x4F37L)) >= l_352) ^ 0xEC7222330D613D2ALL);
                l_358--;
                --l_365;
            }
        }
        else
        { 
            int32_t *l_368 = (void*)0;
            int32_t *l_369 = (void*)0;
            int32_t *l_370 = (void*)0;
            int32_t *l_371[4] = {&l_174,&l_174,&l_174,&l_174};
            int i;
            g_372++;
            for (g_372 = 0; (g_372 <= 5); g_372 += 1)
            { 
                int32_t l_395 = 1L;
                int32_t l_396[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_396[i] = 7L;
                (*l_323) = (safe_div_func_int32_t_s_s(((*p_95) = (((!(g_19[g_372] = (!(safe_mul_func_uint16_t_u_u((g_19[g_372] && 1L), ((*g_242)--)))))) < (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((g_387 , p_95) == (l_388 = &g_10[0][0])), (safe_add_func_int32_t_s_s(0x1597FA75L, ((g_391 , l_178) | 0x80D8L))))), 6))) > l_392[0])), 0x3D366286L));
                if ((safe_lshift_func_uint16_t_u_u(p_97, 13)))
                { 
                    uint8_t l_397 = 0xEEL;
                    (*g_339) = g_19[g_372];
                    if ((*l_323))
                        break;
                    --l_397;
                    if ((*g_339))
                        break;
                }
                else
                { 
                    (*l_388) = l_396[0];
                }
            }
        }
        for (g_372 = (-7); (g_372 < 59); ++g_372)
        { 
            union U2 l_409 = {0x2938L};
            struct S0 l_425 = {-1L};
            int64_t **l_427 = &l_163;
            int32_t *l_432 = (void*)0;
            int32_t *l_433[3][4][6] = {{{&l_181[1][0],&l_181[1][0],&l_166[0][4][0],&l_174,&l_166[0][4][0],&l_181[1][0]},{&l_166[0][4][0],&l_181[3][2],&l_174,&l_174,&l_181[3][2],&l_166[0][4][0]},{&l_181[1][0],&l_166[0][4][0],&l_174,&l_166[0][4][0],&l_181[1][0],&l_181[1][0]},{&l_309,&l_166[0][4][0],&l_166[0][4][0],&l_309,&l_181[3][2],&l_309}},{{&l_309,&l_181[3][2],&l_309,&l_166[0][4][0],&l_166[0][4][0],&l_309},{&l_181[1][0],&l_181[1][0],&l_166[0][4][0],&l_174,&l_166[0][4][0],&l_181[1][0]},{&l_166[0][4][0],&l_181[3][2],&l_174,&l_174,&l_181[3][2],&l_166[0][4][0]},{&l_181[1][0],&l_166[0][4][0],&l_174,&l_166[0][4][0],&l_181[1][0],&l_181[1][0]}},{{&l_309,&l_166[0][4][0],&l_166[0][4][0],&l_309,&l_181[3][2],&l_309},{&l_309,&l_181[3][2],&l_309,&l_166[0][4][0],&l_166[0][4][0],&l_309},{&l_181[1][0],&l_181[1][0],&l_166[0][4][0],&l_174,&l_166[0][4][0],&l_181[1][0]},{&l_166[0][4][0],&l_181[3][2],&l_174,&l_174,&l_181[3][2],&l_166[0][4][0]}}};
            int8_t l_435 = (-6L);
            uint32_t l_437 = 1UL;
            uint64_t l_447 = 18446744073709551615UL;
            int64_t *l_451 = &g_452;
            int64_t *l_455 = &g_456;
            struct S1 l_470 = {8UL,0x50AEL,0xCDA3L};
            int16_t l_527 = 0xC93FL;
            int64_t ** const * const **l_533[4][6][2] = {{{&l_531,(void*)0},{&l_531,&l_531},{&l_531,&l_531},{&l_531,(void*)0},{&l_531,&l_531},{&l_531,&l_531}},{{&l_531,(void*)0},{&l_531,&l_531},{&l_531,&l_531},{&l_531,(void*)0},{&l_531,&l_531},{&l_531,&l_531}},{{&l_531,(void*)0},{&l_531,&l_531},{&l_531,&l_531},{&l_531,(void*)0},{&l_531,&l_531},{&l_531,&l_531}},{{&l_531,(void*)0},{&l_531,&l_531},{&l_531,&l_531},{&l_531,(void*)0},{&l_531,&l_531},{&l_531,&l_531}}};
            int i, j, k;
            for (l_150.f0 = 24; (l_150.f0 == (-22)); l_150.f0 = safe_sub_func_int64_t_s_s(l_150.f0, 1))
            { 
                uint8_t ***l_408 = &g_144;
                int32_t l_412 = 0x3E3A4A07L;
            }
            ++l_437;
            g_457 ^= ((((*l_455) = ((safe_sub_func_int64_t_s_s((((*g_339) , (*l_388)) | (safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*g_242) || p_97), ((+(((((((l_447 >= ((*l_388) != (~(safe_sub_func_int64_t_s_s(((*l_451) &= ((**g_428) = (*l_323))), (*l_388)))))) & p_96.f0) | (*l_323)) , &l_447) != l_163) , l_453) != (void*)0)) == p_97))), p_96.f0))), p_96.f0)) > p_96.f0)) && (*l_323)) > (*l_323));
            for (g_387.f1 = 0; (g_387.f1 <= 3); g_387.f1 += 1)
            { 
                int32_t l_458 = 0x93C7FB5CL;
                for (l_358 = 0; (l_358 <= 3); l_358 += 1)
                { 
                    uint8_t l_459 = 1UL;
                    struct S0 **l_463 = (void*)0;
                    struct S0 **l_464 = &l_462;
                    uint64_t *l_473 = &g_313;
                    int8_t *l_475 = (void*)0;
                    int8_t *l_476 = &l_417;
                    l_459++;
                    if ((*g_416))
                        break;
                    (*g_339) = (-1L);
                    (*l_464) = l_462;
                    (*l_323) = ((*g_339) ^= (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((((((*l_476) ^= (!((l_470 , ((p_97 >= (-1L)) != ((*l_388) <= (*l_323)))) > (((safe_sub_func_uint64_t_u_u(((*l_473) |= l_459), ((safe_unary_minus_func_uint32_t_u((*l_388))) != g_387.f2))) != l_458) & p_96.f0)))) <= 0UL) , (-1L)) , (void*)0) == &p_98), p_97)), g_36)));
                }
            }
            if ((((!((g_457 , (*g_193)) , ((*l_388) && (safe_rshift_func_uint8_t_u_u((l_150 , ((*l_329) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((g_71.f1 != ((safe_add_func_int32_t_s_s((((*l_323) | (l_488[0] , (*l_323))) , (-1L)), 0x1F8F66EAL)) & g_82[1][1][3])), p_97)), 4)), (*l_323))))), (*l_323)))))) || 0x8DL) && g_71.f0))
            { 
                union U2 l_489 = {0xA3ACL};
                int32_t l_497[5][6][1] = {{{0L},{(-1L)},{0L},{0L},{(-1L)},{0L}},{{0L},{(-1L)},{0L},{0L},{(-1L)},{0L}},{{0L},{(-1L)},{0L},{0L},{(-1L)},{0L}},{{0L},{(-1L)},{0L},{0L},{(-1L)},{0L}},{{0L},{(-1L)},{0L},{0L},{(-1L)},{0L}}};
                int i, j, k;
                (*p_95) |= (l_489 , (safe_sub_func_uint16_t_u_u((*g_242), ((*l_388) || (safe_lshift_func_uint16_t_u_s(l_494[0], 9))))));
                for (l_356 = 0; (l_356 != 9); l_356 = safe_add_func_uint16_t_u_u(l_356, 3))
                { 
                    g_498++;
                }
                for (l_354 = (-14); (l_354 < 15); l_354 = safe_add_func_int64_t_s_s(l_354, 2))
                { 
                    uint64_t *l_505 = (void*)0;
                    uint64_t *l_506 = (void*)0;
                    uint64_t *l_507 = &g_141;
                    int32_t l_524 = 0x80A55FD7L;
                    if ((*g_339))
                        break;
                    if ((*p_95))
                        continue;
                    if ((*l_323))
                        continue;
                    (*p_95) = ((*l_323) = (safe_mul_func_int8_t_s_s(p_96.f0, ((-10L) || (((++(*l_507)) | ((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(4L, 6)) > (safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((l_524 && (1L <= ((&l_355[0] == (((safe_sub_func_int64_t_s_s((p_96.f0 , p_97), l_497[2][3][0])) | 0L) , &g_39)) & 18446744073709551615UL))) > g_19[2]), 1)), p_97)), 3))), p_97)), (*l_388))), p_96.f0)) < p_97) ^ (*p_95)) == (*l_388))) | (-2L))))));
                }
            }
            else
            { 
                if ((&l_494[1] == (void*)0))
                { 
                    if ((*l_388))
                        break;
                }
                else
                { 
                    const int64_t ***l_528[1];
                    const int64_t ***l_529 = &g_414;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_528[i] = (void*)0;
                    if (l_527)
                        break;
                    (*l_529) = (*g_413);
                    l_533[2][4][0] = l_530;
                }
                for (l_354 = (-15); (l_354 == (-30)); --l_354)
                { 
                    if (l_470.f1)
                        goto lbl_536;
                }
                for (g_456 = 25; (g_456 <= (-14)); g_456 = safe_sub_func_uint16_t_u_u(g_456, 9))
                { 
                    return g_387;
                }
                p_95 = p_95;
            }
        }
        ++l_545;
        --l_551[3][3];
    }
    else
    { 
        const uint8_t *l_565 = &g_566;
        const uint8_t **l_564 = &l_565;
        const uint8_t ***l_563 = &l_564;
        (*p_95) = ((((65535UL || (safe_add_func_int16_t_s_s(((g_146 >= (+((safe_lshift_func_uint16_t_u_u((*g_242), (safe_lshift_func_uint8_t_u_u(0x17L, (&l_303 != (void*)0))))) || ((safe_sub_func_int64_t_s_s((-7L), (*l_388))) , 5UL)))) <= g_146), 0x9CAFL))) & 0x817AL) , p_97) , (*g_416));
        if (((*l_388) = ((1L ^ (((((((p_97 , ((*l_563) = (void*)0)) == p_98) >= 0x255C9D82L) , (*l_151)) == (void*)0) | (-7L)) < 0xAC280BDBL)) , 1L)))
        { 
            for (l_361 = 0; (l_361 <= 0); l_361 += 1)
            { 
                int32_t *l_567[3];
                int32_t **l_568 = &l_567[2];
                int i;
                for (i = 0; i < 3; i++)
                    l_567[i] = &g_11;
                (*l_568) = l_567[1];
                return g_387;
            }
            return g_387;
        }
        else
        { 
            int16_t l_569 = (-4L);
            l_569 = 0xE94E9E23L;
            return g_387;
        }
    }
    return l_289;
}



static int32_t * func_99(uint8_t * p_100, struct S1  p_101, uint32_t  p_102, struct S0  p_103, union U2  p_104)
{ 
    int8_t l_135 = 9L;
    int32_t *l_138 = (void*)0;
    int32_t *l_140[6][5] = {{(void*)0,(void*)0,&g_11,&g_11,&g_11},{(void*)0,(void*)0,&g_11,&g_10[0][0],&g_10[0][0]},{&g_11,&g_11,&g_10[0][0],&g_10[0][0],&g_10[0][0]},{&g_11,&g_11,&g_10[0][0],&g_10[0][0],&g_10[0][0]},{&g_11,&g_11,&g_10[0][0],&g_10[0][0],&g_10[0][0]},{&g_11,&g_11,&g_10[0][0],&g_10[0][0],&g_10[0][0]}};
    int32_t **l_139 = &l_140[3][3];
    int32_t l_142 = (-8L);
    int i, j;
    l_142 = (safe_mul_func_uint8_t_u_u((l_135 < (safe_rshift_func_int8_t_s_s((((((p_102 , (void*)0) == (void*)0) , l_138) == ((*l_139) = l_138)) <= (g_141 ^= 4UL)), 4))), p_101.f2));
    return &g_88;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_10[i][j], "g_10[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_19[i], "g_19[i]", print_hash_value);

    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_82[i][j][k], "g_82[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_194[i][j].f0, "g_194[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_387.f0, "g_387.f0", print_hash_value);
    transparent_crc(g_387.f1, "g_387.f1", print_hash_value);
    transparent_crc(g_387.f2, "g_387.f2", print_hash_value);
    transparent_crc(g_391.f0, "g_391.f0", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_742[i], "g_742[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_756[i][j], "g_756[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1049[i], "g_1049[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1296[i].f0, "g_1296[i].f0", print_hash_value);

    }
    transparent_crc(g_1301, "g_1301", print_hash_value);
    transparent_crc(g_1304, "g_1304", print_hash_value);
    transparent_crc(g_1376.f0, "g_1376.f0", print_hash_value);
    transparent_crc(g_1376.f1, "g_1376.f1", print_hash_value);
    transparent_crc(g_1376.f2, "g_1376.f2", print_hash_value);
    transparent_crc(g_1656.f0, "g_1656.f0", print_hash_value);
    transparent_crc(g_1658.f0, "g_1658.f0", print_hash_value);
    transparent_crc(g_1928.f0, "g_1928.f0", print_hash_value);
    transparent_crc(g_1928.f1, "g_1928.f1", print_hash_value);
    transparent_crc(g_1928.f2, "g_1928.f2", print_hash_value);
    transparent_crc(g_2062, "g_2062", print_hash_value);
    transparent_crc(g_2064, "g_2064", print_hash_value);
    transparent_crc(g_2073.f0, "g_2073.f0", print_hash_value);
    transparent_crc(g_2197, "g_2197", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2325[i][j][k], "g_2325[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2335, "g_2335", print_hash_value);
    transparent_crc(g_2376, "g_2376", print_hash_value);
    transparent_crc(g_2424.f0, "g_2424.f0", print_hash_value);
    transparent_crc(g_2424.f1, "g_2424.f1", print_hash_value);
    transparent_crc(g_2424.f2, "g_2424.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
